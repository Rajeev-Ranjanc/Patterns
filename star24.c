/*
  * * * * * * * * * * * * *   
*   * * * * * * * * * * *   * 
* *   * * * * * * * * *   * * 
* * *   * * * * * * *   * * * 
* * * *   * * * * *   * * * * 
* * * * *   * * *   * * * * * 
* * * * * *   *   * * * * * * 
* * * * * * *   * * * * * * * 
* * * * * *   *   * * * * * * 
* * * * *   * * *   * * * * * 
* * * *   * * * * *   * * * * 
* * *   * * * * * * *   * * * 
* *   * * * * * * * * *   * * 
*   * * * * * * * * * * *   * 
  * * * * * * * * * * * * * 
  * 

*/

//*
#include <stdio.h>
int main()
{
    int i, j, n, k = 0;
    printf("n:");
    scanf("%d", &n);
    for (i = 1; i <= 2 * n - 1; i++)
    {
        i<=n?k++:k--;
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (k == j || k + j == 2 * n)
            {
                printf(" ");
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
//*/
/*
//teacher's method
#include<stdio.h>
int main(){
    int i,j,n;
    printf("n:");
    scanf("%d",&n);
    for ( i = 1; i <= 2*n-1; i++)
    {
        for ( j = 1; j <= 2*n-1; j++)
        {
            if(j==i || j==2*n-i){
                if (i==2*n-i)       
                {
                    printf("/");
                }
                else
                {
                    printf("\\");
                }
                
               
            }
            else{
                printf("*");
            }
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

*/