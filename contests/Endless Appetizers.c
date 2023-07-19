T = int(input())

for _ in range(T):
    lower_limit, sticks_per_plate, money_received = map(int, input().split())
    extra_sticks = money_received // 30
    total_sticks = lower_limit + extra_sticks
    plates_needed = (total_sticks + sticks_per_plate - 1) // sticks_per_plate
    print(plates_needed)
