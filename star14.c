/*
A B C D E F G H G F E D C B A 
A B C D E F G   H G F E D C B
A B C D E F       G F E D C B
A B C D E           F E D C B
A B C D               E D C B
A B C                   D C B 
A B                       C B 
A                           B
*/



#include <stdio.h>
int main()
{
    int i, j, n;
    char ch;
    printf("n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        ch = 'A';
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= (n + 1) - i || j >= (n - 1) + i)
            {
                printf("%c", ch);
                j < n ? ch++ : ch--;
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