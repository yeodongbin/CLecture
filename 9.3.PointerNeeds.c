#include <stdio.h>

void swap(int a, int b);
void pswap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);

	//pswap(&a, &b);
	
	printf("a: %d, b: %d\n", a, b);

	return 0;
}

void swap(int a, int b)
{
	int temp;

	//main a != swap a ���� �ʴ�.
	temp = a;
	a = b;
	b = temp;

	//swap �Ұ�
	//HomeWork: �����͸� Ȱ������ �ʰ� swap�ϱ�
}


void pswap(int* pa, int* pb)
{
	int temp;

	//pa = a�� �ּ�, *pa = a��
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}