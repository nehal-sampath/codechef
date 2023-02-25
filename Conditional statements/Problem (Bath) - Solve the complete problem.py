# Update the code below to solve the problem

t = int(input())
for i in range(t):
    X, Y = map(int,input().split())
    count=X//Y
    people=count//2
    print(people)
