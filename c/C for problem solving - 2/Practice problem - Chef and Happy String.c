// Update the code below to solve the problem

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        char S[1001];
        scanf("%s", S);
        
        int string_Length = strlen(S);
        int flag = 0;
        for(int j = 0; j < (string_Length-2); j++) {
            // if any element is a vowel, and its next 2 elements are vowels, then our condition is met
            if((S[j]=='a' || S[j]=='e' || S[j]=='i' || S[j]=='o' || S[j]=='u')
               && (S[j+1]=='a' || S[j+1]=='e' || S[j+1]=='i' || S[j+1]=='o' || S[j+1]=='u')
               && (S[j+2]=='a' || S[j+2]=='e' || S[j+2]=='i' || S[j+2]=='o' || S[j+2]=='u')) {
                flag = 1;
                break;
            }
        }
        
        if(flag == 1) {
            printf("Happy\n");
        } else {
            printf("Sad\n");
        }
    }
    return 0;
}
