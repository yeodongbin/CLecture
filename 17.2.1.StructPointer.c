////����ü�� ������ ������ ����
////����ü �����͸� Ȱ���Ͽ� ���� �������� ���� ->
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
//	//1����ü ������
//	_score dongbin = { 90,80,70 };
//	_score *pstu = &dongbin;
//	printf("kor : %d\n", (*pstu).kor); //dongbin.kor
//	printf("eng : %d\n", pstu->eng);
//	printf("mat : %d\n", pstu->mat);
//
//
//	//2 ����ü �迭�� �ʱ�ȭ ����� �迭�� ���� 
//	_score list[3] = {
//		{100,100,100},
//		{60,60,60},
//		{40,40,40}};
//	int i = 0;
//	int count = sizeof(list) / sizeof(_score); //sizeof(int)
//	for (i = 0; i < count; i++)
//	{
//		printf("����: %3d, ����: %3d, ����: %3d\n",
//			list[i].kor, list[i].eng, list[i].mat);
//	}
//
//	//3 ����ü ������ �Ű�����
//	print_list(list, count); //�迭�� �ּҰ�
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
//		printf("����: %3d, ����: %3d, ����: %3d\n",
//			list[i].kor, list[i].eng, list[i].mat);
//	}
//}