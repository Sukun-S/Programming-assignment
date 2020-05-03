#include <stdio.h>
#include<math.h>

int main()
{
   int  sum, t, remainder, j, n;
   
printf("Input a num\n");
scanf("%d", n);

 t=n*100000;

for(j = 0; j <= 5; j++) {


if (n>0&&n<1){

remainder =t %10;
sum = sum+ remainder;
t=t/10;
}
 } 

   printf("Sum of digits of %d = %d\n", n, sum);
 
   return 0;
}
