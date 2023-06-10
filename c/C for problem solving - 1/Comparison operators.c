//Update the '_' below to solve the problem

#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if (n % 3 == 0) {
            printf("Divisible by 3\n");
        }
        else {
            printf("Not divisible by 3\n");
        }
        if (n % 2 != 0) {
            printf("Odd\n");
        }
        else {
            printf("Even\n");
        }
    }
    return 0;
}
