////이중포인터 배열로 처리
////이중포인터에 주소를 할당
////오석재씨  김민석
//
////함수에
////1.값을 넘겨준다.
////2.값을 반환한다.
////3.주소를 넘겨준다. 포인터변수를 이용해서
////4.주소를 반환받는다. 주소값을 넘겨줘서
//
//#include <stdio.h>
//
//void add_ten(int a);        // 함수 선언
//void add_ten2(int* p);       
//int* sum(int a, int b);
//
//int main(void)
//{
//	//1
//	int a = 10;
//	printf("Original a : %d\n", a);
//	add_ten(a);            //1.값을 넘겨준다.
//	printf("a : %d\n", a);
//	add_ten2(&a);
//	printf("&a : %d\n", a);
//
//	//2 
//	int *p;                             // 반환값을 저장할 포인터
//	p = sum(10, 20);                    // 반환된 주소는 p에 저장
//	printf("두 정수의 합 : %d\n", *p);   // p가 가리키는 변수값 출력
//
//	return 0;
//}
//
//void add_ten(int aa)      // a와 다른 독립적인 저장 공간 할당
//{
//	aa = aa + 10;          // 15행의 매개변수 a에 10을 더한다.
//}
//
//void add_ten2(int* pa)      
//{
//	*pa = *pa + 10;
//	//호출된 함수에서 호출한 함수에 있는 변수의 값을 바꿀 수 있다.
//}
//
//int* sum(int a, int b)                  
//{
//	//정적 변수, 전역 변수는 주소를 반환할 수 있다.
//	//사라지지 않기 때문에 (warning C4172 주의)
//	//call by value : 값의 이동 (주소, 변수값)??
//	//call by reference : 2개의 이름으로 쉽게 공유 
//	//call by address
//
//	static int res;                     // 정적 지역 변수
//	res = a + b;                       
//
//	return &res;                        // 정적 지역 변수의 주소 반환
//}
//
