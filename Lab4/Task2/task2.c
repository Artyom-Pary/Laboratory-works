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

void main(void)
{
	setlocale(LC_ALL, "Rus");
	int a[SIZE];
	printf("��������� ������ �� 5 ���������\n\r");
	for (int i = 0; i < SIZE; i++)
	{
		printf("������� �������: a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	writeArray(a, SIZE);
}