#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
https://www.urionlinejudge.com.br/judge/pt/problems/view/1032
"""

import math

dp_primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]

def is_prime(number):
    sqrt = math.sqrt(number)

    if (sqrt % 1.0 == 0.0):
        return False

    for i in range(3, int(sqrt + 1)):
        if number % i == 0:
            return False

    return True


def get_prime(i):
    while i >= len(dp_primes):
        last_prime = dp_primes[-1]
        add = 2

        while not is_prime(last_prime + add):
            add += 2

        dp_primes.append(last_prime + add)

    return dp_primes[i]


def prime_josephus(n):
    ls = list(range(1, n + 1))
    index = 0

    for i in range(n - 1):
        index = (index + get_prime(i) - 1) % len(ls)
        ls.pop(index)

    return ls[0]


def test():
    assert get_prime(9) == 29
    assert get_prime(19) == 71
    assert get_prime(29) == 113
    assert get_prime(39) == 173
    assert prime_josephus(6) == 4
    assert prime_josephus(3500) == 1835
    assert prime_josephus(3501) == 2326

def main():
    nc = int(input())

    while nc:
        print(prime_josephus(nc))

        nc = int(input())


if __name__ == "__main__":
    # test()
    main()
