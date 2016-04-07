#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
https://www.urionlinejudge.com.br/judge/pt/problems/view/1165
"""

def is_prime(num):
    for i in range(2, num):
        if (num % i == 0):
            return "{} nao eh primo".format(num)

    return "{} eh primo".format(num)

def test():
    assert is_prime(8) == "8 nao eh primo"
    assert is_prime(51) == "51 nao eh primo"
    assert is_prime(7) == "7 eh primo"

def main():
    N = int(input())

    for i in range(N):
        X = int(input())
        print(is_prime(X))

if __name__ == "__main__":
    main()
