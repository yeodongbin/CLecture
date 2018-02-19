#include <stdio.h>

int main(void)
{
	//모든 주소와 포인터는 가리키는 자료형과 관계없이 크기가 같다.
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

	// 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 합니다.
	// 형변환을 사용한 포인터의 대입은 언제나 가능합니다.

	double dou2 = 3.4;
	double* pdou2 = &dou2;
	int* pin2;
	pin2 = (int*)pdou2;


	printf("%.1lf \n", dou2);
	printf("%.1lf \n", *pdou2);
	printf("%.1lf \n", *pin2);

	return 0;
}