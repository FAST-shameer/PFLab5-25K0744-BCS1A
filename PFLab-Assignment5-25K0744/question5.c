#include <stdio.h>

int main(){
	int largest = 0;
	int mark1, mark2, mark3;
	
	printf("Enter the first marks: ");
	scanf("%d", &mark1);
	printf("Enter the second marks: ");
	scanf("%d", &mark2);
	printf("Enter the third marks: ");
	scanf("%d", &mark3);
	
	largest = mark1;
	if (mark2 > largest){
		largest = mark2;
	} 
	if (mark3 > largest){
		largest = mark3;
	}
	
	printf("Largest marks: %d\n", largest);
	
	return 0;
}
