  

#include <stdio.h>
    int main()
    {
    	int n;
    	int th,h,t,u;
        

 	
 	   printf("Enter n: ");
 	   scanf("%d", &n);
 	   
	
        // Thousands,hundreds,tens,units
        u=n%10;
        t=(n/10)%10;
        h=(n/100)%10;
        th=n/1000;
    	printf("Thousands = %d , Hundreds = %d , Tens = %d , Units = %d\n",th,h,t,u);
    	return 0;
    }
