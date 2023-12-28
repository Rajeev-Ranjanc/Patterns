/*
    *
   ***
  *****
 ********

*/
#include<stdio.h>
int main(){
    int i,j,n;

    /*
    for ( i = 0; i <= 5; i++)
    {
        for ( j = 0; j <= 9; j++)
        {
            if (j>=6-i && j<=4+i)
            {
                printf("*");

            }
            else{
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
        
    }

    //*/
   // /*
    
    printf("n:");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= 2*n-1; j++)
        {
            if (j>=(n+1)-i && j<=(n-1)+i)
            {
                printf("*");

            }
            else{
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
        
    }
    
   // */
    return 0;
}