// Update the code below to solve the problem

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int N;
        scanf("%d", &N);
        
        if (N == 1 || N == 3 || N == 5)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    
    return 0;
}
