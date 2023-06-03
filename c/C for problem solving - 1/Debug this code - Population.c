// Debug the code

#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    { 
        int X,Y,Z;
        scanf("%d %d %d", &X, &Y, &Z);
        
        // Y people move out of the town
        int total_population = X - Y;
        
        // Z people immigrated to this town - so its population will increase
        total_population = total_population + Z;
        
        printf("%d\n", total_population);
    }
    
    return 0;
}
