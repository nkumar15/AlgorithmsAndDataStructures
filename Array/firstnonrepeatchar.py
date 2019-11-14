
def get_count(txt):
    count = [0] * 256
    for c in txt:
        count[ord(c)] +=  1

    return count


def non_repeat_char(txt):
    count = get_count(txt)

    index = 0
    for c in txt:
        if count[ord(c)] == 1:
            break

        index += 1

    if index == len(txt):
        print("No non repeating character")
    else:
        print(f"Char found at index {index}")




TXT = "geeksforgeeks"
non_repeat_char(TXT)
