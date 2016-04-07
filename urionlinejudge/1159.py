#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
url: https://www.urionlinejudge.com.br/judge/pt/problems/view/1159
"""

def main():
    x = int(input())

    while x:
        if x % 2 != 0:
            x += 1

        print(sum([i for i in range(x, x+10, 2)]))

        x = int(input())

if __name__ == "__main__":
    main()
