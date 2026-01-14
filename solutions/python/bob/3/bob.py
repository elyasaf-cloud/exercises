def response(hey_bob):
    hey_bob = hey_bob.rstrip()
    answers = ["Fine. Be that way!", "Whatever.", "Sure.", "Whoa, chill out!", "Calm down, I know what I'm doing!"]
    index = int(not not hey_bob) + int(hey_bob.endswith("?")) + 2 * int(hey_bob.isupper())
    return answers[index]