# Update the program below to solve the problem

t = int(input())            
for i in range(t):          
    X, Y, Z = map(int, input().split())
    if(Z%X!=0 and Z%Y!=0):
        print("NONE")
    elif(Z%X==0 and Z%Y!=0):
        print("CHICKEN")
    elif(Z%Y==0 and Z%X!=0):
        print("DUCK")
    elif(Z%X==0 and Z%Y==0):
        print("ANY")
    
