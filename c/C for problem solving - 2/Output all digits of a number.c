// Update the '_' in the code below to solve the problem
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int N;
        scanf("%d", &N);

        int final_ans[7];
        int j = 0;

        while(N > 0) {
            final_ans[j] = N % 10;
            N = N / 10;
            j++;
        }

        for(int i = j-1; i >= 0; i--) {
            printf("%d ", final_ans[i]);
        }

        printf("\n");
    }
    return 0;
}
