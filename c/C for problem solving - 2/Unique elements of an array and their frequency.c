// Update the '_' in the code below to solve the problem

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int a[MAX_SIZE];
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }

        int unique[MAX_SIZE];
        int unique_size = 0;

        for (int j = 0; j < n; j++) {
            int is_unique = 1;

            // check if element already exists in unique array
            for (int k = 0; k < unique_size; k++) {
                if (a[j] == unique[k]) {
                    is_unique = 0;
                    break;
                }
            }

            // if element is unique, add it to unique array
            if (is_unique) {
                unique[unique_size] = a[j];
                unique_size++;
            }
        }

        // sort unique array
        for (int j = 0; j < unique_size; j++) {
            for (int k = j+1; k < unique_size; k++) {
                if (unique[j] > unique[k]) {
                    int temp = unique[j];
                    unique[j] = unique[k];
                    unique[k] = temp;
                }
            }
        }

        int freq[MAX_SIZE] = {0};
        for (int j = 0; j < unique_size; j++) {
            // count the occurrence of each element in array 'a'
            for (int k = 0; k < n; k++) {
                if (unique[j] == a[k]) {
                    freq[j]++;
                }
            }
        }

        printf("");
        for (int j = 0; j < unique_size; j++) {
            printf("%d ", unique[j]);
        }
        printf("\n");

        for (int j = 0; j < unique_size; j++) {
            printf("%d ", freq[j]);
        }
        printf("\n");
    }

    return 0;
}
