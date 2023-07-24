// Update the code below to solve this problem

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, rem;
        scanf("%d %d", &n, &m);
        while (m != 0) {
            rem = n % m;
            n = m;
            m = rem;
        }
        printf("%d\n", n);
    }
    return 0;
}
