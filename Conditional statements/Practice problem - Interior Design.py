# Update the program below to solve the problem

t = int(input())           
for i in range(t):
    #Accept 4 integers as input
    X1,Y1,X2,Y2 = map(int, input().split()) 
    c=X1+Y1
    d=X2+Y2
    print(min(c,d))
    
