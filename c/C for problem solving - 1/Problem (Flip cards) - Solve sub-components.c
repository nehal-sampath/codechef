// Update the '_' below to solve the problem

#include <stdio.h>

int main() {
    int N = 10;
    int X = 4;
    int option1 = X;
    int option2 = N - X;
    printf("%d\n", option1 < option2 ? option1 : option2);

    X = 6;
    option1 = X;
    option2 = N - X;
    printf("%d\n", option1 < option2 ? option1 : option2);

    return 0;
}
