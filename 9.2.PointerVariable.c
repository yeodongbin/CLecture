#include <stdio.h>

int main(void)
{
	//��� �ּҿ� �����ʹ� ����Ű�� �ڷ����� ������� ũ�Ⱑ ����.
	char ch;
	int in;
	double dou;

	char* pch = &ch;
	int* pin = &in;
	double* pdou = &dou;

	printf("size of char pointer   : %d Byte\n", sizeof(pch));
	printf("size of int pointer    : %d Byte\n", sizeof(pin));
	printf("size of double pointer : %d Byte\n", sizeof(pdou));

	printf("size of char   : %d Byte\n", sizeof(ch));
	printf("size of int    : %d Byte\n", sizeof(in));
	printf("size of double : %d Byte\n", sizeof(dou));

	// �����ʹ� ����Ű�� ������ ���°� ���� ���� �����ؾ� �մϴ�.
	// ����ȯ�� ����� �������� ������ ������ �����մϴ�.

	double dou2 = 3.4;
	double* pdou2 = &dou2;
	int* pin2;
	pin2 = (int*)pdou2;


	printf("%.1lf \n", dou2);
	printf("%.1lf \n", *pdou2);
	printf("%.1lf \n", *pin2);

	return 0;
}