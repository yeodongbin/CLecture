////1
///*1  2  3  4  5
// 10  9  8  7  6
// 11 12 13 14 15
// 20 19 18 17 16
// 21 22 23 24 25
//*/
////2
///*1  2  3  4  5
//16 17 18 19 6
//15 24 25 20 7
//14 23 22 21 8
//13 12 11 10 9*/
//
// 
//#include <stdio.h>
//
//int main(void)
//{
//	int i, j, x, y;
//	int loop;
//	int value = 0;
//
//
//	/*int array[5][5] =
//	{ 1 , 2 , 3 , 4 , 5,
//	10 , 9 , 8 , 7 , 6,
//	11 ,12 ,13, 14 ,15 ,
//	20 ,19 ,18 ,17 ,16,
//	21 ,22 ,23 ,24, 25,
//	};*/
//
//	int array[5][5] = { 0 };
//
//	////1
//	//for (i = 0; i < 5; i++)
//	//{
//	//	if (i % 2 == 0) {
//	//		for (j = 0; j < 5; j++)
//	//		{
//	//			value++;
//	//			array[i][j] = value;
//	//		}
//	//	}
//	//	else
//	//	{
//	//		for (j = 4; j >= 0; j--)
//	//		{
//	//			value++;
//	//			array[i][j] = value;
//	//		}
//	//	}
//	//}
//
//	//2
//	x = 0;
//	y = -1;
//	j = 1;
//	value = 1;
//	loop = 5;
//
//	for (;loop > 0;)
//	{
//		for (i = 0; i < loop; i++)
//		{	
//			y += j;
//			array[x][y] = value;
//			value++;
//			printf("x: %5d, y: %5d, loop: %5d\n", x, y, loop);
//			
//		}
//		
//		loop--;
//
//		
//		for (i = 0; i < loop; i++)
//		{
//			x += j;
//			array[x][y] = value;
//			value++;
//			printf("x: %5d, y: %5d, loop: %5d\n", x, y, loop);
//			
//			/*x += j;
//			array[x][y] = value;
//			value++;*/
//		}
//	
//		j *= -1;
//	}
//
//
//	//Ãâ·Â
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%5d", array[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
