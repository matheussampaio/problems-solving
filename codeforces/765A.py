#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
http://codeforces.com/contest/766/problem/A
"""
def problem(n, m, z):
    multiples_of_n = list(range(n, z + 1, n))
    multiples_of_m = list(range(m, z + 1, m))

    common_multiples = [e for e in multiples_of_m if e in multiples_of_n]

    return len(common_multiples)

def test():
    assert problem(1, 1, 10) == 10
    assert problem(1, 2, 5) == 2
    assert problem(2, 3, 9) == 1

def main():
    [n, m, z] = map(int, input().split(" "))

    print(problem(n, m, z))

if __name__ == "__main__":
    # test()
    main()
