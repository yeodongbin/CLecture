////구조체의 포인터 설정은 동일
////구조체 포인터를 활용하여 값을 가져오는 것은 ->
//
//#include <stdio.h>
//
//typedef struct
//{
//	int kor;
//	int eng;
//	int mat;
//} _score;
//
//void print_list(_score* list, int count);
//
//void main(void)
//{
//	//1구조체 포인터
//	_score dongbin = { 90,80,70 };
//	_score *pstu = &dongbin;
//	printf("kor : %d\n", (*pstu).kor); //dongbin.kor
//	printf("eng : %d\n", pstu->eng);
//	printf("mat : %d\n", pstu->mat);
//
//
//	//2 구조체 배열의 초기화 방법은 배열과 동일 
//	_score list[3] = {
//		{100,100,100},
//		{60,60,60},
//		{40,40,40}};
//	int i = 0;
//	int count = sizeof(list) / sizeof(_score); //sizeof(int)
//	for (i = 0; i < count; i++)
//	{
//		printf("국어: %3d, 영어: %3d, 수학: %3d\n",
//			list[i].kor, list[i].eng, list[i].mat);
//	}
//
//	//3 구조체 포인터 매개변수
//	print_list(list, count); //배열은 주소값
//
//	return;
//}
//
//void print_list(_score* list, int count)
//{
//	int i = 0;
//	
//	printf("%d\n", count);
//	for (i = 0; i < count; i++)
//	{
//		printf("국어: %3d, 영어: %3d, 수학: %3d\n",
//			list[i].kor, list[i].eng, list[i].mat);
//	}
//}