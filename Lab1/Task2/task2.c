#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double f(double x)
{
	double z = (1 + sin(2 * x)) / cos(2 * x);
	return z;
}
void main(void)
{
	int x = 5;
	printf("x = %d\r\n", x);
	double result = f(x);
	printf("result = %.4f\r\n", result);
	printf("New value = x:");
	scanf_s("%d", &x);
	printf("result = %.4f\r\n", result);
	system("pause");
}