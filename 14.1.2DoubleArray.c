////2차원 배열 = 행열
//a[i][j]
//*(a[i] + j)
//(*(a + i))[j]
//*((*(a + i)) + j)
//*(&a[0][0] + 5 * i + j)


#include <stdio.h>

int main(void)
{
	int i, j;
	int score[3][4];
	int tot;
	double avg;

	//배열 값 할당
	for (i = 0; i < 3; i++) //행
	{
		printf("네 과목의 점수 입력 : ");
		for (j = 0; j < 4; j++) //열
		{
			scanf("%d", &score[i][j]);
		}
	}

	//평균
	for (i = 0; i < 3; i++)
	{
		tot = 0;
		for (j = 0; j < 4; j++)
		{
			tot += score[i][j];
		}
		avg = tot / 4.0;
		printf("총점 : %d, 평균 : %.4f\n", tot, avg);
	}

	//주소확인
	printf("\n ** score 2배열 주소 확인 **\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%u ", &score[i][j]);
		}
		printf("\n");
	}


	// *2차원 배열은 1차원 배열과 같다

	//2 배열의 초기화 = 행렬
	int score1[3][4] = { {1,2,3,4}, {5,6,7,8},{9,10,11,12} };
	int score2[3][4] = { {1}, {5,6} , {9,10,11,12} };
	int score3[][4] = { {1},{2,3},{4,5,6} };
	int score4[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int score5[3][4] = { 1,2,3,4,5,6 };
	int score6[][4] = { 1,2,3,4,5,6 };

	//int score7[3][2] = { 1,2,3,4,5,6,7 };//Error발생
	//int score8[][] = { 1,2,3,4,5,6 };  //Error발생
	//int score9[3][4] = { {1,2,3,4,5},{6} };  //Error발생

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", score6[i][j]);
		}
		printf("\n");
	}

	//3 2차원 char배열은 여러개의 문자열 처리할 수 있다.
	char animal[5][20];                          // 2차원 char 배열 선언
	int i;                                       // 반복 제어 변수
	int count;                                   // 행의 수를 저장할 변수

	count = sizeof(animal) / sizeof(animal[0]);  // 행의 수 계산

	for (i = 0; i < count; i++)                  // 행의 수만큼 반복
	{
		scanf("%s", animal[i]);                  // 문자열 입력
	}

	for (i = 0; i < count; i++)
	{
		printf("%d열 문자열 = %s\n", i + 1, animal[i]);               // 입력된 문자열 출력
	}

	//4 char배열 초기화
	char animal1[5][10] = {               // 문자 상수로 하나씩 초기화
		{ 'c', 'a', 't', '\0' },
		{ 'h', 'o', 'r', 's', 'e', '\0' },
		{ 'd', 'o', 'g', '\0' },
		{ 't', 'i', 'g', 'e', 'r', '\0' },
		{ 'e', 'l', 'e', 'p', 'h', 'a', 'n', 't', '\0' }
	};
	// 문자열 상수로 한 행씩 초기화, 행의 수 생략 가능
	char animal2[][10] = { "cat", "horse", "dog", "tiger", "elephant" };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal1[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal2[i]);
	}
	printf("\n");


	//5 3차원 배열
	int s[2][3][4] = {                      // 두 개 반 세 명의 네 과목 점수 저장
		{ { 72, 80, 95, 60 },{ 68, 98, 83, 90 },{ 75, 72, 84, 90 } },
		{ { 66, 85, 90, 88 },{ 95, 92, 88, 95 },{ 43, 72, 56, 75 } }
	};

	int i, j, k;                            // 반복 제어 변수

	for (i = 0; i < 2; i++)                 // 반 수만큼 반복
	{
		printf("%d반 점수...\n", i + 1);    // 반이 바뀔 때마다 출력
		for (j = 0; j < 3; j++)             // 학생 수만큼 반복
		{
			for (k = 0; k < 4; k++)         // 과목 수만큼 반복
			{
				printf("%5d", s[i][j][k]);  // 점수 출력
			}
			printf("\n");                   // 한 학생의 점수를 출력하고 줄 바꿈
		}
		printf("\n");                       // 한 반의 점수를 출력하고 줄 바꿈
	}

	//주소확인
	printf("\n ** 3배열 주소 확인 **\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%u ", &s[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;


}
//행렬 더하기, 곱