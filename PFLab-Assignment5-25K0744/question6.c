#include <stdio.h>

void print_binary(int n){
	int bit;
	for (int i = 31; i >= 0; i--){
		bit = (n >> i) & 1;
		printf("%d", bit);
	}
}

int main(){
	// expression: (a & b) | (a ^ b)
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	int and_operation = a & b;
	int xor_operation = a ^ b;
	int or_operation = and_operation | xor_operation;
	
	printf("a in binary: ");
	print_binary(a);
	printf("\nb in binary: ");
	print_binary(b);
	
	printf("\na & b = %d. Binary: ", and_operation);
	print_binary(and_operation);
	printf("\na ^ b = %d. Binary: ", xor_operation);
	print_binary(xor_operation);
	printf("\n(a & b) | (a ^ b) = %d. Binary: ", and_operation | xor_operation);
	print_binary(or_operation);

	return 0;
}
