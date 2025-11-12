def steps(number):
    if number <= 0:
        raise ValueError("Only positive integers are allowed")
    steps = 0
    while number != 1:
        if not number & 1:
            number //= 2
        else:
            number = number * 3 + 1
        steps += 1
    return steps
