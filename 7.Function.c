//선언 정의 호출

// 함수명, 매개변수 (argument), 반환형(return)


#include <stdio.h>

int add(int x, int y);   // add 함수 선언:컴파일러가 인식
int add_1(void);   // add 함수 선언:컴파일러가 인식
void add_2(void);

int main(void)           // main 함수 시작
{
	int a = 10, b = 20;
	int res;

	res = add_1();     // add 함수 호출
	printf("result : %d\n", res);
	add_2();

	return 0;
}                        // main 함수의 끝

int add(int x, int y)    // add 함수 정의 시작
{
	//함수 안에 사용되는 변수명은 다른 함수의 변수명과 같을 수 있다.
	int temp;            // 두 정수의 합을 잠시 저장할 변수

	temp = x + y;        // x와 y의 합을 temp에 보관

	return temp;         // temp의 값을 반환
}                        // add 함수의 끝

// 매개변수, 반환값 없는 것도 가능?
// 매개변수 void
// 반환값 생략

int add_1(void)    // add 함수 정의 시작
{
	//함수 안에 사용되는 변수명은 다른 함수의 변수명과 같을 수 있다.
	int temp;           
	temp = 10 + 100;        
	return temp;         
}

void add_2(void)    // add 함수 정의 시작
{
	//함수 안에 사용되는 변수명은 다른 함수의 변수명과 같을 수 있다.
	int temp;
	temp = 10 + 100;
	printf("%d\n", temp);
	//return temp;
}


//연습 문제 p222-3(mul 포함)

//재귀함수 - 함수 안에서 자신을 호출하면 재귀호출
#include <stdio.h>
void fruit(int);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int n)
{
	int i = 0;
	printf("strawberry\n");

	if (n == 3)
	{
		return;
	}
	fruit(n+1);
	//반복 제거가 필수 
}

//연습 문제 n!
#include <stdio.h>
int fact(int n)
{
	if (n <= 0)
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	int n;
	n = 3;
	printf("%d! = %d\n", n, fact(n));
	return 0;
}

