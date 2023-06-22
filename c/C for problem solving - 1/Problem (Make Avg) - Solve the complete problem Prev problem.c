// Update the program below to solve the problem

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); 

    while (t--)
    {
        int A, B, C;
        scanf("%d %d", &A, &C); 

        if (A % 2 == 0 && C % 2 == 0)
        {
            B = (A + C) / 2;
            printf("%d\n", B); 
        }
        else if (A % 2 != 0 && C % 2 != 0)
        {
            B = (A + C) / 2;
            printf("%d\n", B); 
        }
        else
        {
            printf("-1\n"); 
        }
    }

    return 0;
}
