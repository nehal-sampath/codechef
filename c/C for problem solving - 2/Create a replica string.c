// Update the code below to solve this problem

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); // read the number of test cases
    
    for (int i = 0; i < t; i++) { // iterate through each test case
        char S[1001], A[1001], B[1001];
        scanf("%s", S); // read the input string
        
        int len = strlen(S); // find the length of the string
        
        // copy the string S into the string A
        for (int j = 0; j < len; j++) {
            A[j] = S[j];
        }
        A[len] = '\0'; // add a null terminator to the end of the string A
        
        // copy the string S into the string B in reverse order
        int index = 0;
        for (int j = len - 1; j >= 0; j--) {
            B[index] = S[j];
            index++;
        }
        B[len] = '\0'; // add a null terminator to the end of the string B
        
        // print the strings A and B
        printf("%s\n%s\n", A, B);
    }
    return 0;
}
