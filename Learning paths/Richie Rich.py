t = int(input())
for i in range(t):
    A, B, X = map(int, input().split())
    a = A-B
    print(abs(a//X))
