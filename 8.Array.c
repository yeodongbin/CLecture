//�迭 ���� int ary[5] �޸� ������ ���������� �Ҵ� (4byte * 5)
//��һ��  ary[0] = 10;
//�ʱ�ȭ int ary[5] = {1,2,3,4,5};
//
//#include <stdio.h>
//
//int main(void)
//{
//	int ary[5];                // int�� ��� 5���� �迭 ����
//
//	ary[0] = 10;               // ù ��° �迭 ��ҿ� 10 ����
//	ary[1] = 20;               // �� ��° �迭 ��ҿ� 20 ����
//	ary[2] = ary[0] + ary[1];  // ù ��°�� �� ��° ��Ҹ� ���� �� ��° ����
//	scanf("%d", &ary[3]);      // Ű����� �� ��° ��ҿ� �Է�
//
//	printf("%d\n", ary[2]);    // �� ��° �迭 ��� ���
//	printf("%d\n", ary[3]);
//	printf("%d\n", ary[4]);    // ������ �迭 ��Ҵ� �����Ⱚ
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main(void)
//{
//	int ary1[5] = { 1, 2, 3, 4, 5 };               // int�� �迭 �ʱ�ȭ
//	int ary2[5] = { 1, 2, 3 };                     // �ʱ갪�� ���� ��� 0 �ʱ�ȭ
//	int ary3[] = { 1, 2, 3 };                      // �迭 ��� ������ ������ ���
//	double ary4[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 };  // double�� �迭 �ʱ�ȭ
//	char ary5[5] = { 'a', 'p', 'p', 'l', 'e' };    // char�� �迭 �ʱ�ȭ
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

//�������� p237-3 
//���� ����
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
////char�� �迭�� ���ڿ��̴�.
////���ڿ� ���� strcpy
////���ڿ� ����� ����ũ�� +1 (�ι��� /0)
//int main(void)
//{
//	char str[80] = "strawberryJam";
//
//	printf("���ڿ� : %s\n", str);
//	printf("���ڿ� : %c\n", str[0]);
//
//	//printf("���ڿ� �Է� : ");
//	//scanf("%s", str); //�迭�� �ּҸ� ��Ÿ����.
//	//printf("���ڿ� : %s\n", str);
//
//	char str2[80] = { 's','t','r','a','w','b','e','r','r','y'};//�׳� �Ұ�
//	printf("���ڿ� : %s\n", str2);
//
//	char str3[20];
//	str3[0] = 'J';
//	str3[1] = 'A';
//	str3[2] = 'M';
//	str3[3] = '\0';
//	printf("���ڿ� : %s\n", str3); // \0 NULL���ڰ� ����
//
//	//����
//	strcpy(str3, "strawberry jam");
//	printf("���ڿ� : %s\n", str3); 
//	strcpy(str3, str2);
//	printf("���ڿ� : %s\n", str3);
//
//	return 0;
//}

//���ڿ� ���� ���ϱ�
//#include <stdio.h>
//int main()
//{
//	char cName[128];
//	int i, nCount = 0;
//	printf("���ڿ��� �Է��ϼ���: ");
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

//�ִ� �ּ�
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

//�������� p252 - 1,2,3 �˻�