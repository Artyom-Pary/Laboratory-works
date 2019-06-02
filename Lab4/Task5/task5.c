#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

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

void main(void)
{
	setlocale(LC_ALL, "Rus");
	int n;
	int *arr = NULL;
	printf("Задайте размер\n\r");
	scanf("%d", &n);
	sortStackArray(arr, n);
}
