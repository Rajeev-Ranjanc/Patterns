/*
6543210
543210
43210
3210
210
10
0
*/
#include <stdio.h>
int main()
{
    int i, j, n, k =0;
    printf("N:");
    scanf("%d", &n);
    
    for (i = 1; i <= 2 * n - 1; i++)
    {
        k=(2*n-i)-1;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= 1 && j <= 2 * n - i)
            {
                printf(" %d", k);
                k--;
                // printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
