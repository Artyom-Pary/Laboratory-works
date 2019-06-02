#include <stdio.h>
#include <math.h>
int x;
double result;
void f(void)
{
	result = (1 + sin(2 * x)) / cos(2 * x);
}