from math import hypot

def score(x, y):
    r = hypot(x, y)
    options = (1, 10), (5, 5), (10, 1)
    for loc, score in options:
        if r <= loc:
            return score
    return 0
