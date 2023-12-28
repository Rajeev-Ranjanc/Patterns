/*
n=9
                1
              2 1 2
            3 2 1 2 3
          4 3 2 1 2 3 4
        5 4 3 2 1 2 3 4 5
      6 5 4 3 2 1 2 3 4 5 6       
    7 6 5 4 3 2 1 2 3 4 5 6 7     
  8 7 6 5 4 3 2 1 2 3 4 5 6 7 8   
9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
*/
#include <stdio.h>
int main()
{

    int i, j, k = 0;
    int n;
    printf("n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= (n + 1) - i && j <= (n - 1) + i)
            {
                printf("%d", k);
                // if(j<n){
                //     k--;
                // }
                // else{
                //     k++;
                // }
                j < n ? k--: k++;
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