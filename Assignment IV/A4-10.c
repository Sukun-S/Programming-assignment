#include <stdio.h>
void main()
{
	float x,sum,t,d;
	int i,n;
	printf("Input the Value of x :");
	scanf("%f",&x);
	printf("Input the number of terms : ");
	scanf("%d",&n);
	sum =1; t = 1;
	for (i=1;i<n;i++)
	{
	  
	  t = -t*x*x/d;
	  
	}
	printf("Number of terms = %d\n",n);
} 
