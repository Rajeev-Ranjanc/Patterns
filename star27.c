/*
N:5
        A
      A B 1
    A B C 1 2
  A B C D 1 2 3
A B C D E 1 2 3 4
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
                    printf("%c",ch);
                    ch++;
                }
                else{
                    printf("%d",k);
                    k++;
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

