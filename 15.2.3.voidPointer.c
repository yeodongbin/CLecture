////void �������� ���°� �־����� ����.
//
//#include <stdio.h>
//
//int main(void)
//{
//	int a = 10;                           // int�� ����
//	double b = 3.5;                       // double�� ����
//	void *vp;                             // void ������
//	int *pi;
//
//	/*vp = &a;                              
//	printf("a : %d\n", *vp);
//	vp = &b;                              
//	printf("b : %.1lf\n", *vp);*/
//
//	vp = &a;                              // int�� ������ �ּ� ����
//	printf("a : %d\n", *(int *)vp);       // (int *) ����ȯ
//	printf("a : %d\n", (int *)vp + 1);    // �ּҰ� �̵�
//	printf("a : %d\n", (*(int *)vp) + 1);    // �ּҰ� �̵�
//	pi = (int *)vp;
//	printf("a : %d\n", *pi);       // (int *) ����ȯ
//
//	vp = &b;                              // double�� ������ �ּ� ����
//	printf("b : %.1lf\n", *(double *)vp);
//
//	//(int *)vp = &a;  
//	//printf("a : %d\n", *vp);       // ��� �Ұ�
//
//	return 0;
//}