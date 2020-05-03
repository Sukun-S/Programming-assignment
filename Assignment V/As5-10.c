#include <stdio.h>

int main(){

int n, i,j;

printf("\nEnter a number:");
scanf("%d",&n);

if(n>100){
 i= n/10;
 i=i%10;
}
 

printf("%d",i);
 return 0;
}
