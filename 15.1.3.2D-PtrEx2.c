
#include <stdio.h>

void print_str(char **pps, int cnt);

int main(void)
{
	// ** 2중포인터는 포인터 배열을 매개변수로 받는 함수에도 사용가능
	char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // 초기화
	int count;                                     // 배열 요소 수를 저장할 변수

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);  // 배열 요소의 수 계산
	print_str(ptr_ary, count);                     // 포인터배열의 주소를 넘김 **

	//포인터 배열값 출력 (주소)
	printf("%10s\t", ptr_ary[0]); //%s 변수가 가지고 있는 주소에 다가가서 값을 표시
	printf("%10s\t", ptr_ary[1]);
	printf("%10s\t", ptr_ary[2]);
	printf("%10s\n", ptr_ary[3]);

	return 0;
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