//���� ���� ȣ��

// �Լ���, �Ű����� (argument), ��ȯ��(return)


#include <stdio.h>

int add(int x, int y);   // add �Լ� ����:�����Ϸ��� �ν�
int add_1(void);   // add �Լ� ����:�����Ϸ��� �ν�
void add_2(void);

int main(void)           // main �Լ� ����
{
	int a = 10, b = 20;
	int res;

	res = add_1();     // add �Լ� ȣ��
	printf("result : %d\n", res);
	add_2();

	return 0;
}                        // main �Լ��� ��

int add(int x, int y)    // add �Լ� ���� ����
{
	//�Լ� �ȿ� ���Ǵ� �������� �ٸ� �Լ��� ������� ���� �� �ִ�.
	int temp;            // �� ������ ���� ��� ������ ����

	temp = x + y;        // x�� y�� ���� temp�� ����

	return temp;         // temp�� ���� ��ȯ
}                        // add �Լ��� ��

// �Ű�����, ��ȯ�� ���� �͵� ����?
// �Ű����� void
// ��ȯ�� ����

int add_1(void)    // add �Լ� ���� ����
{
	//�Լ� �ȿ� ���Ǵ� �������� �ٸ� �Լ��� ������� ���� �� �ִ�.
	int temp;           
	temp = 10 + 100;        
	return temp;         
}

void add_2(void)    // add �Լ� ���� ����
{
	//�Լ� �ȿ� ���Ǵ� �������� �ٸ� �Լ��� ������� ���� �� �ִ�.
	int temp;
	temp = 10 + 100;
	printf("%d\n", temp);
	//return temp;
}


//���� ���� p222-3(mul ����)

//����Լ� - �Լ� �ȿ��� �ڽ��� ȣ���ϸ� ���ȣ��
#include <stdio.h>
void fruit(int);

int main(void)
{
	fruit(1);

	return 0;
}

void fruit(int n)
{
	int i = 0;
	printf("strawberry\n");

	if (n == 3)
	{
		return;
	}
	fruit(n+1);
	//�ݺ� ���Ű� �ʼ� 
}

//���� ���� n!
#include <stdio.h>
int fact(int n)
{
	if (n <= 0)
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	int n;
	n = 3;
	printf("%d! = %d\n", n, fact(n));
	return 0;
}

