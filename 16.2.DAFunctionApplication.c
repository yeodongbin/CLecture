#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//2
void print_str(char **ps);

int main(void)
{
	////1 �����Ҵ��� �ϸ� �ԷµǴ� ���ڿ��� ���̿� �°� �����Ҽ� �ִ�.
	char temp[80];     // �ӽ� char �迭
	char *str[3];      // ���� �Ҵ� ������ ������ ������ �迭
	int i;             // �ݺ� ���� ����

	for (i = 0; i < 3; i++)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);                                 // ���ڿ� �Է�
		str[i] = (char *)malloc(strlen(temp) + 1);  // ���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp); //�ּ� �Է� �����Ҵ翵���� ���ڿ� �Է�
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);                     // �Էµ� ���ڿ� ���
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);                               // ���� �Ҵ� ���� ��ȯ
	}

	////2 �����Ҵ� ���ڿ� �Լ� ó��
	char temp[80];                     // �ӽ� char �迭
	char *str[21] = { 0 };             // ���ڿ��� ������ ������ �迭, �������ͷ� �ʱ�ȭ
	int i = 0;                         // �ݺ� ���� ����

	while (i < 20)                     // �ִ� 20������ �Է�
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);                                 // ���ڿ� �Է�
		if (strcmp(temp, "end") == 0) break;        // end�� �ԷµǸ� �ݺ� ����
		str[i] = (char *)malloc(strlen(temp) + 1);  // ���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp);                       // ���� �Ҵ� ������ ���ڿ� ����
		i++;
	}
	print_str(str);                                 // �Է��� ���ڿ� ���

	for (i = 0; str[i] != NULL; i++)                // str�� ����� ���ڿ��� ���� ������
	{
		free(str[i]);                               // ���� �Ҵ� ���� ��ȯ
	}

	return 0;
}

void print_str(char **ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;//�����迭 ���
	}
}