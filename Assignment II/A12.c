#include <stdio.h>
int main()  
{  
    int num1, num2;  
    int sum, sub, multiply;  
    float divide;
 
     // Read two numbers from user separated by comma 
      
    printf("Input any two numbers separated by comma : ");  
    scanf("%d,%d", &num1, &num2);  

    // Performs all arithmetic operations 
    
    sum = num1 + num2;  
    sub = num1 - num2;  
    multiply = num1*num2;
    divide = num1/num2;
    
    
  // Prints the result of all arithmetic operations 
   
    
    
    printf(" sum : %d\n", sum);  
    printf("difference  : %d\n", sub);  
    printf("multiplication: %d\n");
    printf("divide %f\n");
    
   
  
    return 0;   
} 

