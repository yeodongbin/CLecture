//배열명은 배열의 첫 번째 주소를 나타낸다.
//int ary[3];
//ary == &ary[0]
//ary+1 == &ary[1]
//int* pa = ary;
//pa[0] == ary[0]
//pa[1] =  ary[1]

// 배열명이 나타내는 주소값은 상수다
// ary++ (x)
// pa++ (0)
//
#include <stdio.h>

int main(void)
{
	int ary[5] = { 10,20,30,40,50 };

	// #s1
	printf("%d\n", ary);
	printf("%d\n", &ary[0]);
	printf("%d\n", *ary); //배열명은 주소 - 간접 참조 *붙여서 값을 표시
	printf("%d\n", ary[0]);

	// #2
	printf("%d\n", *(ary + 1)); //20, 4byte 단위
	printf("%d\n", ary[1]);
	printf("%d\n", *(ary + 2)); //30
	printf("%d\n\n", ary[2]);

	// #3
	int* pary = ary;// 주소값을 저장 //pary = ary;

	printf("Address   %10u %10u %10u %10u %10u\n", pary, (pary + 1), (pary + 2), (pary + 3), (pary + 4));
	printf("Value     %10d %10d %10d %10d %10d\n", *pary, *(pary + 1), *(pary + 2), *(pary + 3), *(pary + 4));
	printf("ValuePAry %10d %10d %10d %10d %10d\n", pary[0], pary[1], pary[2], pary[3], pary[4]);
	printf("ValuesAry %10d %10d %10d %10d %10d\n\n", ary[0], ary[1], ary[2], ary[3], ary[4]);

	// #4 배열과 포인터의 차이
	// sizeof
	// 포인터는 변수, 배열은 상수
	// 증감연산자, 간접참조 연산자 *(pary++)

	printf("sizeof Pointer : %d\n", sizeof(pary));
	printf("sizeof Array   : %d\n", sizeof(ary));


	return 0;
}

