# cook your dish here
t=int(input())
for i in range(t):
    H,X,Y=map(int,input().split())
    H=H-Y
    if(H%X==0):
        print(1+H//X)
    else:
        print(2+H//X)
    
