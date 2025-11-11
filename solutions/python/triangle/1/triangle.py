def is_valid(sides):
    sides = sorted(sides)
    return all(side > 0 for side in sides) and sides[2] < sides[0] + sides[1]

def equilateral(sides):
    return is_valid(sides) and len(set(sides)) == 1
    
def isosceles(sides):
    return is_valid(sides) and len(set(sides)) <= 2
    
def scalene(sides):
    return is_valid(sides) and len(set(sides)) == 3