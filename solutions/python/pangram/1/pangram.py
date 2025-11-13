def is_pangram(sentence):
    mask = 0
    FULLEST = (1 << 26) - 1
    a = ord('a')
    for char in sentence:
        if char.isalpha():
            char = char.lower()
            mask |= 1 << (ord(char) - a)
            if mask == FULLEST:
                return True
    return False
