//
//#include <stdio.h>
//
////공용체, 자기참조 구조체 제외
////포인터 공부이후에 자기참조, 구조체 포인터 매개변수
//
////typedef, 구조체 배열
////typedef 변수를 재정의 해서 보기 편한 변수명으로 변경
////struct student
////{
////	int num;
////	double grade;
////};
////
////typedef struct student Student; //struct student => Student
////
//////2
////typedef struct
////{
////	int num;
////	double grade;
////} Student;
//
////3
//typedef struct student
//{
//	int num;
//	double grade;
//} Student;
//
//void print_data(Student ps);
//
//int main(void)
//{
//	Student s1 = { 315, 4.2 };
//	print_data(s1);
//
//	typedef int BYTE;
//
//	BYTE a;
//
//	a = 10;
//
//
//	return 0;
//}
//
//void print_data(Student ps)
//{
//	printf("학번 : %d\n", ps.num);
//	printf("학점 : %.2f\n", ps.grade);
//}

//563 - 5