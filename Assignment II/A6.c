#include<stdio.h>
int main()
{
int a[10]={1000,900,800,700,600,500,400,300,200,100}; 
printf("enter your money ");
scanf("%d",&m);
if(m%100==0){

printf("print",a[m]);
}
else
printf("Invalid amount not multiple of 100.\n ");
return 0;
}
