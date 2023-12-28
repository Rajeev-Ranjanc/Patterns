/*
    1
   12
  123
 1234
  123
   12
    1
*/

#include<stdio.h>
int main(){
    int i,j,n,m=0,k=0;
    printf("n:");
    scanf("%d",&n);
    for ( i = 1 ; i <=2*n-1; i++)
    {
        
        i<=n?k++:k--;
        m=1;
        for ( j = 1; j <=n; j++)
        {
            if (j>=(n+1)-k&& j<=n)
            {
               printf("%d",m);
               m++;
               
            }
            else{
                printf(" ");
            }

            
        }
        printf("\n");
        
    }
    
    return 0;
}