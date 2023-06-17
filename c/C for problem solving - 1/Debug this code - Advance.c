// The code below is incorrect. Debug this code to solve this problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        //The original code also had a logical error
        if (Y >= X && Y <= (X+200)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
