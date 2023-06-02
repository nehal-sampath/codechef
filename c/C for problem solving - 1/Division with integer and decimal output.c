// Update the _ in the code

#include <stdio.h>

int main() {
    int t,A,B;
    float X;
    int Y;
    int i = 1;
    scanf("%d", &t );
    while (i <= t){
        scanf("%d%d",&A,&B);
        X = (float)A / B;
        Y = A / B;
        printf("%lf %d\n", X,Y);
        i = i+1;
    }
    return 0;
}
