#include<stdio.h>

 int main()
	{
	int n, f=1, i;
	
	printf("Enter a number:");
	scanf("%d",&n);
 	

	for(i=1;i<=n/2;i++)
	{
 		if(n%i==0)
			{
			++f;
			}
	}

	printf("Factorial %d\n", n);

	return 0;
	}
