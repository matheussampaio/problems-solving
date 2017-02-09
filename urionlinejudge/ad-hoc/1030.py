#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
https://www.urionlinejudge.com.br/judge/pt/problems/view/1030
"""

def josephus(n, k):
    ls = list(range(1, n + 1))
    k -= 1
    index = k % len(ls)
    while len(ls) > 1:
        ls.pop(index)
        index = (index + k) % len(ls)

    return ls[0]

def test():
    assert josephus(5, 2) == 3
    assert josephus(6, 3) == 1
    assert josephus(1234, 233) == 25

def main():
    nc = int(input())

    for i in range(1, nc + 1):
        n, k = [int(e) for e in input().split(' ')]

        print("Case {}: {}".format(i, josephus(n, k)))

if __name__ == "__main__":
    # test()
    main()
