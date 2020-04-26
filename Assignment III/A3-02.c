#include<stdio.h>

int main()

{
	int n,r, sum =0;
 	 
	printf("Enter num :");
	scanf("%d", &n);
	

	while(n>9)
	{

	sum=0;
	while(n>0)
	{
		r= n%10;
		n =n/10;
 		sum =sum+r;

	}

        }
	printf("%d", sum);
}
