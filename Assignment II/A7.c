

#include <stdio.h>

int main() {
     int n, n1, rem, num = 0;
    
    printf("Enter number ");
    scanf("%d", &n);
    n1 = n;

     while (n1 != 0) { // if value is zero then it doesnot satisfy the condition
        
      rem = n1 % 10; //rem stores the value of rem like 153%10 = quo = 15, rem = 3
        
        num += rem * rem * rem; // rem = 3*3*3; and add with num
        
        
         n1/= 10; // here to check the quotient like 153/10, what is the quotient because already we got the last number
    }

    if (num == n) //after adding if we the same number then we can say its armstrong
        printf("%d armstrong.", num);
    else
        printf("%d not Armstrong.", num);

    return 0;
}

