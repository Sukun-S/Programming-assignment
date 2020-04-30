#include <stdio.h>
#include<math.h>
int main() {
    
    int a, n, d,curr_term,i,r;
    int sum = 0; // taken 0 because it wont store garbage value
    
    printf("Starting number");
    scanf("%d", &a);
    printf(" common ratio");
    scanf("%d", &n);
    printf(":Nth term");
    scanf("%d", &d);
     
     for(i=1;i<=n;++i)
  {
     curr_term = a * (pow(r, n - 1));
      
     printf("%d ",curr_term);
  }
 
 
    return 0;
}

