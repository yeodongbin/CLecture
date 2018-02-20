//fgetc(stdin); 공백문자, 탭문자, 개행문자도 입력
//fputc(ch, stdout); 문자 출력 전형 함수, 출력할 문자 전달
//fflush(stdin); 입력버터 삭제
//fflush(stdout); 출력 버퍼의 내용 화면에 출력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)  // 세 번 반복
	{
		scanf("%c", &ch);    // 문자 입력
		printf("%c", ch);    // 입력된 문자 출력
	}


	int res;                     // scanf 함수의 반환값을 저장할 변수
	char ch;                     // 문자를 입력할 변수

	while (1)
	{
		res = scanf("%c", &ch);  // 문자 입력, Ctrl+Z를 누르면 -1 반환
		if (res == -1) break;    // 반환값이 -1이면 반복 종료
		printf("%d ", ch);       // 입력된 문자의 아스키 코드값 출력
	}

}