//1 1�� ������(��ȣ) () [] . ->
//2 ���� ������ - ++ -- ~ ! * & sizeof(type)
//3,4 ��������� * / % + -
//5 ��Ʈ�̵������� <<, >>
//6 ���迬���� > < >= <=
//7 ���� ������ == !=
//8,9,10 ��Ʈ �� ������ & ^ |
//11,12 ��������(��,����) && ||
//13 ���� ������(���׿�����) ? : 
//14 ���Կ����� = += -= *= /= %= &= ^= |= <<= >>=
//15 �޸������� , 
//
#include <stdio.h>

int main()
{
	int a, b;
	double da, db;
	int sum, sub, mul, inv, div, remainder;

	a = 30;
	b = 20;
	da = 2.0;
	db = 0.3;

	//���������
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;
	div = a / b;
	remainder = a % b;

	printf("%d\t", sum);
	printf("%d\t", sub);
	printf("%d\t", mul);
	printf("%d\t", inv);
	printf("%d\t", div);
	printf("%d\t", remainder);

	printf("\n%.2f\n", da / db);
	//printf("\n%.2f\t", da % db); �Ұ�

	//***********************************
	//���� ������ a++, a--
	int pre, post;

	a = 10;
	b = 10;

	pre = (++a) * 3; //������
	post = (b++) * 3; //������

	printf("pre  = %d, a = %d\n", pre, a);
	printf("posd = %d, b = %d\n", post, b);

	//***********************************
	//��Ʈ ������
  


	//***********************************
	//���� ������ > < >= <=  == != ture(1), falue(2)s
	a = 20;
	b = 10;

	printf("a> b => %d\n", a>b);
	printf("a>=b => %d\n", a>=b);
	printf("a< b => %d\n", a<b);
	printf("a<=b => %d\n", a<=b);
	printf("a==b => %d\n", a==b);
	printf("a!=b => %d\n", a!=b);

	//***********************************
	//�� ������ //&& || ! 3����
	int a = 30;

	printf("%d\n", (a > 0) && (a > 20));
	// 1 && 1
	printf("%d\n", (a < 0) && (a < 20));
	// 0 && 0

	printf("%d\n", (a > 0) || (a > 20));
	// 1 && 1
	printf("%d\n", (a > 0) || (a < 20));
	// 1 && 0

	printf("%d\n", !(a > 0));


	return 0;
}