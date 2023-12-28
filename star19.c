/*
* * * * * 
  * * *   
    *     
  * * *   
* * * * * 
Shankar ji ka damroo
*/
#include <stdio.h>
int main()
{

    int i, j, n, k=0;
    printf("n:");
    scanf("%d", &n);
    
    for (i = 1; i <= 2 * n - 1; i++)
    {
        i <= n ? k++ : k--;
        for (j = 0; j <= 2 * n - 1; j++)
        {
            if (j >= k && j <= 2 * n - k)
            {
                printf("*");
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