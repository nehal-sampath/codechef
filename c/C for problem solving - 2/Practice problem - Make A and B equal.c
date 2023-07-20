// Update the '_' in the code below to solve the problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int A, B;
        scanf("%d %d", &A, &B);

        // Declare variables for lower and higher of the 2 numbers
        int minAB = A < B ? A : B;
        int maxAB = A > B ? A : B;
        int flag = 0;

        while (minAB <= maxAB) {
            // Condition is met, hence set flag = 1
            if (minAB == maxAB) {
                flag = 1;
                break;
            }
            else {
                // Update the minimum value as per the problem statement
                minAB *= 2;
            }
        }

        if (flag == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
