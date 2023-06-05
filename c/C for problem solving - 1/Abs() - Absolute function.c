// Update the '_' in the code below to solve this problem

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        int diff1 = A - B;
        int diff2 = B - A;
        printf("%d %d %d %d\n", diff1, diff2, abs(diff1), abs(diff2));
    }
    return 0;
}
