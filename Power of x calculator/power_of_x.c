// C program to multiply two square matrices.
#include <stdio.h>
#include <math.h>

void fnpow(float x, int y) {
    int power = pow(x, y);
    printf("%d to the power %d is: %d\n", (int)x, y, power);
}

int main()
{
	float x;
	int y;
	printf("Enter base: ");
	scanf("%f", &x);
	printf("Enter exponent: ");
	scanf("%d", &y);
	fnpow(x, y);
	return 0;
}

