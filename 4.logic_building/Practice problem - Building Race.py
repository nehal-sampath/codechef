# Update the code below to solve the problem

t = int(input())
for i in range(t):
    A, B, X, Y = map(int,input().split())
    if(A/X > B/Y):
        print("Chefina")
    elif(A/X < B/Y):
        print("Chef")
    else:
        print("Both")
