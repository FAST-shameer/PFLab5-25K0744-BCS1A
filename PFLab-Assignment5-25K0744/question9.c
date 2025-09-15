#include <stdio.h>

int main(){
	const float accountBalance = 10000;
	const int actualPIN = 1234;
	int usrPIN, withdrawalAmount;
	float finalBalance = 0;
	
	printf("Enter PIN: ");
	scanf("%d", &usrPIN);
	if (usrPIN != actualPIN){
		printf("Incorrect PIN!\n");
	} else {
		printf("Enter withdrawal Amount: ");
		scanf("%d", &withdrawalAmount);
		if (withdrawalAmount > accountBalance){
			printf("Insufficient Balance\n");
		} else {
			printf("Withdrawal Successful!\n");
			finalBalance = accountBalance - withdrawalAmount;
			printf("Remaining Balance: %.2f\n", finalBalance);
		}
	}
	
	
	return 0;
}
