n = int(input())
numbers = list(map(int, input().split()))
numbers_position = [str(1+numbers.index(number)) for number in range(1, n+1)]
print(" ".join(numbers_position))