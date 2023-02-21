t=int(input())
list1 = []
for i in range(t):
    A,C=map(int,input().split())
    D = A + C
    if D%2 == 0:
      list1.append(D//2)
    else:
      list1.append(-1)

for i in list1:
  print(i)
