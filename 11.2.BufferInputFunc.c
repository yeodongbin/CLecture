//fgetc(stdin); ���鹮��, �ǹ���, ���๮�ڵ� �Է�
//fputc(ch, stdout); ���� ��� ���� �Լ�, ����� ���� ����
//fflush(stdin); �Է¹��� ����
//fflush(stdout); ��� ������ ���� ȭ�鿡 ���

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)  // �� �� �ݺ�
	{
		scanf("%c", &ch);    // ���� �Է�
		printf("%c", ch);    // �Էµ� ���� ���
	}


	int res;                     // scanf �Լ��� ��ȯ���� ������ ����
	char ch;                     // ���ڸ� �Է��� ����

	while (1)
	{
		res = scanf("%c", &ch);  // ���� �Է�, Ctrl+Z�� ������ -1 ��ȯ
		if (res == -1) break;    // ��ȯ���� -1�̸� �ݺ� ����
		printf("%d ", ch);       // �Էµ� ������ �ƽ�Ű �ڵ尪 ���
	}

}