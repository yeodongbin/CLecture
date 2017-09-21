//구조체 : 다양한 변수들의 조합 변수
//배열, 포인터, 구조체 멤버로 가질수 있다.
// .  구조체 변수 멤버접근 연산자 
// 예약어 구조체 이름 구조체 멤버
// 형 선언 struct student {int num; double grade;}
// 변수 선언 struct student s1;
// 멤버접근  s1.num = 315;
// 나머지는 변수와 동일 (매개변수, 반환형)

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////형선언
//struct student
//{
//	int num;
//	double grade;
//};
////2
//struct profile
//{
//	char name[20]; //배열
//	int age;
//	double height;
//	char *intro;  // 포인터
//	struct student stu; //구조체
//};
//
//int main(void)
//{
//	/*1
//	struct student s1;
//
//	s1.num = 2;
//	s1.grade = 3.55;
//	printf("학번 : %d\n", s1.num);
//	printf("학점 : %.2f\n", s1.grade);*/
//	//패딩바이트, 바이트 얼라인먼트
//	//#pragma pack(1);
//
//	//배열 포인터 다른 구조체 사용가능
//	//2
//	struct profile dongbin;
//
//	strcpy(dongbin.name, "yeodongbin");
//	dongbin.age = 17;
//	dongbin.height = 184.5;
//
//	dongbin.intro = (char *)malloc(80);
//	printf("자기소개 : ");
//	gets(dongbin.intro);
//
//	//3
//	dongbin.stu.grade = 4.5;
//	dongbin.stu.num = 2;
//
//	printf("이름 : %s\n", dongbin.name);
//	printf("나이 : %d\n", dongbin.age);
//	printf("키 : %.1f\n", dongbin.height);
//	printf("자기소개 : %s\n", dongbin.intro);
//
//	//3
//	printf("학번 : %d\n", dongbin.stu.num);
//	printf("학점 : %.2f\n", dongbin.stu.grade);
//	//구조체 멤버로 구조체, 포인터도 사용가능
//	free(dongbin.intro);
//
//	return 0;
//}


//당연히 구조체 변수도 초기화 하는 방법이 있다.
////struct student
////{
////	int id;
////	char name[20];
////	double grade;
////};
//
////3
////struct student
////{
////	int id;
////	char name[20];
////	double grade;
////} s7 = { 106, "messi", 3.0 };
//
//int main(void)
//{
////	struct student s1 = { 100, "yeodongbin", 4.0 };
////	struct student s2 = { 101, "mike", 3.0 };
////	struct student s3 = { 102, "david", 3.0 };
////
////	struct student s4 = { 103, "ronaldo", 4.0 }
////					, s5 = { 104, "mike", 3.0 }
////					, s6 = { 105, "david", 3.0 };
////
////	struct student max;
////	max = s6;
////
////	//2
////	max.id = s1.id;
////	strcpy(max.name,s1.name);//문자
////	max.grade = s1.grade;
//
//	printf("학번 : %d\n", s7.id);
//	printf("이름 : %s\n", s7.name);
//	printf("학점 : %.2f\n", s7.grade);
//
//	return 0;
//}

//
////구조체를 매개변수로 사용
//struct vision
//{
//	double left;
//	double right;
//}; //구조체 선언
//
//struct vision exchange(struct vision); //함수선언
//
//int main(void)
//{
//	struct vision dongbin;
//
//	scanf("%lf%lf", &(dongbin.left), &(dongbin.right));
//	dongbin = exchange(dongbin);//같은 dongbin 아니다
//	printf("LEFT = %.1f, RIGHT = %.1f\n", dongbin.left, dongbin.right);
//
//	return 0;
//}
//
////함수
//struct vision exchange(struct vision dongbin)
//{
//	double temp;
//
//	temp = dongbin.left;
//	dongbin.left = dongbin.right;
//	dongbin.right = temp;
//
//	return dongbin;
//}

//비트 필드 구조체 제외
//p537 2, 5