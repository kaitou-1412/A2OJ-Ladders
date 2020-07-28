n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
p = a[0]
q = b[0]
l = set()
for i in range(1, n+1):
    l.add(i)
if l == set(a[1:] + b[1:]):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")