// Debug the following Code

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int X, N, points_per_testcase, score;
        scanf("%d%d", &X, &N);

        points_per_testcase = X / 10;
        score = points_per_testcase * N;

        printf("%d\n", score);
    }
    return 0;
}
