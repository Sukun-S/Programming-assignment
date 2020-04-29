#include<stdio.h>

 int main()
	{
	int no,i, fact=1;
	
	printf("Enter a number:");
	scanf("%d",&no);
 	

	for(i=no; i>=1; i--){
			fact =fact*i;
				}

	printf("Factorial %d\n", fact);

	return 0;
	}
