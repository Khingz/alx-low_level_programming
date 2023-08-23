#!/usr/bin/python3
"""Finds the perimeter of an island"""


def island_perimeter(grid):
    """Function that finds the perimeter"""
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                """Check right neighbor"""
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
                """Check left neighbor"""
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                """check bottom neighbo"""
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                """Check top neighbor"""
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

    return perimeter
