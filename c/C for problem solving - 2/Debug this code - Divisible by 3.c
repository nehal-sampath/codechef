// The code below is incorrect. Debug the code to solve the problem

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int t, a, b;
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d%d", &a, &b);
        if (a % 3 == 0 || b % 3 == 0)
        {
           printf("0\n"); 
        }
        else
        {
            if (abs(a-b)%3==0)
            {
                // Expected output for this condition is switched
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        } 
    }
    return 0; 
} 
