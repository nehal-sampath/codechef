//Update the '_'s below to solve the problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        if (A != B && (A%2 != 0 && B%2 != 0)) {
            printf("A and B are different and are odd\n");
        }
        else if (A != B && (A%2 == 0 && B%2 == 0)) {
            printf("A and B are different and are even\n");
        }
        else {
            printf("Doesn't matter\n");
        }
    }

    return 0;
}
