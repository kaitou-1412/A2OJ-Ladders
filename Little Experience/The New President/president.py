t = int(input())
while t != 0:
    c, v = map(int, input().split())
    preference = list()
    votes = dict()
    for i in range(v):
        preference.append(list(map(int, input().split())))
        votes.setdefault(preference[i][0], 0)
        votes[preference[i][0]] += 1
    sorted_votes1 = sorted(votes, key=votes.get, reverse=True)
    winner = sorted_votes1[0]
    if votes[winner] >= (v+1)/2:
        print(winner, "1")
    else:
        runner_up = sorted_votes1[1]
        nominee1, nominee2 = 0, 0
        for i in range(v):
            if preference[i].index(winner) < preference[i].index(runner_up):
                nominee1 += 1
            else:
                nominee2 += 1
        if nominee1 > nominee2:
            print(winner, "2")
        else:
            print(runner_up, "2")
    t -= 1