//���ڿ� ������ ��� �Լ��� ���
//
// strcpy strncpy  ���ڿ� ����
// strlen          ���ڿ� ���� ����
// strcat strncat  ���ڿ� ���̱�
// strcmp strncat  ���ڿ� ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *my_strcpy(char *pd, char *ps);
int my_strlen(char *ps);
char *my_strcat(char *pd, char *ps);
int my_strcmp(char *pa, char *pb);

int main(void)
{
	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple");                // ���ڿ� "apple" ����
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));  // ��ȯ������ ���

	return 0;
}

char *my_strcpy(char *pd, char *ps)         // ������� ��(pd)�� ������ ��(ps)�� ������
{
	char *po = pd;                          // pd���� ���߿� ��ȯ�ϱ� ���� ����

	while (*ps != '\0')                     // ps�� ����Ű�� ���ڰ� �ι��ڰ� �ƴ� ����
	{
		*pd = *ps;                          // ps�� ����Ű�� ���ڸ� pd�� ����Ű�� ��ġ�� ����
		pd++;                               // ������� ���� ��ġ�� ������ ����
		ps++;                               // ������ ���� ������ ��ġ�� ������ ����
	}
	*pd = '\0';                             // ���簡 ��� ���� �� ������� ���� �ι��ڷ� ������

	return po;                              // ���簡 ���� ���� ������ ���� �ּ� ��ȯ
}
int my_strlen(char *ps)
{
	int cnt = 0;

	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}
	return cnt;
}
char *my_strcat(char *pd, char *ps)
{
	char* po = pd;

	while (*pd != '\0')
	{
		pd++;
	}

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;
}
int my_strcmp(char *pa, char *pb)
{
	while ((*pa == *pb) && (*pa != '\0'))
	{
		pa++;
		pb++;
	}

	if (*pa > *pb)
	{
		return 1;
	}
	else if (*pa < *pb)
	{
		return -1;
	}
	else 
	{ 
		return 0; 
	}
}