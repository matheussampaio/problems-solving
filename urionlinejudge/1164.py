#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
url: https://www.urionlinejudge.com.br/judge/en/problems/view/1164
"""
def num_perfeito(num):
    sum_divisors = sum([i for i in range(1, num) if num % i == 0])

    if num == sum_divisors:
        return "{} eh perfeito".format(num)

    return "{} nao eh perfeito".format(num)

def test():
    assert num_perfeito(6) == "6 eh perfeito"
    assert num_perfeito(5) == "5 nao eh perfeito"
    assert num_perfeito(28) == "28 eh perfeito"

def main():
    N = int(input())

    for i in range(N):
        X = int(input())
        print(num_perfeito(X))

if __name__ == "__main__":
    main()
