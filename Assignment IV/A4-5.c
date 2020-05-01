#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,rows;
    printf("Please enter the number of rows\n");
    scanf("%d",&rows);//get input from user
    //loop for display upper half part of the pattern
for(i=1; i<=rows; i++){
    for(j=i; j<=rows; j++){
     printf("*");//print star
  }
  for(j=1; j<=(2*i-2); j++){
     printf(" ");//print space
  }
  for(j=i; j<=rows; j++){
     printf("*");//print star
  }
  printf("\n");
}
  //loop for printing lower half part  of the pattern
for(i=1; i<=rows; i++){
    for(j=1; j<=i; j++){
     printf("*");//print star
  }
  for(j=(2*i-2); j<(2*rows-2); j++){
     printf(" ");//print space
  }
  for(j=1; j<=i; j++){
     printf("*");
  }
  printf("\n");//move to next line
  }
 
  return 0;
  }
