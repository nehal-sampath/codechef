// Update the code below this line to solve the problem
// Remember - there is no t in this problem

#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d%d", &X, &Y);

    int watchtime = (X - Y) + (Y/2);

    printf("%d\n", watchtime);

    return 0;
}
