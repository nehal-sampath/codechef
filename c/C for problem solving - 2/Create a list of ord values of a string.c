// Update the '_' below to solve this problem

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[1001];
        scanf("%s", s);

        int i = 0;
        while (s[i] != '\0') {
            // Converts a character into its ASCII value
            printf("%d ", (int) s[i]);
            i++;
        }

        printf("\n");
    }

    return 0;
}
