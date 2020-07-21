t = int(input())
while t != 0:
    word = input()
    d = dict()
    for letter in word:
        d.setdefault(letter, 0)
        d[letter] += 1
    sorted_dict = sorted(d)
    key_max = max(sorted_dict, key=d.get)
    print(d[key_max], key_max)
    t -= 1