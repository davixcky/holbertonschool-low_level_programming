#!/usr/bin/python3
"""Module for task 5"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    total = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                total += 4
                if i > 0 and grid[i - 1][j] == 1:
                    total -= 2

                if j > 0 and grid[i][j - 1] == 1:
                    total -= 2

    return total
