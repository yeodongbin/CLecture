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


	//********* ���� ǥ��, ���Ǵ� �������
	char* pszData = "TEST STRING";

	printf("%s\n", pszData);
	printf("%p\n", pszData);//pointer�� ����Ű�� ������ �ּҰ�
	printf("%p\n", &pszData);// pointer �ּ��� �ּҰ�


	//********* ���� ǥ��
	int nData1 = 1234, nData2 = -4567; // �߸��� ���� ������ ��

	printf("%d\n", nData1);
	printf("%+d %+d\n", nData1, nData2); //��ȣ�� �ٿ��� ���

	printf("%07d\n", nData1);  //0001234
	printf("%7d\n", nData1);   //   1234  
	printf("%-7d\n", nData1);  //1234


	//******** �Ǽ� ǥ��
	float fData = 123.456f;

	printf("%f\n", fData);
	printf("%0.1f\n", fData);
	printf("%0.2f\n", fData);
	printf("%0.3f\n", fData);

	printf("%e\n", fData); //���� ����
	printf("%g\n", fData); //%e %f �� ª����
	printf("%f \\ '\  \"  \?  \n", fData); // \\ �ι� ǥ��


	//******** �Ǽ� ǥ��
	__int64 __nData = 0xffffffff; //32bit �ִ밪

	printf("%d\n", __nData); //32bit ������ -> unsigned, signed ����
	printf("%u\n", __nData); //32bit ������ (��ȣ����)
	printf("%u\n", __nData+1); //32bit ������ (��ȣ����)
	printf("%I64u\n", __nData+10); //64bit ������

}

