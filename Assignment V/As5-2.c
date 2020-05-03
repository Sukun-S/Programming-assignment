#include<stdio.h>

int main(){

int n, i,k, t=1;

printf("\nEnter a number:");
scanf("%d",&n);


printf("enter the digit");
scanf("%d", &k);

for(i=0;i<k; i++){


	t=t*10;
  }
   n/=t;

printf("%d",n);

return 0;

}
