#include<stdio.h>

int main()

{

int min, max, n ,rem, fact, sum, i, strong, j;

printf("min and max :");
scanf("%d%d", &min, &max);

for( i=min;i<=max; i++)
{
		n=i;
		strong = n;
		sum =0;
	{
		rem = n%10;
		fact =1;
		
			for(j=1;j<=rem; j++)
			fact = fact*j;
			sum= sum+fact;
			n=n/10;

			if(strong==sum)
			{

			printf("%d\n", strong);
			}
}

}

return 0;
}
