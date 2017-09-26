//#include <stdio.h>
////구구단
//int main(void)
//{
//	return 0;
//}

//문자 변수 선언 및 출력 2_7
//#include <stdio.h>
//int main()
//{
//	char ch1 = 'A';
//	char ch2 = 0x41;
//	char ch3; /* 초기화 필요 */
//	printf("ch1 = %c, %d, %o, %x\n", ch1, ch1, ch1, ch1);
//	printf("ch2 = %c, %d, %o, %x\n", ch2, ch2, ch2, ch2);
//	printf("ch3 = %c, %d, %o, %x\n", ch3, ch3, ch3, ch3);
//	return 0;
//}

//printf함수 scanf 함수의 반환값 2_16
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


//printf() 함수에서 자리수 지정 출력 2_17
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


//연습문제 192- 3번, 4번, 196- 2번
//1. 홀수 짝수 구분하기 if
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

//2. 계산기 switch
//#include <stdio.h>
//int main()
//{
//	char op;
//	int operand1, operand2, result;
//
//	printf("정수 2개와 연산자(+, -, *, /, %%)를 입력하세요.\n");
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
//		printf("잘못된 연산자를 입력했습니다!!!\n");
//	}
//	if (op == '+' || op == '-' || op == '*'
//		|| op == '/' || op == '%')
//		printf("%d %c %d = %d\n", operand1, op, operand2, result);
//	return 0;
//}

//3. 1~n 정수 값을 구하시오 while
//#include <stdio.h>
//int main()
//{
//	int i = 1, sum = 0, n;
//	printf("양의 정수 n을 입력하세요: ");
//	/*	scanf("%d", &n); */
//	scanf_s("%d", &n);
//	while (i <= n) {
//		sum += i;
//		i++;
//	}
//	printf("1에서 %d까지 정수의 합은 %d\n", n, sum);
//	return 0;
//}
//
////4. 홀 수 짝수 합 for
//#include <stdio.h>
//int main()
//{
//	int i, n, oddSum = 0, evenSum = 0;
//	printf("양의 정수 n을 입력하세요: ");
//	/*	scanf("%d", &n);*/
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//			evenSum += i;
//		else
//			oddSum += i;
//	}
//	printf("\n1에서 %d까지 짝수의 합은 %d", n, evenSum);
//	printf("\n1에서 %d까지 홀수의 합은 %d", n, oddSum);
//	return 0;
//}
//
// 
////5. 팩토리얼 for
//#include <stdio.h>
//int main()
//{
//	int i, n, fact = 1;
//	printf("양의 정수 n을 입력하세요: ");
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
////6. 소수 판단 for
//#include <stdio.h>
//int main()
//{
//	int i, n, sum = 0;
//	printf("양의 정수 n을 입력하세요: ");
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
