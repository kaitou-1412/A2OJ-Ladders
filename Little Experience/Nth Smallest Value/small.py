t = int(input())
while t != 0:
    my_list = list(map(int, input().split(" ")))
    print(sorted(my_list)[1])
    t -= 1