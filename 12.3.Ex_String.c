
#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
	char ch;
	int num = 0;;
	char numStr[10] = { 0, };
	int i = 0;
	int size = 0;

	while ((ch = getchar()) != '\n')
	{
		numStr[i] = ch - ('0');
		i++;
	}

	size = strlen(numStr);
	for (int j = 0; j < size; j++)
	{
		num += numStr[j] * (int)pow(10,size - j - 1);
	}

	printf("%d\n", num+10);

	return 0;
}