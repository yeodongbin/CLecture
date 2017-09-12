//signed
//unsigned
//
//char 8
//
//short 16
//int 32
//long 32 //크기는 운영체재와 플랫폼에 따라 다르다
//long long 64
//
//float 32
//double 64
//long double 64~
//
//#include <stdio.h>
//#define PI 3.141592 //값 상수
//#define WRITER "Dennis Ritchie"//문자 상수
//
//int main()
//{
//	//변수 만들기
//  //예약어 (reserved word, keyword) , 식별자(identifier)
//	//자료형 변수명(표현식) = 값
//  
//	char ch1 = 'a';
//  char string1[20] = "strawberry";
//
////string1 = "banana";
////함수의 사용이 필요
//  strcpy(string1, "banana");
//
//	char ch2 = 10;
//	short sht1 = 100;
//	int int1 = 100;
//	long long1 = 100;
//	long long lolong1 = 2000000000;
//
//	float f1 = 100.1f;
//	double dou1 = 100.2f;
//	long double longDou1 = 100.3;
//
//	sht1 = 200;
//
//	printf("%c\n", ch1);
//
//	printf("%d  %x  %o\n", ch2, ch2, ch2); //10진수 16진수 8진수
//	printf("%d  %x  %o\n", sht1, sht1, sht1); //10진수 16진수 8진수
//	printf("%d  %x  %o\n", int1, int1, int1);
//	printf("%ld  %x  %o\n", long1, long1, long1);
//	printf("%lld  %llx  %llo\n", lolong1, lolong1, lolong1);
//
//	printf("%f  %e\n", f1, f1); 
//	printf("%f  %e\n", dou1, dou1);
//	printf("%f  %e\n", longDou1, longDou1);
//	
//	printf("변수 크기(char)  : %d\n",sizeof(char));//Byte 단위
//	printf("변수 크기(short) : %d\n", sizeof(short));
//	printf("변수 크기(int)   : %d\n", sizeof(int));
//	printf("변수 크기(long)  : %d\n", sizeof(long));
//	printf("변수 크기(long long): %d\n", sizeof(long long));
//	printf("변수 크기(float) : %d\n", sizeof(float));
//	printf("변수 크기(double): %d\n", sizeof(double));
//	printf("변수 크기(long double): %d\n", sizeof(long double));
//	
//	printf("\n");
//	printf("%f\n", PI);
//	printf("값 상수 크기()    : %d\n", sizeof(PI));//Byte 단위
//	printf("%s\n", WRITER);
//	printf("문자 상수 크기()  : %d\n", sizeof(WRITER));//Byte 단위, 왜 15개지?
//	
//	return 0;
//}

//변수 명명법
//첫글자는 반드시 영문
//특수문자 사용 불가
//한글 사용 안됨
//예약어 사용 불가 
//명명 규칙(헝가리안 표기법)
