////��Ÿ ������
////����ȯ    (int)10.7 -> 10
////sizeof   sizeof(double) -> 8 byte
////���մ���   a += 10;->a = a + 10; + - * / %
////�޸�������  res = (a, b)->res = b;
////���ǿ�����(���׿�����) res = (a > b) ? a : b;
////��Ʈ������  & | ^ ~ >> <<
//
//#include <stdio.h>
//
//int main(void)
//{
//	//����ȯ
//	int a = 20;
//	int b = 3;
//	int c = 2;
//	int d = 1;
//	int res;
//	float fRes;
//
//	printf("%.2f, %.2f\n", ((float)a), ((float)b));
//	printf("%.2f\n", ((float)a) / ((float)b));//6.67
//	printf("%d\n", (int)(((float)a) / ((float)b)));//6.67
//
//	//sizeof
//	printf("int = %d byte\n", sizeof(int));
//	printf("double = %d byte\n", sizeof(double));
//	printf("float = %d byte\n", sizeof(float));
//	printf("char = %d byte\n", sizeof(char));
//	printf("int value = %d byte\n", sizeof(a));
//	printf("int value = %d byte\n", sizeof(10));
//
//	//���մ��� + - * / % ���갪�� �ǿ����ڿ� �ٽ� �����Ѵ�.
//	a += 10; //a = a +10; a =30
//	printf("%d\n", a);
//	b -= 1;  //b = b - 1; b =2
//	printf("%d\n", b);
//	c *= 2;  //c = c * 2; c =4
//	printf("%d\n", c);
//	c /= 2;  //c = 2
//	printf("%d\n", c);
//	c %= 2;  //c = 0;
//	printf("%d\n", c);
//
//	//�޸� ������
//	a = 10;
//	b = 20;
//
//	printf("%d\n", (a += 10, b *= 20)); // b
//
//	//���� ������ (���ǹ�)? �� : ����; //��ũ�� �ӵ� ����
//	a = 10;
//	b = 20;
//
//	res = (a < b) ? 1000 : 10; //10
//	printf("%d\n", res); // b
//
//	//��Ʈ ������, & | ^ ~ >> << ������������ ��밡�� -> ���մ��� ������ ��밡��
//	a = 1;  // 0001
//	b = 2;  // 0010
//
//	printf("%d\n", a&b); // b
//	printf("%d\n", a|b); // b
//	printf("%d\n", a^b); // b
//	printf("%d\n", ~a); // b
//	printf("%d\n", a>>1); // b
//	printf("%d\n", a<<1); // b
//
//	//���������( + - ) > ���迬���� ( &&, || ) > �� ������ (& | ^ )
//
//	return 0;
//}