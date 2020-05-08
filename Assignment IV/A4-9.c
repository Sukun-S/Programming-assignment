#include <stdio.h>
#include<math.h>

   
   
int main() {
int x,terms,n,sign=1,i,fact=1,number, n,sum=0 ;

   
  
}   
float result=0.0;
scanf("%d",&x); 

   printf("Enter a number: ");    
     scanf("%d",&number);    
        for(i=1;i<=number;i++){    
          fact=fact*i;    
      }    
for(terms =0; terms<n; terms++)
{
    result+=(pow(x,terms)/fact(terms));
}
printf("%f",result);
return 0;
}

