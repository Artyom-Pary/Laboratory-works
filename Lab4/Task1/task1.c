#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void f(const double *x, double *result)
{
	*result = (1 + sin(2 * (*x)) / cos(2 * (*x)));
}

void main(void)
{
	double x;
	scanf_s("%f", &x);
	double result;
	f(&x, &result);
	printf("%f\n\r", result);
	system("pause");
}