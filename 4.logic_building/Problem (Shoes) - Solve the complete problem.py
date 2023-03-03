# Update the code below to solve the problem

t = int(input())
for i in range(t):
    N, M = map(int, input().split())
    if(N<=M):
        print(N)
    else:
        print(N-M+N)
