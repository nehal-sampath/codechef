// Update the program below to solve the problem

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int X;
        scanf("%d", &X);
        if (X % 3 == 0)
        {
            printf("0\n");
        }
        else if ((X + 1) % 3 == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
    return 0;
}
