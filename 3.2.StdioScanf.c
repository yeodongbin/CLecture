//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	//int scanf(const char* format[,argument]...);
	//��ȯ�� scanf(���� ���� ����, �޸� �ּ�(���� ����);

	int nInput = 0;

	scanf("%d", &nInput); // ����  -----> Input
	printf("%d\n", nInput); // ����  <----- ��µȴ�


	// ���ڿ� �Է�
	char szBuffer[128] = { 0 };

	printf("Input String : ");
	scanf("%s", szBuffer); //�����ڰ� �����̽���(��ĭ)
	printf("%s\n", szBuffer); //�迭�� �̸��� �ּҰ�
	puts(szBuffer); //��µȴ�

	return 0;
}