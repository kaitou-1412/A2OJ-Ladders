raw = input()
n = len(raw)
if n <= 2:
    print("0")
elif n == 3:
    print("1")
else:
    print(len(set(raw[1:n-1].split(", "))))
