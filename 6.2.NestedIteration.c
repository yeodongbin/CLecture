//#include <stdio.h>
////������
//int main(void)
//{
//	return 0;
//}

//���� ���� ���� �� ��� 2_7
//#include <stdio.h>
//int main()
//{
//	char ch1 = 'A';
//	char ch2 = 0x41;
//	char ch3; /* �ʱ�ȭ �ʿ� */
//	printf("ch1 = %c, %d, %o, %x\n", ch1, ch1, ch1, ch1);
//	printf("ch2 = %c, %d, %o, %x\n", ch2, ch2, ch2, ch2);
//	printf("ch3 = %c, %d, %o, %x\n", ch3, ch3, ch3, ch3);
//	return 0;
//}

//printf�Լ� scanf �Լ��� ��ȯ�� 2_16
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//
//	/*	c = scanf("%d %d", &a, &b); */
//	c = scanf_s("%d %d", &a, &b);
//
//	d = printf("a = %2d, b = %2d, c = %d\n", a, b, c);
//	printf("d = %d\n", d);
//	return 0;
//}


//printf() �Լ����� �ڸ��� ���� ��� 2_17
//#include <stdio.h>
//int main()
//{
//	int ch = 'A';
//	float pi2 = 6.283184;
//	printf("%c%c\n", ch, ch);
//	printf("%4c%4c\n", ch, ch);
//	printf("%-4c%-4c\n", ch, ch);
//	printf("%d%d\n", ch, ch);
//	printf("%4d%4d\n", ch, ch);
//	printf("%1d%1d\n", ch, ch);
//	printf("pi2 = %f%f\n", pi2, pi2);
//	printf("pi2 = %4.3f\n", pi2);
//	printf("pi2 = %10.3f\n", pi2);
//	printf("pi2 = %10.1f\n", pi2);
//	return 0;
//}


//�������� 192- 3��, 4��, 196- 2��
//1. Ȧ�� ¦�� �����ϱ� if
//#include <stdio.h>
//int main()
//{
//	int n;
//	/*	scanf("%d", &n); */
//	scanf_s("%d", &n);
//	if (n % 2)
//		printf("%d is an odd number.\n", n);
//	else
//		printf("%d is an even number.\n", n);
//	return 0;
//}

//2. ���� switch
//#include <stdio.h>
//int main()
//{
//	char op;
//	int operand1, operand2, result;
//
//	printf("���� 2���� ������(+, -, *, /, %%)�� �Է��ϼ���.\n");
//	printf("operand1 operator operand2: ");
//	/*	scanf("%d %c %d", &operand1, &op, &operand2); */
//	scanf_s("%d %c %d", &operand1, &op, 1, &operand2);
//
//	switch (op)
//	{
//	case '+':
//		result = operand1 + operand2;
//		break;
//	case '-':
//		result = operand1 - operand2;
//		break;
//	case '*':
//		result = operand1 * operand2;
//		break;
//	case '/':
//		result = operand1 / operand2;
//		break;
//	case '%':
//		result = operand1 % operand2;
//		break;
//	default:
//		printf("�߸��� �����ڸ� �Է��߽��ϴ�!!!\n");
//	}
//	if (op == '+' || op == '-' || op == '*'
//		|| op == '/' || op == '%')
//		printf("%d %c %d = %d\n", operand1, op, operand2, result);
//	return 0;
//}

//3. 1~n ���� ���� ���Ͻÿ� while
//#include <stdio.h>
//int main()
//{
//	int i = 1, sum = 0, n;
//	printf("���� ���� n�� �Է��ϼ���: ");
//	/*	scanf("%d", &n); */
//	scanf_s("%d", &n);
//	while (i <= n) {
//		sum += i;
//		i++;
//	}
//	printf("1���� %d���� ������ ���� %d\n", n, sum);
//	return 0;
//}
//
////4. Ȧ �� ¦�� �� for
//#include <stdio.h>
//int main()
//{
//	int i, n, oddSum = 0, evenSum = 0;
//	printf("���� ���� n�� �Է��ϼ���: ");
//	/*	scanf("%d", &n);*/
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//			evenSum += i;
//		else
//			oddSum += i;
//	}
//	printf("\n1���� %d���� ¦���� ���� %d", n, evenSum);
//	printf("\n1���� %d���� Ȧ���� ���� %d", n, oddSum);
//	return 0;
//}
//
// 
////5. ���丮�� for
//#include <stdio.h>
//int main()
//{
//	int i, n, fact = 1;
//	printf("���� ���� n�� �Է��ϼ���: ");
//	/*	scanf("%d", &n); */
//	scanf_s("%d", &n);
//	for (i = n; i >= 1; i--)
//	{
//		fact *= i;
//	}
//	printf("%d! = %d\n", n, fact);
//	return 0;
//}
//
//
////6. �Ҽ� �Ǵ� for
//#include <stdio.h>
//int main()
//{
//	int i, n, sum = 0;
//	printf("���� ���� n�� �Է��ϼ���: ");
//	/*	scanf("%d", &n);*/
//	scanf("%d", &n);
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i == n)
//		printf("n = %d is a prime number.\n", n);
//	else
//		printf("n = %d is not a prime number.\n", n);
//	return 0;
//}
//
