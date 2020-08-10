#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	float x, y;//for input
	float counted_num;
	scanf("%f", &x);
	scanf("%f", &y);
	if (x < y)
	{
		float average;
		int i, z = 0;
		for (i = x; i <= y; i++)
		{
			z = z + i;
			printf("%d ", i);
		}
		counted_num = i - x;
		average = z / counted_num;
		printf("\nAverage = %.1f", average);

		//Loop for SD value
		float i_2;
		float pow1;
		float pow2 = 0;
		for (i_2 = x; i_2 <= y; i_2++)
		{
			pow1 = pow(i_2 - average, 2);
			pow2 = pow2 + pow1;
		}
		float after_pow_1, after_pow_2;
		after_pow_1 = pow2 / (counted_num - 1);
		after_pow_2 = sqrt(after_pow_1);
		printf("\nSD = %.2f", after_pow_2);
	}
	if (x > y)
	{

		float average;
		int i, z = 0;
		//Loop for show number 
		for (i = x; i >= y; i--)
		{
			printf("%d ", i);
		}
		for (i = y; i <= x; i++)
		{
			z = z + i;
		}
		counted_num = i - y;
		average = z / counted_num;
		printf("\nAverage = %.1f", average);

		//Loop for SD
		float i_2;
		float pow1;
		float pow2 = 0;
		for (i_2 = y; i_2 <= x; i_2++)
		{
			pow1 = pow(i_2 - average, 2);
			pow2 = pow2 + pow1;
		}
		float after_pow_1, after_pow_2;
		after_pow_1 = pow2 / (counted_num - 1);
		after_pow_2 = sqrt(after_pow_1);
		printf("\nSD = %.2f", after_pow_2);
	}
	//In case of X==y
	if (x == y)
	{
		printf("%.0f %.0f", x, y);
		printf("\nAverage = %.0f", (x + y) / 2);
		printf("\nSD = 0");
	}
	return 0;


}