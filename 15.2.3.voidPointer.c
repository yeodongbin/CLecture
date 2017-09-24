////void 포인터은 형태가 주어지지 않음.
//
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;                           // int형 변수
//	double b = 3.5;                       // double형 변수
//	void *vp;                             // void 포인터
//	int *pi;
//
//	/*vp = &a;                              
//	printf("a : %d\n", *vp);
//	vp = &b;                              
//	printf("b : %.1lf\n", *vp);*/
//
//	vp = &a;                              // int형 변수의 주소 저장
//	printf("a : %d\n", *(int *)vp);       // (int *) 형변환
//	printf("a : %d\n", (int *)vp + 1);    // 주소값 이동
//	printf("a : %d\n", (*(int *)vp) + 1);    // 주소값 이동
//	pi = (int *)vp;
//	printf("a : %d\n", *pi);       // (int *) 형변환
//
//	vp = &b;                              // double형 변수의 주소 저장
//	printf("b : %.1lf\n", *(double *)vp);
//
//	//(int *)vp = &a;  
//	//printf("a : %d\n", *vp);       // 사용 불가
//
//	return 0;
//}