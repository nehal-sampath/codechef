# cook your dish here
num = int(input())
for _ in range(num):
    x, y = map(int, input().split())
    print(abs(x-y))
