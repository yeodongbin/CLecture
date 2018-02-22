////���������� �迭�� ó��
////���������Ϳ� �ּҸ� �Ҵ�
//
////�Լ���
////1.���� �Ѱ��ش�.
////2.���� ��ȯ�Ѵ�.
////3.�ּҸ� �Ѱ��ش�. �����ͺ����� �̿��ؼ�
////4.�ּҸ� ��ȯ�޴´�. �ּҰ��� �� ���༭

#include <stdio.h>

void add_ten(int a);        // �Լ� ����
void add_ten2(int* p);       
int* sum(int a, int b);

int main(void)
{
	//1
	int a = 10;
	printf("Original a : %d\n", a);
	add_ten(a);            //1.���� �Ѱ��ش�.
	printf("a : %d\n", a);
	add_ten2(&a);
	printf("&a : %d\n", a);

	//2 
	int *p;                             // ��ȯ���� ������ ������
	p = sum(10, 20);                    // ��ȯ�� �ּҴ� p�� ����
	printf("�� ������ �� : %d\n", *p);   // p�� ����Ű�� ������ ���

	return 0;
}

void add_ten(int aa)      // a�� �ٸ� �������� ���� ���� �Ҵ�
{
	aa = aa + 10;          // 15���� �Ű����� a�� 10�� ���Ѵ�.
}

void add_ten2(int* pa)      
{
	*pa = *pa + 10;
	//ȣ��� �Լ����� ȣ���� �Լ��� �ִ� ������ ���� �ٲ� �� �ִ�.
}

int* sum(int a, int b)                  
{
	//���� ����, ���� ������ �ּҸ� ��ȯ�� �� �ִ�.
	//������� �ʱ� ������ (warning C4172 ����)
	//call by value : ���� �̵� (�ּ�, ������)??
	//call by reference : 2���� �̸����� ���� ���� 
	//call by address

	static int res;                     // ���� ���� ����
	res = a + b;                       

	return &res;                        // ���� ���� ������ �ּ� ��ȯ
}
