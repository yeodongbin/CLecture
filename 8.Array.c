//배열 선언 int ary[5] 메모리 공간에 연속적으로 할당 (4byte * 5)
//요소사용  ary[0] = 10;
//초기화 int ary[5] = {1,2,3,4,5};
//
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5];                // int형 요소 5개의 배열 선언
//
//	ary[0] = 10;               // 첫 번째 배열 요소에 10 대입
//	ary[1] = 20;               // 두 번째 배열 요소에 20 대입
//	ary[2] = ary[0] + ary[1];  // 첫 번째와 두 번째 요소를 더해 세 번째 저장
//	scanf("%d", &ary[3]);      // 키보드로 네 번째 요소에 입력
//
//	printf("%d\n", ary[2]);    // 세 번째 배열 요소 출력
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);    // 마지막 배열 요소는 쓰레기값
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int ary1[5] = { 1, 2, 3, 4, 5 };               // int형 배열 초기화
//	int ary2[5] = { 1, 2, 3 };                     // 초깃값이 적은 경우 0 초기화
//	int ary3[] = { 1, 2, 3 };                      // 배열 요소 개수가 생략된 경우
//	double ary4[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 };  // double형 배열 초기화
//	char ary5[5] = { 'a', 'p', 'p', 'l', 'e' };    // char형 배열 초기화
//	int count;
//
//	ary1[0] = 10;
//	ary1[1] = 20;
//	ary1[2] = 30;
//	ary1[3] = 40;
//	ary1[4] = 50;
//
//	//ary1[5] = { 1, 2, 3, 4, 5 };  X
//	count = sizeof(ary1);
//	count = sizeof(ary1[0]);
//
//	return 0;
//}

//연습문제 p237-3 
//삽입 정렬
//#include <stdio.h>
//void insertionSort(int data[], int n);
//
//int main()
//{
//	int data[] = { 5, 3, 4, 2, 1 };
//	int i, j;
//	int n = sizeof(data) / sizeof(data[0]);
//	int tmp;
//
//	for (i = 1; i < n; i++)
//	{
//		tmp = data[i];
//		for (j = i - 1; (j >= 0 && tmp < data[j]); j--)
//		{
//			data[j + 1] = data[j];
//		}
//		data[j + 1] = tmp;
//	}
//
//	for (i = 0; i < 5; i++)
//		printf("%d  ", data[i]);
//
//	return 0;
//}
//
//#include <stdio.h>
////char형 배열은 문자열이다.
////문자열 대입 strcpy
////문자열 입출력 문자크기 +1 (널문자 /0)
//int main(void)
//{
//	char str[80] = "strawberryJam";
//
//	printf("문자열 : %s\n", str);
//	printf("문자열 : %c\n", str[0]);
//
//	//printf("문자열 입력 : ");
//	//scanf("%s", str); //배열은 주소를 나타낸다.
//	//printf("문자열 : %s\n", str);
//
//	char str2[80] = { 's','t','r','a','w','b','e','r','r','y'};//그냥 불가
//	printf("문자열 : %s\n", str2);
//
//	char str3[20];
//	str3[0] = 'J';
//	str3[1] = 'A';
//	str3[2] = 'M';
//	str3[3] = '\0';
//	printf("문자열 : %s\n", str3); // \0 NULL문자가 없다
//
//	//대입
//	strcpy(str3, "strawberry jam");
//	printf("문자열 : %s\n", str3); 
//	strcpy(str3, str2);
//	printf("문자열 : %s\n", str3);
//
//	return 0;
//}

//문자열 길이 구하기
//#include <stdio.h>
//int main()
//{
//	char cName[128];
//	int i, nCount = 0;
//	printf("문자열을 입력하세요: ");
//	/*	scanf("%s", cName); */ /* scanf("%s", &cName[0]); */
//	scanf_s("%s", cName, sizeof(cName));
//
//	for (i = 0; cName[i] != '\0'; i++)
//	{
//		nCount++;
//	}
//	printf("cName = %s\n", cName);
//	printf("nCount = %d\n", nCount);
//	return 0;
//}

//최대 최소
//#include <stdio.h>
//int main()
//{
//	int nScore[] = { 70, 100, 80, 60, 90 };
//	int i, min, max;
//
//	min = max = nScore[0];
//
//	/* for (i = 1; i < sizeof(nScore)/sizeof(int); i++) */
//	for (i = 1; i < 5; i++) {
//		if (min > nScore[i]){
//			min = nScore[i];}
//		if (max < nScore[i]){
//			max = nScore[i];}
//	}
//	printf("min = %d, max = %d\n", min, max);
//	return 0;
//}

//연습문제 p252 - 1,2,3 검색