// Complete the code

#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while(t--)
    { 
        int X, Y;
        scanf("%d", &X);
        // Declare a variable to store total count of squats. Each set has 15 squats.
        Y = X * 15;
        printf("%d\n", Y);
    }
    return 0;
}
