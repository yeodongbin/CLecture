#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int ch;                           // int형 변수

	printf("문자 a의 아스키 코드값 : %d\n", 'a');
	printf("아스키 코드값이 97인 문자 : %c\n", 97);
	printf("문자 상수의 크기 : %d바이트\n", sizeof('a'));

	ch = 'a';                         // 문자를 int형 변수에 대입
	ch++;                             // 아스키 코드값 1 증가
	printf("문자 %c의 아스키 코드값 : %d\n", ch, ch);

	//************ 대문자 -> 소문자
	char small, cap = 'G';                // char형 변수 선언과 초기화

	if ((cap >= 'A') && (cap <= 'Z'))     // 대문자 범위라면
	{
		small = cap + ('a' - 'A');    // 대,소문자의 차이를 더해 소문자로 변환
	}
	
	printf("대문자 : %c %c", cap, '\n');   // '\n'를 %c로 출력하면 줄이 바뀐다.
	printf("소문자 : %c\n", small);

	
	//************ 문자 입력 공백
	char ch1, ch2;

	scanf("%c %c", &ch1, &ch2);   	// 두 개의 문자 연속 입력
	printf("[%c %c]\n", ch1, ch2);  // 입력된 문자 출력


	//************ 문자 전용 입출력
	int ch3;                    	// 입력 문자를 저장할 변수

	ch3 = getchar();      		// 함수가 반환하는 문자를 바로 저장
	printf("입력한 문자 : ");
	putchar(ch3);               	// 입력한 문자 출력 문자 상수, 문자 아스키 코드값
	putchar('\n');            	// 개행문자 출력

	return 0;
}

//대문자 <-> 소문자
