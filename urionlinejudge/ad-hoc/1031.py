#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
https://www.urionlinejudge.com.br/judge/pt/problems/view/1031
"""

import functools

@functools.lru_cache(maxsize=None)
def crise_energia(N, m = 1):
    regions = [True for i in range(N)]

    index = 0

    for i in range(N - 1):
        regions[index] = False

        if (not regions[12]):
            return crise_energia(N, m + 1)

        count = 0
        while count < m:
            index = (index + 1) % len(regions)
            if regions[index]:
                count += 1

    if regions[12]:
        return m
    else:
        return crise_energia(N, m + 1)

def test():
    assert crise_energia(17) == 7
    assert crise_energia(17) == 7
    assert crise_energia(25) == 26
    assert crise_energia(25) == 26
    assert crise_energia(99) == 15
    assert crise_energia(100) == 66

def main():
    N = int(input())

    while (N):
        print(crise_energia(N))

        N = int(input())

if __name__ == "__main__":
    # test()
    main()
