/*
N:5
        * * * * * *
      * * * * * *
    * * * * * *
  * * * * * *
* * * * * *

*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("N:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n; j++)
        {
            if (j >= (n + 1) - i && j <= (2 * n + 1) - i)
            {
                printf("*");
                // printf("%d",j);
            }
            else
            {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
