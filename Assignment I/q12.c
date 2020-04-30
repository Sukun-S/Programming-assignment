#include<stdio.h>

int main()
{

int N1, N2, N3;
float sum,N4;


printf("take inputs of A,B,C:\n");
scanf("%d%d%d", &N1,&N2,&N3);


sum= N1+N2+N3;
N4= sum/3.0;


printf("Average=%.2f", N4);

return 0;
}
