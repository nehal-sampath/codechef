// The code below is incorrect. Debug the code to solve this problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        //The 1st Condition was insufficient
        if (X == Y && (X > 0 || Y > 0)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
