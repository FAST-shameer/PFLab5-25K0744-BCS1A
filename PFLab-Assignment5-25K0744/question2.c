#include <stdio.h>
#include <ctype.h>

int main(){
	int usrInput;
	scanf("%d", &usrInput);
	if (usrInput % 2 == 0){
		printf("Even\n");
	} else if (usrInput % 3 == 0){
		printf("Divisible by 3\n");
	} else {
		printf("Odd and not divisible by 3\n");
	}
	return 0;
}
