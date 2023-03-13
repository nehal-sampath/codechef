t = int(input())
for i in range(t):
    D, L, R = map(int, input().split())
    
    if(D >= L and D <= R):
        print("Take second dose now")
    elif(D >= L and D >= R):
        print("Too Late")
    else:
        print("Too Early")
