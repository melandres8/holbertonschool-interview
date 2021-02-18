#!/usr/bin/python3
"""Minimum Operations"""


def minOperations(n):
    """calculates the fewest number of operations
    needed to result in exactly n H characters in the file."""
    if n <= 1 or type(n) != int:
        return 0

    nums = []
    i = 2
    while i <= n:
        if n % i == 0:
            nums.append(i)
            n = n / i
        else:
            i += 1
    return sum(nums)
