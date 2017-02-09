#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
https://www.urionlinejudge.com.br/judge/pt/problems/view/1173
"""

def main():

    n = int(input())

    for i in range(10):
        print("N[{}] = {}".format(i, n))

        n *= 2

if __name__ == "__main__":
    main()
