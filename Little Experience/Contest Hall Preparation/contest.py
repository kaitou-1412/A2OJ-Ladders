Hall = list()
n, m = 0, 0


def Check(row, column, university_id):
    if row-1 > -1:
        if Hall[row-1][column] == university_id:
            return True
        if column+1 < m:
            if Hall[row-1][column+1] == university_id:
                return True
        if column-1 > -1:
            if Hall[row-1][column-1] == university_id:
                return True
    if column-1 > -1:
        if Hall[row][column-1] == university_id:
            return True
    if column+1 < m:
        if Hall[row][column+1] == university_id:
            return True
    if row+1 < n:
        if Hall[row+1][column] == university_id:
            return True
        if column+1 < m:
            if Hall[row+1][column+1] == university_id:
                return True
        if column-1 > -1:
            if Hall[row+1][column-1] == university_id:
                return True
    return False


t = int(input())
while t != 0:
    n, m = map(int, input().split(" "))
    Hall = list()
    for i in range(n):
        Hall.append(list(map(int, input().split(" "))))
    checked = dict()
    counter = 0
    for i in range(n):
        for j in range(m):
            checked.setdefault(Hall[i][j], 0)
            if Hall[i][j] != -1 and checked[Hall[i][j]] == 0:
                if Check(i, j, Hall[i][j]):
                    counter += 1
                    checked[Hall[i][j]] = 1
    print(counter)
    t -= 1