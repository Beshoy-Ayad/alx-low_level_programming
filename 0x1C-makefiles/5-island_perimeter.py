#!/usr/bin/python3
"""Island Perimeter."""


def island_perimeter(grid):
    """Island Perimeter.
    
    Args:
        grid (list): list of lists of integers.
        
    Returns:
        int: perimeter of island.
        
    Raises:
        TypeError: if grid is not a list.
        
    Example:
        >>> island_perimeter([[0, 1, 0, 0], [1, 1, 1, 0], [0, 1, 0, 0], [1, 1, 0, 0]])
        16
        
    Notes:
        - 0 represents water, 1 represents land.
        - an island is a group of 1's connected 4-directionally (horizontal or vertical).
        - grid is rectangular
        - all 0's represent water
        - all 1's represent land
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2