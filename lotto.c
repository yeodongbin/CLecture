#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void genRand(int* ary, int size);
void sortAry(int* ary, int size);
void pSwap(int* x, int* y);

int main(void)
{
	int num[6];
	int size = 0;

	size = sizeof(num) / sizeof(num[0]);

	srand(time(NULL));

	genRand(num, size);
	sortAry(num, size);

	for (int k = 0; k < 6; k++)
	{
		printf("%d  ", num[k]);
	}
	printf("\n");

	return 0;
}

void genRand(int* ary, int size)
{
	for (int i = 0; i < size; i++)
	{
		ary[i] = (rand() % 45) + 1;
		for (int j = 0; j < i; j++)
		{
			if (ary[i] == ary[j])
			{
				i--;
				break;
			}
		}
	}
}

void sortAry(int* ary, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - 1); j++)
		{
			if (ary[j] > ary[j + 1])
			{
				pSwap(&ary[j], &ary[j + 1]);
			}
		}
	}
}

void pSwap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
//
//	//»ðÀÔÁ¤·Ä
//	for (i = 1; i < 6; i++)
//	{
//		temp = lotto[i];
//		for (j = i - 1; (j >= 0 && temp < lotto[j]); j--)
//		{
//			lotto[j + 1] = lotto[j];
//		}
//		lotto[j + 1] = temp;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", lotto[i]);
//	}
//
//	return 0;
//}
