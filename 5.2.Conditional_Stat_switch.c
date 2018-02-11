#include <stdio.h>

int main(void)
{
	/*
	switch (rank)
	{
	case 1:
	break;
	case 2:
	break;
	default:
	break;
	}
	*/
	int rank = 3, m = 0;

	switch (rank)
	{
	case 1:
		m = 100;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 300;
		break;//생략 가능
	default:
		m = -1;
		break;
	}

	printf("m = %d\n", m);

	return 0;

}