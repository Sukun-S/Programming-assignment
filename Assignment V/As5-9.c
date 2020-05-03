
#include <stdio.h>
#include <math.h> 

int main()
{
    float number, roundValue;
    
    printf(" Please Enter any Numeric Value to Round :  ");
    scanf("%f", &number);

    printf("please enter the round value:");
    scanf("%f", &roundValue);
    
roundValue = round(number);

if(roundValue=2)
    
 printf("\n The Round Value of %.2f = %.4f \n", number, roundValue);

 else if(roundValue=3) 
printf("\n The Round Value of %.3f = %.5f \n", number, roundValue);
   
    return 0;
}
