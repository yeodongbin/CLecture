////배열 과 포인터
//// 함수를 호출할 때는 배열명을 주고 ,함수의 매개변수로 포인터를 선언한다.
//// 그리고 함수 안에서 포인터를 배열명처럼 사용한다.
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
		printf("%d\t", pa[i]); //포인터를 마치 배열처럼 활용한다.
		printf("%d\n", *(pa+i)); //포인터를 마치 배열처럼 활용한다.
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
	printf("배열의 최대값 : %.1f\n", max);

	return 0;
}

void input_ary(double *pa, int size)
{
	int i;

	printf("%d개의 실수값 입력: ", size);
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