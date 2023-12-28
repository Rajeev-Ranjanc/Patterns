#include<stdio.h>
void printname(int n);
int main(){
    
   printf("hello: ");
    printname(4);
}
void printname(int n){
   
   if(n<1){
    return;
   }
   printf("%d ",n);
   printname(n-1);
}