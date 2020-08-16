//스택 헤쉬 등 메모리 구조 설명 static
//동적할당 malloc, 반환은 Free

#include <stdio.h>	
#include <stdlib.h>  //부록 참조

int main(void)
{
	//1
	int *pi;
	double *pd;

	//(void *)형을 반환하므로 형변화하여 사용한다.
	pi = (int *)malloc(sizeof(int));
	if (pi == NULL) //예외처리 (실패할 수 있다.)
	{
		printf("메모리가 부족합니다.");
		exit(1);
	}
	pd = (double *)malloc(sizeof(double));
	
	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %f\n", *pd);
	free(pi); //메모리 반환 꼭! memory leak
	free(pd);

	//2
	//많은 저장 공간을 한꺼번에 동적할당 ->배열사용
	int *pi, *pary;
	int i, sum = 0;
	int ary[5];
	pi = (int *)malloc(5 * sizeof(int));
	if(pi==NULL)
	{
		printf("메모리가 부족합니다.");
		exit(1);
	}

	pary = ary;//ary할당
	printf("다섯 명의 나이를 입력 :");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);//malloc 주소할당을 배열로
		//scanf("%d", pi+i);
		sum += pi[i];
	}
	printf("다섯 명의 평균 나이 : %.1f\n", (sum/5.0));
	free(pi);

	//3
	//calloc 0으로 초기화
	//realloc 재할당
	int *pi;               // 할당한 저장 공간을 연결할 포인터
	int size = 5;          // 한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
	int cnt = 0;           // 현재 입력된 양수 개수
	int num;               // 양수를 입력할 변수
	int i;                 // 반복 제어 변수

	pi = (int *)calloc(size, sizeof(int));  // 먼저 5개의 저장 공간 할당
	while (1)
	{
		printf("양수를 입력하세요 => ");
		scanf("%d", &num);                  // 데이터 입력
		if (num <= 0) break;                // 0또는 음수이면 종료
		if (cnt < size)                     // 저장 공간이 남아 있으면
		{
			pi[cnt++] = num;                // 입력한 값 저장
		}
		else                                // 저장 공간이 부족하면
		{
			size += 5;                      // 크기를 늘려서 재할당
			pi = (int *)realloc(pi, size * sizeof(int));
			pi[cnt++] = num;                // 재할당한 공간에 값 대입
		}
	}
	for (i = 0; i < cnt; i++)
	{
		printf("%5d", pi[i]);               // 입력한 데이터 출력
	}
	free(pi);                               // 동적 할당 저장 공간 반납

	return 0;
}

//496-3

//Stoage Class
//코드영역
//스택 -> 지역변수 영역
//데이터 영역 -> 전역변수, 정적변수영역
//힙  -> 동적할당