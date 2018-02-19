//�迭���� �迭�� ù ��° �ּҸ� ��Ÿ����.
//int ary[3];
//ary == &ary[0]
//ary+1 == &ary[1]
//int* pa = ary;
//pa[0] == ary[0]
//pa[1] =  ary[1]

// �迭���� ��Ÿ���� �ּҰ��� �����
// ary++ (x)
// pa++ (0)
//
#include <stdio.h>

int main(void)
{
	int ary[5] = { 10,20,30,40,50 };

	// #s1
	printf("%d\n", ary);
	printf("%d\n", &ary[0]);
	printf("%d\n", *ary); //�迭���� �ּ� - ���� ���� *�ٿ��� ���� ǥ��
	printf("%d\n", ary[0]);

	// #2
	printf("%d\n", *(ary + 1)); //20, 4byte ����
	printf("%d\n", ary[1]);
	printf("%d\n", *(ary + 2)); //30
	printf("%d\n\n", ary[2]);

	// #3
	int* pary = ary;// �ּҰ��� ���� //pary = ary;

	printf("Address   %10u %10u %10u %10u %10u\n", pary, (pary + 1), (pary + 2), (pary + 3), (pary + 4));
	printf("Value     %10d %10d %10d %10d %10d\n", *pary, *(pary + 1), *(pary + 2), *(pary + 3), *(pary + 4));
	printf("ValuePAry %10d %10d %10d %10d %10d\n", pary[0], pary[1], pary[2], pary[3], pary[4]);
	printf("ValuesAry %10d %10d %10d %10d %10d\n\n", ary[0], ary[1], ary[2], ary[3], ary[4]);

	// #4 �迭�� �������� ����
	// sizeof
	// �����ʹ� ����, �迭�� ���
	// ����������, �������� ������ *(pary++)

	printf("sizeof Pointer : %d\n", sizeof(pary));
	printf("sizeof Array   : %d\n", sizeof(ary));


	return 0;
}

