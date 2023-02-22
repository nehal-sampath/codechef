# Update the '_' below to solve the problem

t = int(input())
for i in range(t): 
    A, B = map(int, input().split())
    #Division of A by B - float / decimal result
    X = A / B               
    #Divison of A by B - integer result
    Y = int(A / B)              
    #Print the desired output for each test case
    print(X,Y)              
