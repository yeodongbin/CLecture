#include <stdio.h>
void swap_ptr(char**ppa, char **ppb);
int main(void)
{
	//** 2중포인터는 포인터 값을 바꾸는 함수의 매개변수에 사용한다.
	char *pa = "success";
	char *pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);  // 바꾸기 전에 문자열 출력
	swap_ptr(&pa, &pb);                      // 함수 호출
	printf("pa -> %s, pb -> %s\n", pa, pb);  // 바꾼 후에 문자열 출력

	return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}