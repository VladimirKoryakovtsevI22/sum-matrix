// SUMCIKLESs.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <ctime>
#include <random>


int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(0));
	int end = 1000;
	int start = 0;
	int N;
	int M;
	printf("enter arrea size");
	scanf_s("%d%d", &N, &M);

	int **a = new int*[N];
	for (int i = 0; i < N; i++)
		a[i] = new int[M];

	int **b = new int*[N];
	for (int i = 0; i < N; i++)
		b[i] = new int[M];

	int **c = new int*[N];
	for (int i = 0; i < N; i++)
		c[i] = new int[M];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			a[i][j] = rand() % (end - start + 1) + start;
			b[i][j] = rand() % (end - start + 1) + start;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", a[i][j]);

		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", b[i][j]);

		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", c[i][j]);

		}
		printf("\n");
	}
	return 0;
}


