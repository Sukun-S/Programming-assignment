#include <stdio.h> 
int main() 
{ 
    int x = 4, y = 9; 
    x = x + y; // x now becomes 15 
    y = x - y; // y becomes 10 
    x = x - y; // x becomes 5 
   printf("Results after changing values: x = %d, y = %d", x, y); 
   return 0; 
}
