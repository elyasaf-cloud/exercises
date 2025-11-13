def response(hey_bob):
    hey_bob = hey_bob.strip()
    if not hey_bob:
        return "Fine. Be that way!"
    is_question = hey_bob[-1] == '?'
    is_yell = hey_bob.isupper()
    if not is_question and not is_yell:
        return "Whatever."
    if is_question:
        return "Calm down, I know what I'm doing!" if is_yell else "Sure."
    return "Whoa, chill out!"