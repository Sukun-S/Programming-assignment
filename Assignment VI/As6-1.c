#include <stdio.h>

  int main()
{
    int a[100];
    int i, n, sum=0,sub=0;
    int num;

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a[i]);
	    }
    printf(" 1.Addition\n 2.Subtraction\n");
    printf("Enter your Choice : ");
    scanf("%d",&num);
	

    for(i=0; i<n; i++)
    {
        sum += a[i];
	
    }



    printf("Sum,array is : %d\n\n", sum);
    

return 0;
}
