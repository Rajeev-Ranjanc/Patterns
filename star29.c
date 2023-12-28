/*
N:5
        1
      1 2 A
    1 2 3 A B
  1 2 3 4 A B C
1 2 3 4 5 A B C D

*/

#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    char ch;
    printf("N:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        ch='A';
        k=1;
        for(j=1; j<=2*n-1; j++)
        {

            if(j>=(n+1)-i&&j<=(n-1)+i)
            {

                if(j<=n)
                {
                    printf("%d",k);
                    k++;
                }
                else{
                    printf("%c",ch);
                    ch++;
                }


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

