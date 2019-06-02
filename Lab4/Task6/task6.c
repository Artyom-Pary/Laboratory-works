#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

#define SIZE 5

void f(const double *x, double *result)
{
	*result = (1 + sin(2 * (*x)) / cos(2 * (*x)));
}

void writeArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\r\n");
	system("pause");
}

void readArray(int *arr, int n)
{
	printf("Заполните массив из %d элементов\n\r", n);
	for (int i = 0; i < n; i++)
	{
		printf("Введите элемент: a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void sort(int *arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void sortStackArray(int *arr, int n)
{
	arr = malloc(sizeof(int) * n);
	readArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
}

// ******************************************

void performTask1()
{
	double x;
	printf("Ввод переменной:");
	scanf_s("%f", &x);
	double result;
	f(&x, &result);
	printf("Результат: %f\n\r", result);
	system("pause");
}

void performTask2()
{
	setlocale(LC_ALL, "Rus");
	int a[SIZE];
	printf("Заполните массив из 5 элементов\n\r");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Введите элемент: a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	writeArray(a, SIZE);
}

void performTask3()
{
	setlocale(LC_ALL, "Rus");
	int a[SIZE];
	readArray(a, SIZE);
	writeArray(a, SIZE);
}

void performTask4()
{
	setlocale(LC_ALL, "Rus");
	int a[SIZE];
	readArray(a, SIZE);
	sort(a, SIZE);
	writeArray(a, SIZE);
}

void performTask5()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int *arr = NULL;
	printf("Задайте размер\n\r");
	scanf("%d", &n);
	sortStackArray(arr, n);
}

void main(void)
{
	setlocale(LC_ALL, "Rus");
	while (1)
	{
		printf("Демонстрация заданий:\n\r");
		printf("1. Задание 1\n\r");
		printf("2. Задание 2\n\r");
		printf("3. Задание 3\n\r");
		printf("4. Задание 4\n\r");
		printf("5. Задание 5\n\r");
		int n;
		scanf_s("%d", &n);

		switch (n)
		{
		case 1:
			performTask1();
			break;
		case 2:
			performTask2();
			break;
		case 3:
			performTask3();
			break;
		case 4:
			performTask4();
			break;
		case 5:
			performTask5();
			break;
		default:
			printf("Номер задания не найден, завершение");
			system("pause");
			return;
		}
		printf("Демонстрация задания номер %d завершена.", n);
	}
	

}