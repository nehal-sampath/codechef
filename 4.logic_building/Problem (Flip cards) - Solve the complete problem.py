# Update the code below to solve the problem

t = int(input())
for i in range(t):
    N, X = map(int,input().split())
    if(N/2>X):
        print(X)
    else:
        print(N-X)
