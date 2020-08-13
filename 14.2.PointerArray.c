#include <stdio.h>
//포인터 배열은 포인터 연산을 통해 2차원 배열처럼 쓸수 있다.
int main(void)
{
	////문자열과 주소
	//printf("주소값 : %p\n", "mango");               // 주소값 출력
	//printf("첫 번째 문자 : %c\n", *"mango");        // 간접참조 연산
	//printf("두 번째 문자 : %c\n", *("mango" + 1));  // 포인터 연산식
	//printf("세 번째 문자 : %c\n", "mango"[2]);      // 배열 표현식

	////문자열과 주소 2
	//char *dessert = "apple";                     // 포인터에 문자열 초기화
	//printf("오늘 후식은 %s입니다.\n", dessert);  // 문자열 출력
	//dessert = "banana";                          // 새로운 문자열 대입
	//printf("내일 후식은 %s입니다.\n", dessert);  // 바뀐 문자열 출력

	//시작
	char *pary[5];                // 포인터 배열 선언
	int i;                        // 반복 제어 변수

	pary[0] = "dog";              // 배열 요소에 문자열 대입
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	//2
	char ary[][15] = { "cat", "horse", "dog", "tiger", "elephant" };
	//ary[0] = "dog";   //배열은 주소값을 나타내는 불편의 상수, 불가
	ary[1][0] = 'a';
	ary[1][1] = 'n';
	ary[1][2] = 't';
	ary[1][3] = '\0';
	/*ary[1][4] = ' ';*/

	for (i = 0; i < 5; i++)       // i는 0부터 4까지 5번 반복
	{
		printf("%s\n", pary[i]);  // 배열 요소를 사용하여 모든 문자열 출력
	}

	//2
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", ary[i]);
	}

	//3
	// 자세히 그려가며 설명
	int ary1[4] = { 1, 2, 3, 4 };           // 1차원 배열의 선언과 초기화
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[4] = { 21, 22, 23, 24 };
	int *pary[3]; //= { ary1, ary2, ary3 };  // 포인터 배열에 각 배열명 초기화
	pary[0] = ary1;							 // 배열명은 상수주소
	pary[1] = ary2; 
	pary[2] = ary3; 

	int i, j;                             // 반복 제어 변수

	for (i = 0; i < 3; i++)               // 3행 반복
	{
		for (j = 0; j < 4; j++)           // 4열 반복
		{
			printf("%5d", pary[i][j]);    // 2차원 배열처럼 출력
		}
		printf("\n");                     // 한 행을 출력한 후에 줄 바꿈
	}

	return 0;
}

//문제 439 - 5