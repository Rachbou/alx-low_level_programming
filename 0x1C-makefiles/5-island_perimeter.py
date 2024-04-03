#!/usr/bin/python3
# FileName.py
# Rachid BOULMANI
"""
5-island_perimeter module
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    length = len(grid)
    width = len(grid[0])
    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1 and (i == 0 or grid[i - 1][j] != 1):
                perimeter += 1
            if grid[i][j] == 1 and (j == 0 or grid[i][j - 1] != 1):
                perimeter += 1
            if grid[i][j] == 1 and (i == length - 1 or grid[i + 1][j] != 1):
                perimeter += 1
            if grid[i][j] == 1 and (j == width - 1 or grid[i][j + 1] != 1):
                perimeter += 1
    return perimeter
