//주소 확인
//포인터는 변수의 메모리 주소를 저장하는 변수
//
// 주소연산자 &  
// 포인터    *
// 간접참조 연산자 *[변수명]

#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	/* ** 주소연산자
	%d : 10진수(정수형)
	%f : 실수형
	%e : 지수형
	%o : 8진수
	%x : 16진수
	%u : 부호없는 10진수
	%g : 실수형 자동출력
	%p : 포인터의 주소
	%c : 하나의 문자로 출력
	%s : 문자열
	*/
	//Byte 단위 주소 저장
	printf("int형 주소 : %u\n", &a);
	printf("double형 주소 : %u\n", &b);
	printf("char형 주소 : %u\n", &c);

	//---------------------------------------
	// ** 간접참조, 변수는 상단에 한꺼번에 
	int cat;
	int* pcat; //포인터 변수, 저장할 주소가 어떤 변수의 주소인지 그 자료형을 적는다.

	pcat = &cat; //포인터 변수 = a의 주소값
	*pcat = 10; //포인터가 가리키는 cat변수에 10 저장, 간접참조 연산자

	printf("포인터가 가르키는 cat : %d\n", *pcat);
	printf("변수명으로 가르키는 cat : %d\n", cat);

	//---------------------------------------
	// ** const 사용
	int dog;
	const int* pdog = &dog; 

	pdog = &cat; //?? 왱
	//*pdog = 10; //에러 발생

	printf("포인터가 가르키는 dog : %d\n", *pdog);
	printf("변수명으로 가르키는 dog : %d\n", dog);

	return 0;
}
