t = int(input())
while t != 0:
    n = int(input())
    words = input().split(" ")
    c = -1
    for word in words:
        if "#" not in word:
            c = words.index(word)
            break
    if c == -1:
        print(" ".join(words))
    elif c == 0:
        print(" ".join(words[1:]) +  " " + words[0])
    elif c == len(words)-1:
        print(words[c] + " " + " ".join(words[:c]))
    else:
        print(" ".join(words[c+1:]) + " " + words[c] + " " + " ".join(words[:c]))
    t -= 1