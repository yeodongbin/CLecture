///*
//while 조건
//
//for (초기식, 조건식, 증감식ㄴ)횟수
//
//do ~ while 선행 조건 + 조건
//
//*/
//
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 1;
//	int i = 0;
//	int j;
//
//	while (a < 10) //참이면 동작 거짓이면 나온다.
//	{
//		a = a * 2;
//		i++;
//	}
//
//	i = 0;
//
//	for (j = 0; j < 3; j++) // 조건식 j<3 감지
//	{
//		i++;
//	}
//
//	i = 0;
//	a = 1;
//
//	do //do 문장이 먼저 실행
//	{
//		a = a * 2;
//		i++;
//	} while (a < 10);
//
//	printf("i = %d\n", i);
//
//	return 0;
//}