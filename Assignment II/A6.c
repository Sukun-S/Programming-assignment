#include<stdio.h>
int main()
{
int a[10]={1000,900,800,700,600,500,400,300,200,100},m,temp,i; 
printf("enter your money ");
scanf("%d",&m);
if(m%100==0){
temp =m;
(i=0;i<10;i++)

printf("print",a[i],temp/a[i]);
 temp=temp%a[i];

else
printf("Invalid amount not multiple of 100.\n ");
return 0;
}
