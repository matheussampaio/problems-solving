#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
https://www.urionlinejudge.com.br/judge/pt/problems/view/1026
"""

def xor(x, y):
    return x ^ y

def test():
    assert xor(4, 6) == 2
    assert xor(6, 9) == 15

def main():
    while True:
        try:
            line = input()
        except EOFError:
            break

        x, y = [int(e) for e in line.split(' ')]

        print(xor(x, y))

if __name__ == "__main__":
    # test()
    main()
