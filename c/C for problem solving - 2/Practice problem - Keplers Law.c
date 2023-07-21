// Update the code below to solve the problem

#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int t1, t2, r1, r2;
        scanf("%d %d %d %d", &t1, &t2, &r1, &r2);

        // proportionality constants for planet 1 and planet 2
        // we are expecting decimal values for planet1 & planet2, thus declared as double
        double planet1 = pow(t1, 2) / pow(r1, 3);
        double planet2 = pow(t2, 2) / pow(r2, 3);

        if (planet1 == planet2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
