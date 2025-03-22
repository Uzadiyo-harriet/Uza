#include <stdio.h>

int main(){
	//declare variables for initial balance and the withdrawn amount
	int initial_amount = 50000;
	int withdrawn_amount = 20000;
	int remaining_balance ;
	//calculate remaining balance after withdrawal 
	remaining_balance = initial_amount - withdrawn_amount;
	//display results
	printf("initial_amount: %d shs /n", initial_amount);
	printf("withdrawn_amount: %d shs /n", withdrawn_amount);
	printf("remaining_balance: %d shs /n",remaining_balance);
	
	return 0;
}
