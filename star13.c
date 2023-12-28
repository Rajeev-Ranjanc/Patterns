/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
#include <stdio.h>

int main()
{

    int i, j, n, k;
    printf("n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        k = 1;
        for (j = 0; j < 2 * n - 1; j++)
        {
            if (j >= (n + 1) - i && j <= (n - 1) + i)
            {
                printf("%d", k);
                //j < 2 * n / 2 ? k++ : k--;
                j <  n ? k++ : k--;
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