#include <stdio.h>
#include <stdlib.h>
#include <func.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "Rus");
	double x, y;
	printf("1. Task1\r\n");
	printf("2. Task2\r\n");
	int a = _getch();
	switch (a)
	{
	case '1':
		system("cls");
		printf("TASK 1\n\r");
		printf("Enter x: ");
		scanf_s("%lf", &x);
		printf("Enter y: ");
		scanf_s("%lf", &y);
		printf("≈сли точка попала в область 1, если нет, то 0\n\r");
		printf("%d\n\r", isInArea(x, y));
		break;
	case '2':
		system("cls");
		printf("TASK 2\n\r");
		printf("Enter x: ");
		scanf_s("%lf", &x);
		printf("f(x) = %.3lf", f(x));
		break;

	}
	system("pause");
	return 0;
}