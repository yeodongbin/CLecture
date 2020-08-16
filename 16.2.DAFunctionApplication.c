#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//2
void print_str(char **ps);

int main(void)
{
	////1 동적할당을 하면 입력되는 문자열의 길이에 맞게 저장할수 있다.
	char temp[80];     // 임시 char 배열
	char *str[3];      // 동적 할당 영역을 연결할 포인터 배열
	int i;             // 반복 제어 변수

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);                                 // 문자열 입력
		str[i] = (char *)malloc(strlen(temp) + 1);  // 문자열 저장 공간 할당
		strcpy(str[i], temp); //주소 입력 동적할당영역에 문자열 입력
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);                     // 입력된 문자열 출력
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);                               // 동적 할당 영역 반환
	}

	////2 동적할당 문자열 함수 처리
	char temp[80];                     // 임시 char 배열
	char *str[21] = { 0 };             // 문자열을 연결할 포인터 배열, 널포인터로 초기화
	int i = 0;                         // 반복 제어 변수

	while (i < 20)                     // 최대 20개까지 입력
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);                                 // 문자열 입력
		if (strcmp(temp, "end") == 0) break;        // end가 입력되면 반복 종료
		str[i] = (char *)malloc(strlen(temp) + 1);  // 문자열 저장 공간 할당
		strcpy(str[i], temp);                       // 동적 할당 영역에 문자열 복사
		i++;
	}
	print_str(str);                                 // 입력한 문자열 출력

	for (i = 0; str[i] != NULL; i++)                // str에 연결된 문자열이 없을 때까지
	{
		free(str[i]);                               // 동적 할당 영역 반환
	}

	return 0;
}

void print_str(char **ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;//다음배열 요소
	}
}