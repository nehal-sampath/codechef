#Update the code below to solve this problem

t = int(input())
for i in range(t):
    sx, sy, ex, ey = map(int,input().split())
    if(sx != ex and sy != ey):
        print(1)
    else:
        print(2)
    
