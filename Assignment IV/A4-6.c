 
 #include<stdio.h>
    int main() {
    	int n,i,j,k;
    	int sum=0;
    	printf("Enter the value of series: ");
    	scanf("%d",&n);
	j= n+2;
	k= n+1;
    	
    	printf("Sum of the series: ");
    	for (i =1;i <= n;i++) {
    		
	sum = (((j)*(k)*n)/3);
    	}

	printf("%d", sum);
    	return 0;
    }
