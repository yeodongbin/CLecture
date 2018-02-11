//1 1차 연산자(괄호) () [] . ->
//2 단항 연산자 - ++ -- ~ ! * & sizeof(type)
//3,4 산술연산자 * / % + -
//5 비트이동연산자 <<, >>
//6 관계연산자 > < >= <=
//7 동등 연산자 == !=
//8,9,10 비트 논리 연산자 & ^ |
//11,12 논리연산자(참,거짓) && ||
//13 조건 연산자(삼항연산자) ? : 
//14 대입연산자 = += -= *= /= %= &= ^= |= <<= >>=
//15 콤마연산자 , 
//
#include <stdio.h>

int main()
{
	int a, b;
	double da, db;
	int sum, sub, mul, inv, div, remainder;

	a = 30;
	b = 20;
	da = 2.0;
	db = 0.3;

	//산술연산자
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;
	div = a / b;
	remainder = a % b;

	printf("%d\t", sum);
	printf("%d\t", sub);
	printf("%d\t", mul);
	printf("%d\t", inv);
	printf("%d\t", div);
	printf("%d\t", remainder);

	printf("\n%.2f\n", da / db);
	//printf("\n%.2f\t", da % db); 불가

	//***********************************
	//증감 연산자 a++, a--
	int pre, post;

	a = 10;
	b = 10;

	pre = (++a) * 3; //시작전
	post = (b++) * 3; //끝난후

	printf("pre  = %d, a = %d\n", pre, a);
	printf("posd = %d, b = %d\n", post, b);

	//***********************************
	//비트 연산자
  


	//***********************************
	//관계 연산자 > < >= <=  == != ture(1), falue(2)s
	a = 20;
	b = 10;

	printf("a> b => %d\n", a>b);
	printf("a>=b => %d\n", a>=b);
	printf("a< b => %d\n", a<b);
	printf("a<=b => %d\n", a<=b);
	printf("a==b => %d\n", a==b);
	printf("a!=b => %d\n", a!=b);

	//***********************************
	//논리 연산자 //&& || ! 3가지
	int a = 30;

	printf("%d\n", (a > 0) && (a > 20));
	// 1 && 1
	printf("%d\n", (a < 0) && (a < 20));
	// 0 && 0

	printf("%d\n", (a > 0) || (a > 20));
	// 1 && 1
	printf("%d\n", (a > 0) || (a < 20));
	// 1 && 0

	printf("%d\n", !(a > 0));


	return 0;
}