//����ü : �پ��� �������� ���� ����
//�迭, ������, ����ü ����� ������ �ִ�.
// .  ����ü ���� ������� ������ 
// ����� ����ü �̸� ����ü ���
// �� ���� struct student {int num; double grade;}
// ���� ���� struct student s1;
// �������  s1.num = 315;
// �������� ������ ���� (�Ű�����, ��ȯ��)

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////������
//struct student
//{
//	int num;
//	double grade;
//};
////2
//struct profile
//{
//	char name[20]; //�迭
//	int age;
//	double height;
//	char *intro;  // ������
//	struct student stu; //����ü
//};
//
//int main(void)
//{
//	/*1
//	struct student s1;
//
//	s1.num = 2;
//	s1.grade = 3.55;
//	printf("�й� : %d\n", s1.num);
//	printf("���� : %.2f\n", s1.grade);*/
//	//�е�����Ʈ, ����Ʈ ����θ�Ʈ
//	//#pragma pack(1);
//
//	//�迭 ������ �ٸ� ����ü ��밡��
//	//2
//	struct profile dongbin;
//
//	strcpy(dongbin.name, "yeodongbin");
//	dongbin.age = 17;
//	dongbin.height = 184.5;
//
//	dongbin.intro = (char *)malloc(80);
//	printf("�ڱ�Ұ� : ");
//	gets(dongbin.intro);
//
//	//3
//	dongbin.stu.grade = 4.5;
//	dongbin.stu.num = 2;
//
//	printf("�̸� : %s\n", dongbin.name);
//	printf("���� : %d\n", dongbin.age);
//	printf("Ű : %.1f\n", dongbin.height);
//	printf("�ڱ�Ұ� : %s\n", dongbin.intro);
//
//	//3
//	printf("�й� : %d\n", dongbin.stu.num);
//	printf("���� : %.2f\n", dongbin.stu.grade);
//	//����ü ����� ����ü, �����͵� ��밡��
//	free(dongbin.intro);
//
//	return 0;
//}


//�翬�� ����ü ������ �ʱ�ȭ �ϴ� ����� �ִ�.
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
////	strcpy(max.name,s1.name);//����
////	max.grade = s1.grade;
//
//	printf("�й� : %d\n", s7.id);
//	printf("�̸� : %s\n", s7.name);
//	printf("���� : %.2f\n", s7.grade);
//
//	return 0;
//}

//
////����ü�� �Ű������� ���
//struct vision
//{
//	double left;
//	double right;
//}; //����ü ����
//
//struct vision exchange(struct vision); //�Լ�����
//
//int main(void)
//{
//	struct vision dongbin;
//
//	scanf("%lf%lf", &(dongbin.left), &(dongbin.right));
//	dongbin = exchange(dongbin);//���� dongbin �ƴϴ�
//	printf("LEFT = %.1f, RIGHT = %.1f\n", dongbin.left, dongbin.right);
//
//	return 0;
//}
//
////�Լ�
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

//��Ʈ �ʵ� ����ü ����
//p537 2, 5