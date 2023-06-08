// Update the '_' below to solve the problem

#include <stdio.h>
#include <stdlib.h> // for abs function

int main() 
{
    int t, N, A, chef_chocolates, chefina_chocolates, diff;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) 
    {
        scanf("%d %d", &N, &A);
        chef_chocolates = A;
        chefina_chocolates = N - A;
        diff = abs(chefina_chocolates - chef_chocolates);
        printf("%d\n", diff);
    }
    return 0;
}
