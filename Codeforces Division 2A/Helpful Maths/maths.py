s = input()
if len(s) == 1:
    print(s)
else:
    l = s.split("+")
    print("+".join(sorted(l)))