#include<stdio.h>
int main(){
    int n=3;
    int i,j,k=0;
    for(i=1;i<=2*n;i++){
        if(i<n+1){
            k++;
        }
        else if(i>n+1){
            k--;
        }
        for(j=1;j<=2*n;j++){
            if(j<=(n+1)-k || j>=n+k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}