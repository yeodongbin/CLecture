#include <stdio.h>

void main()
{
	int nData = 0x41; // 16진수 입력

	printf("%d\n", nData);
	printf("%X\n", nData); //16진수
	printf("%c\n", nData); // char
	printf("%c\n", nData+1);
	printf("%c\n", nData+2);
	printf("%c\n", 'A'+3);

	printf("%s, %d\n","Hello", 10);

	//********* 문자 표현, 정의는 순서대로
	char* pszData = "TEST STRING";

	printf("%s\n", pszData);
	printf("%p\n", pszData);//pointer가 가르키는 공간의 주소값
	printf("%p\n", &pszData);// pointer 주소의 주소값

	//********* 정수 표현
	int nData1 = 1234, nData2 = -4567; // 잘못된 변수 선언의 예

	printf("%d\n", nData1);
	printf("%+d %+d\n", nData1, nData2); //기호를 붙여서 출력
	printf("%07d\n", nData1);  //0001234
	printf("%7d\n", nData1);   //   1234  
	printf("%-7d\n", nData1);  //1234

	//******** 실수 표현
	float fData = 123.456f;

	printf("%f\n", fData);
	printf("%lf\n", fData); //소수점 6자리
	printf("%0.1f\n", fData);
	printf("%0.2f\n", fData);
	printf("%0.3f\n", fData);

	printf("%e\n", fData); //지수 형식
	printf("%g\n", fData); //%e %f 중 짧은거
	printf("%f \\ \'  \"  \?  \n", fData); // \\ 두번 표시

	//******** 실수 표현
	__int64 __nData = 0xffffffff; //32bit 최대값

	printf("%d\n", __nData); //32bit 정수형 -> unsigned, signed 설명
	printf("%u\n", __nData); //32bit 정수형 (부호없음)
	printf("%u\n", __nData+1); //32bit 정수형 (부호없음)
	printf("%I64u\n", __nData+10); //64bit 정수형

}

