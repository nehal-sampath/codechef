// Update the blanks below to solve the problem'
#include <stdio.h>

int main() {
    int t;
    int A,B;
    char C[30];
    int i = 1;
    scanf("%d", &t );
    while ( i <= t) {
        scanf("%d %d", &A, &B );
        scanf("%s", &C);
        printf("%d %d %s ", A,B,C );
        i = i+1;
    }
    return 0;
}
