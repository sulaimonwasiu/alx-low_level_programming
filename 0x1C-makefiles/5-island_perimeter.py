#!/usr/bin/python3
"""
Calculates the perimeter of the island in the given grid
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the given grid
    """

    if not grid or not grid[0]:
        return 0

    rows, cols = len(grid), len(grid[0])
    if rows > 100 or cols > 100:
        return

    perimeter = 0
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Initial perimeter for each land cell

                # Check left neighbor
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract 2 for shared side

                # Check top neighbor
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 for shared side

    return perimeter


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
