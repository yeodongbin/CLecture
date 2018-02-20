#include <stdio.h>	
void swap_ptr(char **ppa, char **ppb);
void print_str(char **pps, int cnt);

int main(void)
{
	//// ** 그림으로 설명
	//int a = 10;
	//int *pi;
	//int **ppi;

	//pi = &a;
	//ppi = &pi;

	//printf("-------------------------------------------------\n");
	//printf("변수 변수값 &연산(주소) *연산(포인터 주소) **연산\n");
	//printf("-------------------------------------------------\n");
	//printf("   a%12d%12u\n", a, &a);
	//printf("  pa%12d%12u%12u\n", pi, &pi, *pi);
	//printf(" ppa%12d%12u%12u%12u\n", ppi, &ppi, *ppi, **ppi);
	//printf("-------------------------------------------------\n");

	// ** 2중포인터는 포인터 값을 바꾸는 함수의 매개변수에 사용한다.
	//char *pa = "success";
	//char *pb = "failure";
	//printf("pa -> %s, pb -> %s\n", pa, pb);  // 바꾸기 전에 문자열 출력
	//swap_ptr(&pa, &pb);                      // 함수 호출
	//printf("pa -> %s, pb -> %s\n", pa, pb);  // 바꾼 후에 문자열 출력


	//// ** 2중포인터는 포인터 배열을 매개변수로 받는 함수에도 사용가능
	//char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // 초기화
	//int count;                                     // 배열 요소 수를 저장할 변수
	//count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);  // 배열 요소의 수 계산
	//print_str(ptr_ary, count);                     // 포인터배열의 주소를 넘김 **
	////포인터 배열값 출력 (주소)
	//printf("%10s\t", ptr_ary[0]); //%s 변수가 가지고 있는 주소에 다가가서 값을 표시
	//printf("%10s\t", ptr_ary[1]); 
	//printf("%10s\t", ptr_ary[2]);
	//printf("%10s\n", ptr_ary[3]);

	// **주소값의 계산 : 배열은 전체가 하나의 변수(불변)
	//int ary[5];
	//printf("ary의 값       : %u\n", ary);      // 주소로서의 배열명의 값
	//printf("&ary의 주소    : %u\n", &ary);     // 배열의 주소
	//printf("&(ary[0])      : %u\n", &(ary[0]));
	//printf("\n");
	//printf("ary + 1        : %u\n", ary + 1);
	//printf("&ary + 1 ((&ary) + 1) : %u\n", (&ary) + 1);
	//printf("&(ary[1])      : %u\n", &(ary[1]));
	//printf("\n");
	//printf("sizeof(ary)       : %d\n", sizeof(ary));
	//printf("sizeof(&ary)      : %d\n", sizeof(&ary));
	//printf("sizeof(&(ary[0])  : %d\n", sizeof(&(ary[0])));
	//printf("sizeof(ary + 1)   : %u\n", sizeof(ary + 1));
	//printf("sizeof(&ary + 1)  : %u\n", sizeof(&ary + 1));
	//printf("sizeof(&ary[1])   : %u\n", sizeof(&ary[1]));

	// ** 2차원 배열의 이름은 1차원 배열의 주소, 
	int ary[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 } };
	int(*pa)[4];                // int형 변수 4개의 배열을 가리키는 배열 포인터
	int i, j;

	pa = ary;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf(" %3d", pa[i][j]);  // pa를 2차원 배열처럼 사용
			printf(" %3d", *(pa[i] + j)); //pa[i]포인터 변수에 + 주소더하기
			printf(" %3d", (*pa[i]) + j); //pa[i]포인터 변수에 + 주소더하기
			printf(" %3d", *(*(pa + i) + j));
			printf("\n");
		}
		printf("\n");
	}


	return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

void print_str(char **pps, int cnt)   // 매개변수로 2중 포인터 사용
{
	int i;

	for (i = 0; i < cnt; i++)        // 배열 요소 수만큼 반복
	{
		printf("%10s\t", pps[i]);    // 포인터배열의 값을 표시
									 //%s는 문자열을 출력한다. 이는 배열의 첫번째 주소를 받는다는 것을 의미
	}
	printf("\n");

}