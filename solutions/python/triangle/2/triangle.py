def is_valid(func):
    def inner(sides):
        sides = sorted(sides)
        return all(side > 0 for side in sides) and sides[2] < sides[0] + sides[1] and func(sides)
    return inner

@is_valid
def equilateral(sides):
    return is_valid(sides) and len(set(sides)) == 1

@is_valid
def isosceles(sides):
    return is_valid(sides) and len(set(sides)) < 3

@is_valid
def scalene(sides):
    return is_valid(sides) and len(set(sides)) == 3