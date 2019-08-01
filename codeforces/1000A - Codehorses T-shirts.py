#!/usr/bin/python
# -*- coding: utf-8 -*-

# https://codeforces.com/problemset/problem/1000/A

# sizes: M, S, XS, XXS, XXXS, L, XL, XXL, XXXL

similar_sizes = {
    "S": ["S", "M", "L"],
    "M": ["M", "S", "L"],
    "L": ["L", "S", "M"],
    "XS": ["XS", "XL"],
    "XL": ["XL", "XS"],
    "XXS": ["XXS", "XXL"],
    "XXL": ["XXL", "XXS"],
    "XXXS": ["XXXS", "XXXL"],
    "XXXL": ["XXXL", "XXXS"]
}

def number_of_operations(last_year_tshirts, next_year_tshirts):
    seconds_taken_to_create_list = 0

    for size in next_year_tshirts:
        for i in range(next_year_tshirts[size]):
            for similar_size in similar_sizes[size]:
                if last_year_tshirts.get(similar_size, 0):
                    last_year_tshirts[similar_size] -= 1

                    if similar_size != size:
                        seconds_taken_to_create_list += 1

                    break

    return seconds_taken_to_create_list

def test():
    assert number_of_operations({ "XS": 2, "M": 1 }, { "XL": 1, "S": 1, "XS": 1 }) == 2
    assert number_of_operations({ "XXXL": 1, "XXL": 1 }, { "XXL": 1, "XXXS": 1 }) == 1
    assert number_of_operations({ "M": 1, "XS": 1 }, { "XS": 1, "M": 1 }) == 0
    assert number_of_operations({ "XS": 2, "M": 5 }, { "XL": 1, "S": 5, "XS": 1 }) == 6

def read_tshirts_sizes(number):
    sizes = {}

    for i in range(number):
        tshirt = input()

        sizes[tshirt] = sizes.get(tshirt, 0) + 1

    return sizes

def main():
    number_of_tshirts = int(input())

    last_year_tshirts = read_tshirts_sizes(number_of_tshirts)
    next_year_tshirts = read_tshirts_sizes(number_of_tshirts)

    print(number_of_operations(last_year_tshirts, next_year_tshirts))

if __name__ == "__main__":
    # test()
    main()
