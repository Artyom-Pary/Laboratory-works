#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

#define SIZE 5

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
	printf("Заполните массив из 5 элементов\n\r");
	for (int i = 0; i < SIZE; i++)
	{
		printf("Введите элемент: a[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void main(void)
{
	setlocale(LC_ALL, "Rus");
	int a[SIZE];
	readArray(a, SIZE);
	writeArray(a, SIZE);
}