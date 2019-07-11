#!/usr/bin/python3
""" ISLAND perimeter guestion """


def island_perimeter(grid):
    p = 0
    numberOfOnes = 0

    for idx in range(len(grid)):
        p += sum(grid[idx]) * idx
    return p
