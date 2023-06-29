// Update the code below to solve the problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int N, X;
        scanf("%d %d", &N, &X);

        // Borrow the template from the sub-problem
        int option1 = X;
        int option2 = N - X;
        printf("%d\n", option1 < option2 ? option1 : option2);
    }

    return 0;
}
