/*
n:5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
#include <stdio.h>
int main()
{

    int i, j, n;
    int l = 5;
    int k = 1;
    printf("n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (j <= (n + 1) - i || j >= n + i)
            {
                if (j <= n)
                {
                    printf("%d", k);
                    k++;
                }
                else
                {
                    k--;
                    printf("%d", k);
                }
            }
            else
            {
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}