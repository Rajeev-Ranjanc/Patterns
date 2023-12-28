/*

*
**
***
****
***
**
*

*/
///*
#include<stdio.h>
int main(){
    int i,j,n,k=0;
    printf("n:");
    scanf("%d",&n);
    for (i = 1;i <= 2*n-1;i++)
    {
        i<=n?k++:k--;
        for ( j = 1; j <= k; j++)
        {

             printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}

//*/
/*
//if we take inpiut the no of the row from the user
#include<stdio.h>
int main(){

    int i,j,k=0,row;
    printf("enter no of row:");
    scanf("%d",&row);
    for ( i =1; i <= row; i++)
    {
        if (row%2==0)
        {
            if (i<=row/2)
            {
                k++;
            
            }
            
            if (i>row/2+1)
            {
                k--;
            }      
        }
        else
            i<=(row+1)/2?k++:k--;
        
        for ( j = 1; j <=(row+1)/2; j++)
        {
           if (j<=k)
           {
            printf(" *"); 
           }
           else{
            printf(" ");
           }
           
        }
        printf("\n");
    }
    
    return 0;
}

*/