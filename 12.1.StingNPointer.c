// ���ڿ� "yeodongbin" => ��� �ּ�
// char* pch = "yeodongbin" //pch�� ���ڿ� ��� �ּҰ� ����ȴ�.
// char str[80] = "yeodongbin"; //str�� �迭��, ���ڿ� ��� �ּҸ� �����ϰ� �ִ� ������
// p344
// ���ڿ� ����� �̻��ϰ� ����ȴ�. 'y'���� �ּҸ��� ������ ������ ���� -> pch[0] = 't'�Ұ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_gets(char *);

int main(void)
{
	printf("�ּҰ� : %p\n", "yeodongbin");           // �ּҰ� 
	printf("ù ��° ���� : %c\n", *"yeodongbin");     //�������� ���� //'y' �ּҰ��� ���´�.
	printf("�� ��° ���� : %c\n", *("yeodongbin"+1)); //������ ����� -> �ּҰ� �����
	printf("�� ��° ���� : %c\n", "yeodongbin"[2]);   //�ּҰ� 2��°�� ���� ���� �ִ�.(�б�����޸�) 
												    //'y'�ּҰ��� ����
	
	//���ڿ��� �ּ� -> char �����Ϳ� �����Ͽ� ���
	char* dessert = "strawberry"; //�ּ��Ҵ�

	printf("%s\n",dessert); //���ڿ� ���
	dessert = "water mellon";
	printf("%s\n\n", dessert); //���ڿ� ���

	//%s ����
	//while (*dessert != '\0')
	//{
	//	putchar(*dessert); //char ������ ���
	//	dessert++;
	//}

	//���� ���ڿ� ����� ���� �� ����ص� �ϳ��� ����ȴ�.
	//scanf %s

	char str[80];

	printf("\n���ڿ��� �Է� : ");
	scanf("%s", str); //���鹮��V, �ǹ���(\t), ���๮��(\n)���� ->�������� �Ұ�
	printf("ù��° �ܾ� : %s\n",str); // \0 �������� �ڵ� ����
	scanf("%s", str); //�ڵ����� ���Ϳ��� \n ����
	printf("�ι�° �ܾ� : %s\n", str);

	//scanf �Լ��� ���ڿ��� ������ �迭�� ũ�⸦ �� -> �����÷ο� ����
	// scanf_s ����

	//gets 
	printf("\n�������� ���ڿ��� �Է� : "); 
	gets(str); //�迭������ �ְ� �Լ� ȣ�� \n ���� ����->\0�����ؼ� ���ۻ���Ͽ� ����
	printf("%s\n", str); //get_s ����
	 
	//fgets ���
	printf("\n�������� ���ڿ��� �Է� : "); //
	fgets(str,sizeof(str),stdin); //���๮��(\n) ���� ���� + \0
	str[strlen(str) - 1] = '\0';//���๮��(\n) ���� ����
	printf("%s\n", str); 

	//���� stdin stdout
	int age;
	char name[20];
	printf("�����Է� : ");
	scanf("%d", &age); // \n ������ ������
	getchar(); //= scanf("%*c"); fgetc(stdin); fflush(stdin);//���� ���ۺ��
	printf("�̸��Է� : ");
	gets(name); // \n���� ���ۿ��� ������
	printf("���� : %d, �̸� : %s\n", age, name);

	char str[80] = "strawberry juice";
	char *pstr = "banana";
	puts(str); //����
	fputs(pstr, stdout); //���� ����
	puts("milk");

	return 0;
}

void my_gets(char *pstr)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		*pstr = ch;
		pstr++;
	}
	*pstr = '\0';
}