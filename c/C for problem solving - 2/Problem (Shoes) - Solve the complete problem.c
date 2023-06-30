// Update the code below to solve the problem

#include <stdio.h>

int main() {
    int t, N, M;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &N, &M);
        if (N <= M) {
            printf("%d\n", N);
        } else {
            printf("%d\n", (2 * N - M));
        }
    }

    return 0;
}
