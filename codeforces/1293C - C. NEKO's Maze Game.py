#!/usr/bin/python
# -*- coding: utf-8 -*-

# http://codeforces.com/contest/1293/problem/C
def main():
    columns, number_inputs = map(int, input().split(' '))

    # create a 2d matrix to represent the maze
    # False are normal tiles, True are lava tiles.
    maze = [
        [False] * columns,
        [False] * columns
    ]

    # keep track of how many blocks we have in the maze
    blocks = 0

    for i in range(number_inputs):
        y, x = map(int, input().split(' '))

        # update coordinates to be zero-indexed.
        x -= 1
        y -= 1

        # process the current input (flip the tile)
        maze[y][x] = not maze[y][x]

        # if the current input is on line 0, check for the neighbors below.
        # if the current input is on line 1, check for the neighbors above. 
        dy = 1 if y == 0 else 0
        neighbors = [
            [x - 1, dy],
            [    x, dy],
            [x + 1, dy]
        ]

        # if the current event turn the current tile into lava, we should increment the blocks.
        # we should decrement the block counter if the tile is now walkable.
        op = 1 if maze[y][x] else -1

        for neighbor in neighbors:
            temp_x, temp_y = neighbor

            # check for out of bound index.
            # if the neighbor is blocked, either decrement or increment
            # the block counter
            if temp_x >= 0 and temp_x < columns and maze[temp_y][temp_x]:
                blocks += op
        
        if not blocks:
            print("Yes")
        else:
            print("No")

if __name__ == "__main__":
    main()
