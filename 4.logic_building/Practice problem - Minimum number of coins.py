# Update the code below to solve the problem

t = int(input())
for i in range(t):
    X = int(input())
    if(X%10==0):
        print(X//10)
    elif(X%5==0):
        print((X//10)+1)
    else:
        print(-1)
