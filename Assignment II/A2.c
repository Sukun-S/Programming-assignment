
    // A year is a leap year if it is divisible by 4 but not by 100.
    // If a year is divisible by both 4 and by 100, then it can only be a leap year if it is also divisible by 400.

#include <stdio.h>

int main()
{
  int year;
 
  printf("Enter a year\n"); 
  scanf("%d", &year);
    
  if (year%400 == 0) // is leap
    printf("%d a leap year.\n", year);
   
  else if (year%4 == 0) // is leap
    printf("%d a leap year.\n", year);
    
      else if (year%100 == 0) // not leap
    printf("%d not leap year.\n", year);
    
  else // Not leap
    printf("%d not leap year.\n", year);  
   
  return 0;
}
