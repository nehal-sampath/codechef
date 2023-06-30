// Update the '_' in the code below to solve this problem

#include <stdio.h>

int main() {
    int N, M;

    N = 10;
    M = 10;
    if (N <= M) {
        printf("We need to buy %d shoes\n", N);
    } else {
        printf("We need to buy %d shoes\n", (2*N-M));
    }

    N = 15;
    M = 10;
    if (N <= M) {
        printf("We need to buy %d shoes\n", N);
    } else {
        printf("We need to buy %d shoes\n", (2*N-M));
    }

    return 0;
}
