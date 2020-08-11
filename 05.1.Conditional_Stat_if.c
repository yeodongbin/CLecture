#include <stdio.h>

int main(void)
{
	int a = 20;
	int b = 10;

	if (a > 10) //두 문장 이상에서는 {}를 사용
	{
		b = a;
	}

	//if else
	if (a != 20)
	{ 
		a = 100;
	}
	else
	{ // a==20
		a = -1;
	}

	//if else if
	if (a != 20)
	{ 
		a = 100;
	}
	else if ( a == 20)
	{ // a==20
		a = -1;
	} 
	else
	{
		a = -2;
	}

	//중간에 넣어도 오케

	printf("a = %d, b = %d\n",a,b);

	return 0;

}

//값을 입력받은 두 변수의 비교
//0~100사이의 정수를 입력받아 학점 출력
//입력받은 정수의 홀수/짝수
//키보드 자판의 아스키 코드 확인 getch()
//두 변수의 최대 최소값
//윤년 판단하기 
//값 3개 받아서 최대 최소 합계 평균
