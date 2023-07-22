// Update the '_' in the code below to solve the problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int j = 0; j < t; j++) {
        int A, B;
        scanf("%d %d", &A, &B);

        // create a list to hold divisors of A and B
        int divisors_AandB[1000];
        int count = 0;
        
        for (int i = 1; i <= (A < B ? A : B); i++) {
            // i needs to divide both A and B
            if (A % i == 0 && B % i == 0) {
                // append the integer to the list
                divisors_AandB[count] = i;
                count++;
            }
        }

        // gcd is the greatest common divisor
        int gcd = divisors_AandB[count - 1];
        // math property
        int lcm = (A * B) / gcd;

        printf("%d %d\n", gcd, lcm);
    }

    return 0;
}
