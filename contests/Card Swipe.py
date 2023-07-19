T = int(input())

for _ in range(T):
    N = int(input())
    swipes = list(map(int, input().split()))

    count = 0  
    max_count = 0  

    for swipe in swipes:
        if swipe % 2 == 1:
            count += 1
        else:
            count -= 1
        max_count = max(max_count, count)

    print(max_count)
