//���� �콬 �� �޸� ���� ���� static
//�����Ҵ� malloc, ��ȯ�� Free

#include <stdio.h>	
#include <stdlib.h>  //�η� ����

int main(void)
{
	//1
	int *pi;
	double *pd;

	//(void *)���� ��ȯ�ϹǷ� ����ȭ�Ͽ� ����Ѵ�.
	pi = (int *)malloc(sizeof(int));
	if (pi == NULL) //����ó�� (������ �� �ִ�.)
	{
		printf("�޸𸮰� �����մϴ�.");
		exit(1);
	}
	pd = (double *)malloc(sizeof(double));
	
	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %f\n", *pd);
	free(pi); //�޸� ��ȯ ��! memory leak
	free(pd);

	//2
	//���� ���� ������ �Ѳ����� �����Ҵ� ->�迭���
	int *pi, *pary;
	int i, sum = 0;
	int ary[5];
	pi = (int *)malloc(5 * sizeof(int));
	if(pi==NULL)
	{
		printf("�޸𸮰� �����մϴ�.");
		exit(1);
	}

	pary = ary;//ary�Ҵ�
	printf("�ټ� ���� ���̸� �Է� :");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);//malloc �ּ��Ҵ��� �迭��
		//scanf("%d", pi+i);
		sum += pi[i];
	}
	printf("�ټ� ���� ��� ���� : %.1f\n", (sum/5.0));
	free(pi);

	//3
	//calloc 0���� �ʱ�ȭ
	//realloc ���Ҵ�
	int *pi;               // �Ҵ��� ���� ������ ������ ������
	int size = 5;          // �� ���� �Ҵ��� ���� ������ ũ��, int�� ���� 5����
	int cnt = 0;           // ���� �Էµ� ��� ����
	int num;               // ����� �Է��� ����
	int i;                 // �ݺ� ���� ����

	pi = (int *)calloc(size, sizeof(int));  // ���� 5���� ���� ���� �Ҵ�
	while (1)
	{
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num);                  // ������ �Է�
		if (num <= 0) break;                // 0�Ǵ� �����̸� ����
		if (cnt < size)                     // ���� ������ ���� ������
		{
			pi[cnt++] = num;                // �Է��� �� ����
		}
		else                                // ���� ������ �����ϸ�
		{
			size += 5;                      // ũ�⸦ �÷��� ���Ҵ�
			pi = (int *)realloc(pi, size * sizeof(int));
			pi[cnt++] = num;                // ���Ҵ��� ������ �� ����
		}
	}
	for (i = 0; i < cnt; i++)
	{
		printf("%5d", pi[i]);               // �Է��� ������ ���
	}
	free(pi);                               // ���� �Ҵ� ���� ���� �ݳ�

	return 0;
}

//496-3

//Stoage Class
//�ڵ念��
//���� -> �������� ����
//������ ���� -> ��������, ������������
//��  -> �����Ҵ�