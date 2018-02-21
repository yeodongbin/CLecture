
#include <stdio.h>

void print_str(char **pps, int cnt);

int main(void)
{
	// ** 2�������ʹ� ������ �迭�� �Ű������� �޴� �Լ����� ��밡��
	char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // �ʱ�ȭ
	int count;                                     // �迭 ��� ���� ������ ����

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);  // �迭 ����� �� ���
	print_str(ptr_ary, count);                     // �����͹迭�� �ּҸ� �ѱ� **

	//������ �迭�� ��� (�ּ�)
	printf("%10s\t", ptr_ary[0]); //%s ������ ������ �ִ� �ּҿ� �ٰ����� ���� ǥ��
	printf("%10s\t", ptr_ary[1]);
	printf("%10s\t", ptr_ary[2]);
	printf("%10s\n", ptr_ary[3]);

	return 0;
}
void print_str(char **pps, int cnt)   // �Ű������� 2�� ������ ���
{
	int i;

	for (i = 0; i < cnt; i++)        // �迭 ��� ����ŭ �ݺ�
	{
		printf("%10s\t", pps[i]);    // �����͹迭�� ���� ǥ��
									 //%s�� ���ڿ��� ����Ѵ�. �̴� �迭�� ù��° �ּҸ� �޴´ٴ� ���� �ǹ�
	}
	printf("\n");
}