////�迭 �� ������
//// �Լ��� ȣ���� ���� �迭���� �ְ� ,�Լ��� �Ű������� �����͸� �����Ѵ�.
//// �׸��� �Լ� �ȿ��� �����͸� �迭��ó�� ����Ѵ�.
//
#include <stdio.h>

void print_ary(int *pa);

int main(void)
{
	int ary[5] = { 10, 20,30 ,40 ,50 };

	print_ary(ary);
	return 0;
}

void print_ary(int *pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", pa[i]); //�����͸� ��ġ �迭ó�� Ȱ���Ѵ�.
		printf("%d\n", *(pa+i)); //�����͸� ��ġ �迭ó�� Ȱ���Ѵ�.
	}
}



#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("�迭�� �ִ밪 : %.1f\n", max);

	return 0;
}

void input_ary(double *pa, int size)
{
	int i;

	printf("%d���� �Ǽ��� �Է�: ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);

	}
}

double find_max(double *pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max)
		{
			max = pa[i];
		}
	}

	return max;
}