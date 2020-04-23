#include <stdio.h> 
int main() 
{ 
    
    
     float x, y;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);
    
   
    
    x = x + y; // x now combines x and y
    y = x - y; // y becomes  x and y
    x = x - y; // x finally gives the results
   printf("Results after changing values: x = %f, y = %f", x, y); 
   return 0; 
}
