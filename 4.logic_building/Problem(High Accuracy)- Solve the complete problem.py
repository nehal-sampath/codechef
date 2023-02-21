# Update the program below to solve the proble
t = int(input())
for i in range(t):
    x=int(input())
    if(x%3==0):
        print(0)
    elif((x+1)%3==0):
        print(1)
    else:
        print(2)
