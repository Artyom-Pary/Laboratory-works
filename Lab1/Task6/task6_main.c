#include <stdio.h>
#include <math.h>
#include <stdlib.h>
extern int x;
extern double result;
extern void f(void);

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