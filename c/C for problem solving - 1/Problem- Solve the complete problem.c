// How to check if A and C are both odd or even?

#include <stdio.h>

int main()
{
    int A = 15;
    int C = 17;

    if (A % 2 == 0 && C % 2 == 0)
    {
        printf("Both A and C are even\n");
    }
    else if (A % 2 != 0 && C % 2 != 0)
    {
        printf("Both A and C are odd\n");
    }
    else
    {
        printf("A is odd and C is even or vice versa\n");
    }

    A = 15;
    C = 18;

    if (A % 2 == 0 && C % 2 == 0)
    {
        printf("Both A and C are even\n");
    }
    else if (A % 2 != 0 && C % 2 != 0)
    {
        printf("Both A and C are odd\n");
    }
    else
    {
        printf("A is odd and C is even or vice versa\n");
    }
    return 0;
}
