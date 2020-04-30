#include<stdio.h>
int main()
{
int n=10000,i,num,sum=0,j;
printf("all the amstrong number between 1 to %d are:\n",n); 
for(i=1;i<=n;i++)
{
	num=i;
	sum=0;
while(num!=0)
{
j=num%10;
sum=sum+(j*j*j);
num=num/10;
}

if(sum==i)
{
	printf("%d is amstrong number\n",i);}
}

return 0;
}
