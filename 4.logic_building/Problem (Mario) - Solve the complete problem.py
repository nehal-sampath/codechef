# Update the code below to solve the problem

t = int(input())
for i in range(t):
    X = int(input())
    if(X%3==0):
        print("NORMAL")
    elif((X-1)%3==0):
        print("HUGE")
    else:
        print("SMALL")
