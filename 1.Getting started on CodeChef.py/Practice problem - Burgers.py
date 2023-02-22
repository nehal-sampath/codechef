# Update the '_' in the code below to solve the problem

#Always first check if the problem has test cases
t = int(input())            
#Loop through each test case for its inputs
for i in range(t):          
    #Accept 2 integers inputs.
    A, B = map(int,input().split())     
    #Declare a new variable to store the count of burgers
    Burgers = min(A,B)          
    #Print the desired output for each test case
    print(Burgers)                
