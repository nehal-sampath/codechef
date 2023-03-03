# Update the code below to solve the problem

t = int(input())
for i in range(t):
    N, M = map(int,input().split())
    x=N//M
    if(x%2==0 and N%M==0):
        print("Yes")
    else:
        print("No")
    
