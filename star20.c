/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
#include <stdio.h>
int main()
{
    int i, j, n, k = 0;
    printf("N:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= 2 * n - 1; j++)
        {

            if (j >= (n + 1) - i && j <= (n - 1) + i)
            {
                j <= n ? k++ : k--;
                printf("%d", k);
                // printf("*");
                
                //output is lil tilt due to 2 digit(10,11,12...) number
            }
            else
            {
                printf(" ");
            }
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}