# The code below is incorrect. Debug this code to solve the problem.

t = int(input())
for i in range(t):
    X, Y = map(int, input().split())
    prize_top10 = 10*X          
    prize_11to100 = 90*Y       #remaining 90 participants take 1 rupee  
    print(prize_top10+prize_11to100) 
