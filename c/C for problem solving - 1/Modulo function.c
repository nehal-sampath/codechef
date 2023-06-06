// Update the '_' in the code below to solve the problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d %d\n", A/B, A%B);
    }

    return 0;
}
