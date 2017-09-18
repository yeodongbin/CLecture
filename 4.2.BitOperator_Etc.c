////기타 연산자
////형변환    (int)10.7 -> 10
////sizeof   sizeof(double) -> 8 byte
////복합대입   a += 10;->a = a + 10; + - * / %
////콤마연산자  res = (a, b)->res = b;
////조건연산자(삼항연산자) res = (a > b) ? a : b;
////비트연산자  & | ^ ~ >> <<
//
//#include <stdio.h>
//
//int main(void)
//{
//	//형변환
//	int a = 20;
//	int b = 3;
//	int c = 2;
//	int d = 1;
//	int res;
//	float fRes;
//
//	printf("%.2f, %.2f\n", ((float)a), ((float)b));
//	printf("%.2f\n", ((float)a) / ((float)b));//6.67
//	printf("%d\n", (int)(((float)a) / ((float)b)));//6.67
//
//	//sizeof
//	printf("int = %d byte\n", sizeof(int));
//	printf("double = %d byte\n", sizeof(double));
//	printf("float = %d byte\n", sizeof(float));
//	printf("char = %d byte\n", sizeof(char));
//	printf("int value = %d byte\n", sizeof(a));
//	printf("int value = %d byte\n", sizeof(10));
//
//	//복합대입 + - * / % 연산값을 피연산자에 다시 저장한다.
//	a += 10; //a = a +10; a =30
//	printf("%d\n", a);
//	b -= 1;  //b = b - 1; b =2
//	printf("%d\n", b);
//	c *= 2;  //c = c * 2; c =4
//	printf("%d\n", c);
//	c /= 2;  //c = 2
//	printf("%d\n", c);
//	c %= 2;  //c = 0;
//	printf("%d\n", c);
//
//	//콤마 연산자
//	a = 10;
//	b = 20;
//
//	printf("%d\n", (a += 10, b *= 20)); // b
//
//	//조건 연산자 (조건문)? 참 : 거짓; //매크로 속도 빨라
//	a = 10;
//	b = 20;
//
//	res = (a < b) ? 1000 : 10; //10
//	printf("%d\n", res); // b
//
//	//비트 연산자, & | ^ ~ >> << 정수형에서만 사용가능 -> 복합대입 연산자 사용가능
//	a = 1;  // 0001
//	b = 2;  // 0010
//
//	printf("%d\n", a&b); // b
//	printf("%d\n", a|b); // b
//	printf("%d\n", a^b); // b
//	printf("%d\n", ~a); // b
//	printf("%d\n", a>>1); // b
//	printf("%d\n", a<<1); // b
//
//	//산술연산자( + - ) > 관계연산자 ( &&, || ) > 논리 연산자 (& | ^ )
//
//	return 0;
//}