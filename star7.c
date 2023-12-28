/*
1
2 3
4 5 6
7 8 9 10
10 11 12 13
*/
#include<stdio.h>
int main(){
    
    int x=1;
    int i,j,n;
    printf("n:");
    scanf("%d",&n);
   for ( i = 1; i <=n; i++)
   {
    for ( j = 1; j <= i; j++)
    {
        printf(" %d",x);
        x++;
        
    }
    printf("\n");
   }
   
    
    return 0;
}