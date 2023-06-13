// Update the program below to solve the problem

#include <stdio.h>

int main()
{
    int t, X;
    scanf("%d", &t);
    
    while (t--)
    {
        scanf("%d", &X);
        
        if (X > 100)
        {
            printf("%d\n", X - 10);
        }
        else
        {
            printf("%d\n", X);
        }
    }
    return 0;
}
