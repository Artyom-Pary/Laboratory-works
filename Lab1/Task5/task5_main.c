#include <stdio.h>
#include <math.h>
#include <stdlib.h>
extern double f(double x);
void main(void)
{
	int x = 5;
	printf("x = %d\r\n", x);
	double result = f(x);
	printf("result = %.4f\r\n", result);
	printf("New value = x: ");
	scanf_s("%d", &x);
	printf("result = %.4f\r\n", result);
	system("pause");
}