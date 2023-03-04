# Update the code below to solve the problem

t = int(input())
for i in range(t):
    W, X, Y, Z = map(int,input().split())
    if(W==X or W==Y or W==Z or W==(X+Y) or W==(X+Z) or W==(Y+Z) or W==(X+Y+Z)):
        print("YES")
    else:
        print("NO")
