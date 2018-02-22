#include <stdio.h>
//포인터 배열은 포인터 연산을 통해 2차원 배열처럼 쓸수 있다.
int main(void)
{
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
	int *pary2[3]; //= { ary1, ary2, ary3 };  // 포인터 배열에 각 배열명 초기화
	pary2[0] = ary1; //배열명은 상수주소
	pary2[1] = ary2; //
	pary2[2] = ary3; //

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