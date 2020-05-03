#include<stdio.h>

int main(){

int n,i,j;

 printf("the number sto be entered");
 scanf("%d",&n);


for(int i = 3; i < 50; i += 3){

if(n%3==0){

printf("Multiple of 3");


if (n%15==1)

printf(",");

}
if (i%15 ==0){

printf("not");
}

}

return 0;

}


	 

