#include<stdio.h>

int main(){

int moey[]={1000,900,800,700,600,500,400,300,200,100,0};
int withdraw_amount=0;
int i=0,r;
printf("enter amount");
scanf("%d",&withdraw_amount);
while(withdraw_amount>0){
	
r=withdraw_amount/money[i]; //money divides
withdraw_amount = withdraw_amount%money[i]; // value of money returns

printf("collect cash %4d  rupees\n", money[i],r);
i++;
}

printf("final value");
	
	return 0;
	
}
