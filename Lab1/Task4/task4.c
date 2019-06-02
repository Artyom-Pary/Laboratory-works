#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int x;
double result;
void f(void);

void main(void)
{
	x = 5;
	f();
	printf("x = %d\r\n", x);
	printf("result = %.4f\r\n", result);
	printf("New value = x: ");
	scanf_s("%d", &x);
	printf("result = %.4f\r\n", result);
	system("pause");
}
void f(void)
{
	result = (1 + sin(2 * x)) / cos(2 * x);
}