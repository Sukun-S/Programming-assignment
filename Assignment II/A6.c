#include <stdio.h>

 

unsigned long amount=1000, deposit, withdraw;

int choice, k;

char transaction ='y';

 

int main()

{


		printf("2. Withdraw Cash\n");

		printf("4. Quit\n");

		printf("******************?**************************?*\n\n");

		printf("Enter your choice: ");

		scanf("%d", &choice);

		switch (choice)

		{

		case 1:

			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");

			scanf("%lu", &withdraw);

			if (withdraw % 100 != 0)

			{

				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");

			}

			else if (withdraw >(amount - 500))

			{

				printf("\n INSUFFICENT BALANCE");

			}

			else

			{

				amount = amount - withdraw;

				printf("\n\n PLEASE COLLECT CASH");

				printf("\n YOUR CURRENT BALANCE IS%lu", amount);

			}

			break;

		
		default:

			printf("\n INVALID CHOICE");

		}

		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

		fflush(stdin);

		scanf("%c", &transaction);

		if (transaction == 'n'|| transaction == 'N')

                    k = 1;

	} while (!k);

	printf("\n\n THANKS FOR USING OUT ATM SERVICE");

}
