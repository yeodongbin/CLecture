//문자열 연산은 모두 함수를 사용
//
// strcpy strncpy  문자열 복사
// strlen          문자열 길이 측정
// strcat strncat  문자열 붙이기
// strcmp strncat  문자열 비교
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *my_strcpy(char *pd, char *ps);
int my_strlen(char *ps);
char *my_strcat(char *pd, char *ps);
int my_strcmp(char *pa, char *pb);

int main(void)
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");                // 문자열 "apple" 복사
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));  // 반환값으로 출력

	return 0;
}

char *my_strcpy(char *pd, char *ps)         // 복사받을 곳(pd)과 복사할 곳(ps)의 포인터
{
	char *po = pd;                          // pd값을 나중에 반환하기 위해 보관

	while (*ps != '\0')                     // ps가 가리키는 문자가 널문자가 아닌 동안
	{
		*pd = *ps;                          // ps가 가리키는 문자를 pd가 가리키는 위치에 대입
		pd++;                               // 복사받을 다음 위치로 포인터 증가
		ps++;                               // 복사할 다음 문자의 위치로 포인터 증가
	}
	*pd = '\0';                             // 복사가 모두 끝난 후 복사받을 곳에 널문자로 마무리

	return po;                              // 복사가 끝난 저장 공간의 시작 주소 반환
}
int my_strlen(char *ps)
{
	int cnt = 0;

	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}
	return cnt;
}
char *my_strcat(char *pd, char *ps)
{
	char* po = pd;

	while (*pd != '\0')
	{
		pd++;
	}

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;
}
int my_strcmp(char *pa, char *pb)
{
	while ((*pa == *pb) && (*pa != '\0'))
	{
		pa++;
		pb++;
	}

	if (*pa > *pb)
	{
		return 1;
	}
	else if (*pa < *pb)
	{
		return -1;
	}
	else 
	{ 
		return 0; 
	}
}