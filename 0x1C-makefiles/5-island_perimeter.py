#!/usr/bin/python3
"""Defines a function that measures the perimeter of an island."""


def island_perimeter(grid):
    """Returns the perimeter of an island.The island is described in grid.
    0 represents water zone and 1 represents land zone.

    Args:
        grid (list): A list of lists of 1s and 0s representing the island.
    Returns:
        The perimeter of the island.
    """
    length = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for cols in range(length):
        for rows in range(width):
            if grid[cols][rows] == 1:
                size += 1
