# Update the code below to solve the problem

t = int(input())
for i in range(t):
    X, Y = map(int,input().split())
    if(X%Y==0):
        print(X//Y)
    else:
        print((X//Y) + (X%Y))
