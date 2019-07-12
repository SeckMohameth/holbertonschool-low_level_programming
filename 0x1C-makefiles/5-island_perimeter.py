#!/usr/bin/python3
""" ISLAND perimeter guestion """


def island_perimeter(grid):
    numberOfZeros = 0

    for row in range(len(grid)):
        for column in range(len(grid[0])):
            if grid[row][column] == 1:

                top = row - 1
                left = column - 1
                right = column + 1
                bottom = row + 1

                if top < 0:
                    numTop = 0
                else:
                    numTop = grid[row - 1][column]

                if left < 0:
                    numLeft = 0
                else:
                    numLeft = grid[row][column - 1]

                if right >= len(grid[0]):
                    numRight = 0
                else:
                    numRight = grid[row][column + 1]

                if bottom >= len(grid):
                    numBottom = 0
                else:
                    numBottom = grid[row + 1][column]

                if numTop is 0:
                    numberOfZeros += 1
                if numBottom is 0:
                    numberOfZeros += 1
                if numRight is 0:
                    numberOfZeros += 1
                if numLeft is 0:
                    numberOfZeros += 1

    return (numberOfZeros)
