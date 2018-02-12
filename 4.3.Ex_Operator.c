#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	time *= 60;
	min = (int)time;
	time -= min;
	time *= 60;
	sec = (int)time;
	printf("%d %d %d", hour, min, sec ); 

	int w5000, w1000, w500, w100, w50, w10;
	int change = 6790;

	w5000 = change / 5000;
	change = change - (w5000 * 5000);
	w1000 = change / 1000;
	change = change - (w1000 * 1000);
	w500 = change / 500;
	change = change - (w500 * 500);
	w100 = change / 100;
	change = change - (w100 * 100);
	w50 = change / 50;
	change = change - (w50 * 50);
	w10 = change / 10;
	change = change - (w10 * 10);

	printf("%d %d %d %d %d %d", w5000, w1000, w500, w100, w50, w10);

	return 0;
}