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
        int weekend[] = {6, 7, 13, 14, 20, 21, 27, 28};
        int overall[n + 8];
        for (int j = 0; j < n; j++) {
            overall[j] = A[j];
        }
        for (int j = 0; j < 8; j++) {
            overall[n + j] = weekend[j];
        }
        int overall_unique[n + 8];
        int count = 0;
        for (int j = 0; j < n + 8; j++) {
            int isUnique = 1;
            for (int k = 0; k < count; k++) {
                if (overall_unique[k] == overall[j]) {
                    isUnique = 0;
                    break;
                }
            }
            if (isUnique) {
                overall_unique[count] = overall[j];
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
