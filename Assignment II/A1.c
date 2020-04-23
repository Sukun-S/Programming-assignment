
 #include <stdio.h>
 
int main()
{
  int a;
 
  printf("Enter an integer\n");
  scanf("%d", &a);

 printf(" Value =  %d\n", a);

    if (a> 0) 
        printf("sign = +ve\n", a); 
    else if (a < 0) 
        printf("sign = -ve\n",a); 

  return 0;
}
