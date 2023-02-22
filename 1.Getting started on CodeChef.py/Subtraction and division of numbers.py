# Update the '_' below to solve the problem

t = int(input())
for i in range(t):
    #Accept 2 integers as inputs. Note that A >= B and A is divisble by B.
    A, B = map(int,input().split())     
    #Difference of inputs
    D = A - B               
    #Division of inputs
    Q = int(A / B)            
    #Print the desired output for each test case
    print(D,Q)              
