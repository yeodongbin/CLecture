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

	//main a != swap a 같지 않다.
	temp = a;
	a = b;
	b = temp;

	//swap 불가
	//HomeWork: 포인터를 활용하지 않고 swap하기
}


void pswap(int* pa, int* pb)
{
	int temp;

	//pa = a의 주소, *pa = a값
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}