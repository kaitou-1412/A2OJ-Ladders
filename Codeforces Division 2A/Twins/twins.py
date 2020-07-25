n = int(input())
coins = sorted(list(map(int, input().split())), reverse=True)
counter = 0
max_count = n
while n != 0:
    counter += 1
    if counter != max_count and sum(coins[:counter]) > sum(coins[counter:]):
        break
    n -= 1
print(counter)