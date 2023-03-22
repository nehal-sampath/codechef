# cook your dish here
t = int(input())

for i in range(t):
    count = 0
    n = int(input())
    arr = list(map(int, input().split()))
    m = min(arr)
    for j in arr:
        if(j != m):
             count+=1
    
    print(count)
