#include <stdio.h>
#include <math.h>

int main(){
	float radius, area, circumference, squareRoot;
	scanf("%f", &radius);
	area = M_PI * pow(radius, 2);
	circumference = 2 * M_PI * radius;
	squareRoot = sqrt(radius);
	printf("Area of Circle: %.2f\n", area);
	printf("Circumference: %.2f\n", circumference);
	printf("Square Root of Radius: %.2f\n", squareRoot);
	return 0;
}
