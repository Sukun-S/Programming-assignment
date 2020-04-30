#include<stdio.h>

int main()

{

int min, max, n , fact, sum, i, strong, j;

printf("min and max :");
scanf("%d%d", &min, &max);

for( i=min;i<=max; i++)
{
		n=i;
		sum=0;

		while(n!=0)
		{
		fact=1;
			for(j=1;j<=n%10; j++)
			{
			fact = fact*j;
		    }
			sum= sum+fact;
			n=n/10;
		}

			if(sum==i)
			{

			printf("%d\n", i);
			}


}

return 0;
}
