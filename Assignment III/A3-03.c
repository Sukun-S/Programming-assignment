#include<stdio.h>

int main()
{

	int n, temp, rev =0, r;


	printf("enter a num:\n");
	scanf("%d", &n);

	temp=n;
	
	while(temp>0)
	{
		r=temp%10;
		rev=(rev*10)+r;
		temp = temp/10;
	}

		if(n==rev){

		printf("palindrome:");
	}
		else{
		
		printf("not a palindrome");
	}

		return 0;
	}
