#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        int total_score = A + B + C;
        int minimum_score = A;
        if (B < minimum_score) {
            minimum_score = B;
        }
        if (C < minimum_score) {
            minimum_score = C;
        }
        if (total_score >= 100 && minimum_score >= 10) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }
    return 0;
}
