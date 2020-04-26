
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
    
     
    sum = (n * (2 * a + (n - 1) * d)) / 2; // sum formula
    tn = a + (n - 1) * d; // tn term series formula
    i = a; //condition i = a, first num of AP is equal to i 
    printf("\n sum of A.P: ");


    while(i <= tn) // while loop condition, checking the tn final should be less than i
    {
        if(i != tn) // i should not be equal to Tn or else loop will get terminated
            printf("%d + ", i);
        else
            printf("%d = %d", i, sum);
        i = i + d; // i should be added to common difference that is d
    }
    printf("\n");
    return 0;
}
