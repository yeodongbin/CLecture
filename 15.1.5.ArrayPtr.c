#include <stdio.h>
int *arrayPtr();

int main(void)
{
	int ary[3][4] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 } };
	int(*pa)[4];                      // int�� ���� 4���� �迭�� ����Ű�� �迭 ������
	int i, j;

	//pa = ary;
	pa = arrayPtr();
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);  // pa�� 2���� �迭ó�� ���
		}
		printf("\n");
	}

	return 0;
}

int *arrayPtr()
{
	int ary[3][4] = { { 3, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 } };
	int(*pa)[4];
	int *pary;
	int i, j;

	//pa = ary;
	pary = ary;
	return pary;
}

//��� ����