# The code below is incorrect. Debug this code to solve this problem

t=int(input())
for i in range(t):
    X, Y = map(int,input().split())
    if Y>=X and (X+200)>=Y:
        print('YES')
    else:
        print('NO')
    
