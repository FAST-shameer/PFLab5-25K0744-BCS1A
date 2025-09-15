#include <stdio.h>
#include <ctype.h>

int main(){
	float attendancePercentage;
	char midtermResult;
	char paidExamFee;
	
	printf("Enter your attendance percentage: ");
	scanf("%f", &attendancePercentage);
	
	if (attendancePercentage < 75) {
		printf("You are not eligible for the final exam because your percentage is less than 75\n");
	} else {
		printf("Did you pass your midterm (P/F)? ");
		scanf(" %c", &midtermResult);
		if (tolower(midtermResult) == 'f'){
			printf("You are not eligible for the final exam because you failed your mid term exams\n");			
		} else if (tolower(midtermResult) == 'p'){
			printf("Have you paid the exam fee (Y/N)? ");
			scanf(" %c", &paidExamFee);
			if (tolower(paidExamFee) == 'n'){
				printf("You are not eligible for the final exam because you did not pay the exam fee\n");
				
			} else if (tolower(paidExamFee) == 'y'){
				printf("You are eligible for the final exam!");
			} else{
				printf("Enter a valid input!\n");
			}
		} else {
			printf("Enter a valid input!\n");
		}
	}
	return 0;
}
