// Update the '_' in the code below to solve the problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int A[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[j]);
        }
        int right = 0;
        int large = -100;
        for (int j = 0; j < n; j++) {
            if (A[j] >= large) {
                large = A[j];
                right = j;
            }
        }
        printf("%d %d\n", large, right);
    }
    return 0;
}
