// Update the code below to solve the problem

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        char S[1001], T[1001], M[1001];
        scanf("%s %s", S, T);
        
        int len = strlen(S);
        for(int j = 0; j < len; j++) {
            if(S[j] == T[j]) {
                M[j] = 'G';
            } else {
                M[j] = 'B';
            }
        }
        M[len] = '\0';
        
        printf("%s\n", M);
    }
    return 0;
}
