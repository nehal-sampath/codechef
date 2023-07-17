#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t); // Use scanf instead of cin
    
    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        // declare an array to hold all divisors
        int divisors[n];
        int i = 1;
        int j = 0;
        
        while (i <= n)
        {  
            // check if n is divisible by each i
            if (n % i == 0)
            {
                // append each i to the array which meets this condition
                divisors[j] = i;
                // increment j to add element to (j+1)th position 
                j++;
            }
            
            i++;
        }
        
        // run a loop to traverse through the array whose length is j 
        for(int i = 0; i < j; i++)
        {
            printf("%d ", divisors[i]); // Use printf instead of cout
        }
        printf("\n"); // Use printf instead of cout
    }
    
    return 0;
}
