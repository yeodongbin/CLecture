#include <stdio.h>

void main()
{
	int nData = 0x41; // 16���� �Է�

	printf("%d\n", nData);
	printf("%X\n", nData); //16����
	printf("%c\n", nData); // char
	printf("%c\n", nData+1);
	printf("%c\n", nData+2);
	printf("%c\n", 'A'+3);

	printf("%s, %d\n","Hello", 10);

	//���Ǵ� �������
	char* pszData = "TEST STRING";

	printf("%s\n", pszData);
	printf("%p\n", pszData);//pointer �ּ�
	printf("%p\n", &pszData);
}