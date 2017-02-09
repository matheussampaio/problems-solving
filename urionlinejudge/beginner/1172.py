#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
https://www.urionlinejudge.com.br/judge/pt/problems/view/1172
"""

def main():
    for i in range(10):
        n = int(input())

        if n <= 0:
            n = 1

        print("X[{}] = {}".format(i, n))

if __name__ == "__main__":
    main()
