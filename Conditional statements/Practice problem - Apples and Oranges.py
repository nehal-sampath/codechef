X = int(input())
A,B = map(int, input().split())
#We need to buy at least 1 kg of apples and 1 kg of oranges
if X >= (A+B):
    print('Yes')
else:
    print('No')
