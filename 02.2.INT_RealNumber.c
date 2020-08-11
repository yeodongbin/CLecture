#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n",3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n",3.4);

	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	printf("%.1lf\n", 1.e6);
	printf("%.7lf\n", 3.14e-6);

	printf("%c\n",'A');
	printf("%s\n","abcdefg");
	printf("%c, %s\n",'1', "first");
	
	return 0;
}
// 2의보수 -> 간단하게 더하기 가능 : ex) 10 + -10 = 0
// double 1bit(부호) 11bit(지수) 52bit(소수)
