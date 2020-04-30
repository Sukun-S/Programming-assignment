

#include <stdio.h>

int main()

{

        int number,a,b, totalnumber;


        printf ("Enter numbers a, b : ") ;

        scanf ("%d %d", &a, &b);

	if(a>b){
		totalnumber = (a-b)-1;
		printf("%d: is the no of integers in between them\n",totalnumber);
	}
		else
		totalnumber= (b-a)-1;
		printf("%d:is the no of integers in between them\n", totalnumber);


            return 0;

} 
