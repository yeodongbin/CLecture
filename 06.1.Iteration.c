/*
1. while 조건
2. for (초기식, 조건식, 증감식ㄴ)횟수
3. do ~ while 선행 조건 + 조건
*/

#include <stdio.h>

int main(void)
{
  int a = 1;
	int i = 0;
	int j;

	while (a < 10) //참이면 동작 거짓이면 나온다.
	{
		a = a * 2;
		i++;
	}

	i = 0;

	for (j = 0; j < 3; j++) // 조건식 j<3 감지
	{
		i++;
	}

	i = 0;
	a = 1;

	do //do 문장이 먼저 실행
	{
		a = a * 2;
		i++;
	} while (a < 10);

	printf("i = %d\n", i);

	return 0;
}

// < 예제문제 >
// 1부터 n까지의 합
// 1부터 n까지의 홀수 제곱근의 합
// 1부터 n까지의 홀수합, 짝수의 합
// 최대 공배수 , 최대 공약수
// 1 12 123 1234 중첩

