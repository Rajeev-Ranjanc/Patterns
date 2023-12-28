/*
* * * * * * * * * 
* * * *   * * * * 
* * *       * * * 
* *           * * 
*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * *
*/
#include<stdio.h>
int main(){
    int i,j,n,k=0;
    printf("N:");
    scanf("%d",&n);
    for ( i = 1; i <=2*n-1; i++)
    {
        i<=n?k++:k--;
        for(j=1;j<=2*n-1;j++){
            if(j<=(n+1)-k||j>=(n-1)+k){
                printf("*");
            }
            else{
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}