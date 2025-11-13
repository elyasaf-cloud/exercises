from math import hypot

def score(x, y):
    r = hypot(x, y)
    if r > 10: return 0
    if r > 5: return 1
    if r > 1: return 5
    return 10
