#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
url: https://www.urionlinejudge.com.br/judge/en/problems/view/1160
"""

def calc(pa, pb, g1, g2):
    for i in range(100):
        pa += int(pa * g1 / 100)
        pb += int(pb * g2 / 100)

        if (pa > pb):
            return "{} anos.".format(i + 1)

    return "Mais de 1 seculo."

def test():
    assert calc(100, 150, 1.0, 0) == "51 anos."
    assert calc(90000, 120000, 5.5, 3.5) == "16 anos."
    assert calc(56700, 72000, 5.2, 3.0) == "12 anos."
    assert calc(123, 2000, 3.0, 2.0) == "Mais de 1 seculo."
    assert calc(100000, 110000, 1.5, 0.5) == "10 anos."
    assert calc(62422, 484317, 3.1, 1.0) == "100 anos."

def main():
    T = int(input())

    for i in range(T):
        line = input().split(' ')

        PA = int(line[0])
        PB = int(line[1])
        G1 = float(line[2])
        G2 = float(line[3])

        print(calc(PA, PB, G1, G2))

if __name__ == "__main__":
    main()
