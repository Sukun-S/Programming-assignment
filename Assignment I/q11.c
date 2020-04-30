#include<stdio.h>

int main()
{

int v1, v2, Distance;
float Time, Speed;

printf("enter the speed of train 1:\n");
scanf("%d", &v1);


printf("Enter the speed for thr train 2:\n");
scanf("%d", &v2);


printf("Enter the distance:\n");
scanf("%d", &Distance);


Speed =v1+v2;
Time =Distance/Speed;


printf("Time required = %.2f\n", Time);
return 0;


}
