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

	//정의는 순서대로
	char* pszData = "TEST STRING";

	printf("%s\n", pszData);
	printf("%p\n", pszData);//pointer 주소
	printf("%p\n", &pszData);
}