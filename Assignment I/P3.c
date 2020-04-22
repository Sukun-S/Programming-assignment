#include<stdio.h>

int main()
{
	int a,b,numbers;

	
	printf("Enter the first no.: "); // ask for the value of a
	scanf("%d",&a);

	
	printf("Enter the second no.: "); // ask for the value of b
	scanf("%d",&b);

	//formula
	numbers= a-b;
	printf("subtract is = %d\n", numbers);

	return 0;
}

