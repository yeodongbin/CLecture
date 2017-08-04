#include <stdio.h>

int main()
{
	//int scanf(const char* format[,argument]...);
	//반환값 scanf(저장 값의 형식, 메모리 주소(가변 인자);

	int nInput = 0;

	scanf("%d", &nInput); // 값이  -----> Input
	printf("%d\n", nInput); // 값이  <----- 출력된다

	char szBuffer[128] = { 0 };

	printf("Input String : ");
	scanf("%s", szBuffer); //구분자가 스페이스바(빈칸)
	printf("%s\n", szBuffer); //배열의 이름은 주소값
	puts(szBuffer); //출력된다


	return 0;
}