def reverse(text):
    i = 1
    rev = ""
    for _ in text:
        rev += text[-i]
        i += 1
    return rev
