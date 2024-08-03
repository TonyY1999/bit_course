#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// 5 athletes participated in a 10-meter platform diving competition. 
// Someone asked them to predict the results of the competition:
// Athlete A said : B is second, I am third;
// Athlete B said : I am second, E is fourth;
// Athlete C said : I am first, D is second;
// Athlete D said : C is last, I am third;
// Athlete E said : I am fourth, A is first;
// After the competition, each athlete was half right.
// Please program to determine the ranking of the competition
//
//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1)
//						{
//							if (a*b*c*d*e == 120)
//							{
//								printf("a, b, c, d, e's rank are: %d %d %d %d %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}


// A murder case happened in Japan. The police determined that the murderer must be one of the four suspects
// The following are the confessions of the four suspects
// A said : It's not me.
// B said : It's C.
// C said : It's D.
// D said : C is talking nonsense
// It is known that 3 people told the truth and 1 person told a lie.
// Now please write a program based on this information to determine who is the murderer.
//
//int main() {
//	char killer = 0;
//
//	for (char killer = 'a'; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer is %c ", killer);
//		}
//	}
//
//
//	return 0;
//}


// Print Pascal's triangle on the screen.
// 1
// 1 1
// 1 2 1
// 1 3 3 1
//
//int main() {
//	int arr[10][10];
//
//	for (int i = 0; i < 10; i++)
//	{	 
//		for (int j = 0; j <= i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else if (j > 0 && j < i)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//
//			printf("%d ", arr[i][j]);
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}

