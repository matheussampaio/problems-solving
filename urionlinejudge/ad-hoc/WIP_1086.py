#!/usr/bin/python
# -*- coding: utf-8 -*-

"""
https://www.urionlinejudge.com.br/judge/pt/problems/view/1086
"""

def make_column_greedy(height, boards, fix_index = 0):
    for i, e in enumerate(boards):
        if (e == height):
            return (True, [i + fix_index])
        elif (e < height):
            result, indexes = make_column_greedy(height - e, boards[:i] + boards[i+1:], fix_index + 1)

            if (result):
                return (True, [i + fix_index] + indexes)

    return (False, [])


def salao_do_clube_one_way(hall_width, hall_height, board_width, boards):
    # check if the hall width if compatible with the board width
    if hall_width % board_width:
        return "impossivel"

    # keep track how many board we used
    boards_used = 0

    # we need to make `hall_width / board_width` columns
    for i in range(int(hall_width / board_width)):
        result, indexes = make_column_greedy(hall_height, boards)

        if not result:
            return "impossivel"

        boards_used += len(indexes)
        for i in sorted(indexes, reverse = True):
            boards.pop(i)

    return boards_used


def salao_do_clube(hall_width, hall_height, board_width, boards):
    boards = sorted(boards, reverse = True)

    r1 = salao_do_clube_one_way(hall_width, hall_height, board_width, boards)
    r2 = salao_do_clube_one_way(hall_height, hall_width, board_width, boards)

    if r1 == "impossivel":
        return r2
    elif r2 == "impossivel":
        return r1
    else:
        return min(r1, r2)


class expect:
    def __init__(self, result):
        self.result = result

    def toBe(self, test):
        assert self.result == test, "{} != {}".format(self.result, test)


def test():
    expect(make_column_greedy(500, [500, 400, 400, 300, 300, 200, 200, 200, 200, 100])) \
        .toBe((True, [0]))
    expect(make_column_greedy(500, [400, 400, 300, 300, 200, 200, 200, 200, 100])) \
        .toBe((True, [0, 8]))
    expect(salao_do_clube(400, 500, 99, [400, 400, 400, 400])) \
        .toBe("impossivel")
    expect(salao_do_clube(400, 500, 100, [100, 200, 200, 200, 200, 300, 300, 400, 400, 500])) \
        .toBe(7)
    expect(salao_do_clube(500, 400, 100, [400, 500, 400, 400, 400, 400, 300])) \
        .toBe(5)
    expect(salao_do_clube(300, 200, 100, [200, 400, 100, 400, 200, 400, 400])) \
        .toBe("impossivel")


def main():
    hall_width, hall_height = [int(e) for e in input().split(' ')]

    while hall_width > 0 and hall_height > 0:
        board_width = int(input())
        boards_amount = int(input())
        boards = [int(e) * 100 for e in input().split(' ')]

        print(salao_do_clube(hall_width * 100, hall_height * 100, board_width, boards))

        hall_width, hall_height = [int(e) for e in input().split(' ')]


if __name__ == "__main__":
    test()
    # main()
