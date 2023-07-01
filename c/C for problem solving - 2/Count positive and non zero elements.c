#include <stdio.h>

int main()
{
    int t, N, k;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d %d", &N, &k);

        int A[N];
        for(int j=0; j<N; j++)
        {
            scanf("%d", &A[j]);
        }

        int pos=0, neg=0, divk=0;
        for(int j=0; j<N; j++)
        {
            if(A[j] < 0)
            {
                neg++;
            }
            else if(A[j] > 0)
            {
                pos++;
            }

            if(A[j] % k == 0)
            {
                divk++;
            }
        }

        printf("%d %d %d\n", pos, neg, divk);
    }

    return 0;
}
