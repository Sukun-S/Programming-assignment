#include<stdio.h>

int main(){


	int min,max, i, j,count;

	printf("first and last  value");
	scanf("%d%d", &min,&max);

	for(i=min;i<=max;i++)

	{

	count = 0;
	for(j=1;j<=i;j++)
{

	if(i%j==0)
	count ++;
}
	if(count ==2)
	printf("\n %d are the term", i);
	}

	return 0;

}
