#include <stdio.h>	
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int lotto[7];
	int value;
	int i, j;
	int n = sizeof(lotto) / sizeof(lotto[0]);
	int temp;

	srand((unsigned int)time(NULL));

	//Lotto
	lotto[0] = (rand() % 45) + 1;
	for (i = 1; i < n; i++)
	{
		value = (rand() % 45) + 1;
		for (j = 0; (j < i); j++)
		{
			if (value == lotto[j])
			{
				i--;
				break;
				
			}
			else
			{
				lotto[i] = value;
			}
		}
	}

	//»ðÀÔÁ¤·Ä
	for (i = 1; i < 6; i++)
	{
		temp = lotto[i];
		for (j = i - 1; (j >= 0 && temp < lotto[j]); j--)
		{
			lotto[j + 1] = lotto[j];
		}
		lotto[j + 1] = temp;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", lotto[i]);
	}

	return 0;
}
