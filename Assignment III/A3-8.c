
#include <stdio.h>

int main() {
    
    int a, n, d, tn, i;
    int sum = 0; // taken 0 because it wont store garbage value
    
    printf("First num A.P:");
    scanf("%d", &a);
    printf(" total A.P:  ");
    scanf("%d", &n);
    printf("C.D:  ");
    scanf("%d", &d);
     
     for(i=1;i<=n;++i)
  {
     tn=a+(i-1)*d;
     printf("%d ",tn);
  }
  sum=n*(a+tn)/2;
  printf("\n\nSum of the series upto %dth term= %d\n",n,sum);
    return 0;
}
