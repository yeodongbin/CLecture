// 문제 p281.3
// void rotate(int *pa, int *pb, int *pc);
// 1:2:3 <-
// 2:3:1 <-
// 3:1:2 <-
// 1:2:3 <-
// 2:3:1x -> 반복종료

#include <stdio.h>
#include <conio.h>
#define ENTER 13

void rotate(int *pa, int *pb, int *pc);
void ppRotate(int **ppa, int **ppb, int **ppc);

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	int *pa, *pb, *pc;
	pa = &a;
	pb = &b;
	pc = &c;

	do 
	{
		rotate(&a, &b, &c);
		//ppRotate(&pa, &pb, &pc);
		printf("%d : %d : %d  <= Original\n", a, b, c);
	} while ((getch()) == ENTER);

	return 0;
}

void rotate(int *pa, int *pb, int *pc)
{
	int temp;
	printf("%d : %d : %d\n", *pa, *pb, *pc);
	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}

void ppRotate(int **ppa, int **ppb, int **ppc)
{
	int *temp;
	printf("%d : %d : %d\n", **ppa, **ppb, **ppc);

	temp = *ppa;
	*ppa = *ppb;
	*ppb = *ppc;
	*ppc = temp;
}
