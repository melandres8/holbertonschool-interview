#!/usr/bin/python3
"""Lockboxes"""


def canUnlockAll(boxes):
    """Determines if all the boxes can be opened"""
    amount = len(boxes)
    keys = [0]

    for i in keys:
        box = boxes[i]
        for key in box:
            if key not in keys and key < amount:
                keys.append(key)
    if amount == len(keys):
        return True
    else:
        return False
