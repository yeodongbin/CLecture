#include <stdio.h>

int main(void)
{
	FILE *fp;                                   // ���� ������
	int ch;										// �Է��� ���ڸ� ������ ����

	fp = fopen("a.txt", "r");                   // a.txt ������ �б� �������� ����
	if (fp == NULL)                             // fp�� �������͸� ���� ���� ����
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");		// �ȳ� �޽��� ���
		return 1;                               // ���α׷� ����
	}
	printf("������ ���Ƚ��ϴ�.\n");

	while (1)
	{
		ch = fgetc(fp);							// ������ ���Ͽ��� ���� �Է�
		if (ch == EOF)							// �Լ��� ��ȯ���� EOF�� �Է� ����
		{
			break;
		}
		putchar(ch);							// �Է��� ���ڸ� ȭ�鿡 ���
	}

	fclose(fp);                                 // ���� �ݱ�

	//���� ����

	char str[] = "banana";						// ����� ���ڿ�
	int i;										// �ݺ� ���� ����

	fp = fopen("b.txt", "w");					// ���� �������� ����
	if (fp == NULL)								// ���� ���� Ȯ��
	{
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	i = 0;										// ���� �迭�� ù ��° ���ں��� ���
	while (str[i] != '\0')						// �ι��ڰ� �ƴϸ�
	{
		fputc(str[i], fp);						// ���ڸ� ���Ͽ� ���
		i++;									// ���� ���ڷ� �̵�
	}
	fputc('\n', fp);

	fclose(fp);									// ���� ����


	return 0;
}