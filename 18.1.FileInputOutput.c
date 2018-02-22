#include <stdio.h>

int main(void)
{
	FILE *fp;                                   // 파일 포인터
	int ch;										// 입력한 문자를 저장할 변수

	fp = fopen("a.txt", "r");                   // a.txt 파일을 읽기 전용으로 개방
	if (fp == NULL)                             // fp가 널포인터면 파일 개방 실패
	{
		printf("파일이 열리지 않았습니다.\n");		// 안내 메시지 출력
		return 1;                               // 프로그램 종료
	}
	printf("파일이 열렸습니다.\n");

	while (1)
	{
		ch = fgetc(fp);							// 개방한 파일에서 문자 입력
		if (ch == EOF)							// 함수의 반환값이 EOF면 입력 종료
		{
			break;
		}
		putchar(ch);							// 입력한 문자를 화면에 출력
	}

	fclose(fp);                                 // 파일 닫기

	//파일 쓰기

	char str[] = "banana";						// 출력할 문자열
	int i;										// 반복 제어 변수

	fp = fopen("b.txt", "w");					// 쓰기 전용으로 개방
	if (fp == NULL)								// 파일 개방 확인
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	i = 0;										// 문자 배열의 첫 번째 문자부터 출력
	while (str[i] != '\0')						// 널문자가 아니면
	{
		fputc(str[i], fp);						// 문자를 파일에 출력
		i++;									// 다음 문자로 이동
	}
	fputc('\n', fp);

	fclose(fp);									// 파일 닫음


	return 0;
}