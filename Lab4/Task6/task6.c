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
	printf("��������� ������ �� %d ���������\n\r", n);
	for (int i = 0; i < n; i++)
	{
		printf("������� �������: a[%d] = ", i);
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
	printf("���� ����������:");
	scanf_s("%f", &x);
	double result;
	f(&x, &result);
	printf("���������: %f\n\r", result);
	system("pause");
}

void performTask2()
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
	printf("������� ������\n\r");
	scanf("%d", &n);
	sortStackArray(arr, n);
}

void main(void)
{
	setlocale(LC_ALL, "Rus");
	while (1)
	{
		printf("������������ �������:\n\r");
		printf("1. ������� 1\n\r");
		printf("2. ������� 2\n\r");
		printf("3. ������� 3\n\r");
		printf("4. ������� 4\n\r");
		printf("5. ������� 5\n\r");
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
			printf("����� ������� �� ������, ����������");
			system("pause");
			return;
		}
		printf("������������ ������� ����� %d ���������.", n);
	}
	

}