#include <stdio.h>	
void swap_ptr(char **ppa, char **ppb);
void print_str(char **pps, int cnt);

int main(void)
{
	//// ** �׸����� ����
	//int a = 10;
	//int *pi;
	//int **ppi;

	//pi = &a;
	//ppi = &pi;

	//printf("-------------------------------------------------\n");
	//printf("���� ������ &����(�ּ�) *����(������ �ּ�) **����\n");
	//printf("-------------------------------------------------\n");
	//printf("   a%12d%12u\n", a, &a);
	//printf("  pa%12d%12u%12u\n", pi, &pi, *pi);
	//printf(" ppa%12d%12u%12u%12u\n", ppi, &ppi, *ppi, **ppi);
	//printf("-------------------------------------------------\n");

	// ** 2�������ʹ� ������ ���� �ٲٴ� �Լ��� �Ű������� ����Ѵ�.
	//char *pa = "success";
	//char *pb = "failure";
	//printf("pa -> %s, pb -> %s\n", pa, pb);  // �ٲٱ� ���� ���ڿ� ���
	//swap_ptr(&pa, &pb);                      // �Լ� ȣ��
	//printf("pa -> %s, pb -> %s\n", pa, pb);  // �ٲ� �Ŀ� ���ڿ� ���


	//// ** 2�������ʹ� ������ �迭�� �Ű������� �޴� �Լ����� ��밡��
	//char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // �ʱ�ȭ
	//int count;                                     // �迭 ��� ���� ������ ����
	//count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);  // �迭 ����� �� ���
	//print_str(ptr_ary, count);                     // �����͹迭�� �ּҸ� �ѱ� **
	////������ �迭�� ��� (�ּ�)
	//printf("%10s\t", ptr_ary[0]); //%s ������ ������ �ִ� �ּҿ� �ٰ����� ���� ǥ��
	//printf("%10s\t", ptr_ary[1]); 
	//printf("%10s\t", ptr_ary[2]);
	//printf("%10s\n", ptr_ary[3]);

	// **�ּҰ��� ��� : �迭�� ��ü�� �ϳ��� ����(�Һ�)
	//int ary[5];
	//printf("ary�� ��       : %u\n", ary);      // �ּҷμ��� �迭���� ��
	//printf("&ary�� �ּ�    : %u\n", &ary);     // �迭�� �ּ�
	//printf("&(ary[0])      : %u\n", &(ary[0]));
	//printf("\n");
	//printf("ary + 1        : %u\n", ary + 1);
	//printf("&ary + 1 ((&ary) + 1) : %u\n", (&ary) + 1);
	//printf("&(ary[1])      : %u\n", &(ary[1]));
	//printf("\n");
	//printf("sizeof(ary)       : %d\n", sizeof(ary));
	//printf("sizeof(&ary)      : %d\n", sizeof(&ary));
	//printf("sizeof(&(ary[0])  : %d\n", sizeof(&(ary[0])));
	//printf("sizeof(ary + 1)   : %u\n", sizeof(ary + 1));
	//printf("sizeof(&ary + 1)  : %u\n", sizeof(&ary + 1));
	//printf("sizeof(&ary[1])   : %u\n", sizeof(&ary[1]));

	// ** 2���� �迭�� �̸��� 1���� �迭�� �ּ�, 
	int ary[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 } };
	int(*pa)[4];                // int�� ���� 4���� �迭�� ����Ű�� �迭 ������
	int i, j;

	pa = ary;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf(" %3d", pa[i][j]);  // pa�� 2���� �迭ó�� ���
			printf(" %3d", *(pa[i] + j)); //pa[i]������ ������ + �ּҴ��ϱ�
			printf(" %3d", (*pa[i]) + j); //pa[i]������ ������ + �ּҴ��ϱ�
			printf(" %3d", *(*(pa + i) + j));
			printf("\n");
		}
		printf("\n");
	}


	return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
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