#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main(void)
{
	int x = 5;
	printf("x = %d\r\n", x);
	printf("f(x)= %.4f\r\n", (1 + sin(2 * x)) / cos(2 * x));
	printf("New value = x:");
	scanf_s("%d", &x);
	printf("f(x) = %.4f\r\n", (1 + sin(2 * x)) / cos(2 * x)); 
	system("pause");
}