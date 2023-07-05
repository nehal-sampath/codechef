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
        int minElement = A[0];
        int minElementIndex = 0;
        for (int j = 1; j < n; j++) {
            if (A[j] < minElement) {
                minElement = A[j];
                minElementIndex = j;
            }
        }
        int j = minElementIndex;
        while (j > 0) {
            int temp = A[j];
            A[j] = A[j-1];
            A[j-1] = temp;
            j--;
        }
        for (int j = 0; j < n; j++) {
            printf("%d ", A[j]);
        }
        printf("\n");
    }
    return 0;
}
