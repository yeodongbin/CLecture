// 문자열 "yeodongbin" => 상수 주소
// char* pch = "yeodongbin" //pch에 문자열 상수 주소가 저장된다.
// char str[80] = "yeodongbin"; //str은 배열명, 문자열 상수 주소를 저장하고 있는 변수명
// p344
// 문자열 상수는 이상하게 저장된다. 'y'값의 주소만을 포인터 변수로 저장 -> pch[0] = 't'불가

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_gets(char *);

int main(void)
{
	printf("주소값 : %p\n", "yeodongbin");           // 주소값 
	printf("첫 번째 문자 : %c\n", *"yeodongbin");     //간접참조 연산 //'y' 주소값만 갖는다.
	printf("두 번째 문자 : %c\n", *("yeodongbin"+1)); //포인터 연산식 -> 주소값 연산식
	printf("세 번째 문자 : %c\n", "yeodongbin"[2]);   //주소값 2번째를 읽을 수만 있다.(읽기전용메모리) 
												    //'y'주소값만 가짐
	
	//문자열은 주소 -> char 포인터에 대입하여 사용
	char* dessert = "strawberry"; //주소할당

	printf("%s\n",dessert); //문자열 출력
	dessert = "water mellon";
	printf("%s\n\n", dessert); //문자열 출력

	//%s 동일
	//while (*dessert != '\0')
	//{
	//	putchar(*dessert); //char 단위로 출력
	//	dessert++;
	//}

	//같은 문자열 상수는 여러 번 사용해도 하나만 저장된다.
	//scanf %s

	char str[80];

	printf("\n문자열을 입력 : ");
	scanf("%s", str); //공백문자V, 탭문자(\t), 개행문자(\n)까지 ->공백저장 불가
	printf("첫번째 단어 : %s\n",str); // \0 마지막에 자동 저장
	scanf("%s", str); //자동으로 버터에서 \n 저장
	printf("두번째 단어 : %s\n", str);

	//scanf 함수는 문자열을 저장할 배열의 크기를 모름 -> 오버플로우 가능
	// scanf_s 등장

	//gets 
	printf("\n공백포함 문자열을 입력 : "); 
	gets(str); //배열명으로 주고 함수 호출 \n 까지 저장->\0변경해서 버퍼사용하여 저장
	printf("%s\n", str); //get_s 등장
	 
	//fgets 사용
	printf("\n공백포함 문자열을 입력 : "); //
	fgets(str,sizeof(str),stdin); //개행문자(\n) 까지 저장 + \0
	str[strlen(str) - 1] = '\0';//개행문자(\n) 문자 제거
	printf("%s\n", str); 

	//버퍼 stdin stdout
	int age;
	char name[20];
	printf("나이입력 : ");
	scanf("%d", &age); // \n 까지만 가져감
	getchar(); //= scanf("%*c"); fgetc(stdin); fflush(stdin);//완전 버퍼비움
	printf("이름입력 : ");
	gets(name); // \n까지 버퍼에서 가져감
	printf("나이 : %d, 이름 : %s\n", age, name);

	char str[80] = "strawberry juice";
	char *pstr = "banana";
	puts(str); //개행
	fputs(pstr, stdout); //개행 없음
	puts("milk");

	return 0;
}

void my_gets(char *pstr)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		*pstr = ch;
		pstr++;
	}
	*pstr = '\0';
}