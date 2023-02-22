#Update the code below to solve this problem

t = int(input())
for i in range(t):
    N, M, K = map(int, input().split())
    if(M*K>=N):
        print("Yes")
    else:
        print("No")
