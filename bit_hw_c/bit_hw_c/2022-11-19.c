#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Print diamond
//
//int main() {
//	int line;
//	printf("Please enter height of the diamond: ");
//	scanf("%d", &line);
//
//	int half = line / 2 + 1;
//
//	// First half
//	for (int i = 0; i < half; i++)
//	{
//		// Print space
//		for (int j = 0; j < half - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		
//		// Print *
//		for (int j = 0; j  < 2 * i + 1; j ++)
//		{
//			printf("*");
//		}
//
//		// Change the line
//		printf("\n");
//	}
//
//	// Second half
//	for (int i = 0; i < half - 1; i++)
//	{
//		// Print space
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//
//		// Print *
//		for (int j = 0; j < 2 * half - 1 - (2 * i + 2); j++)
//		{
//			printf("*");
//		}
//
//		// Change the line
//		printf("\n");
//	}
//
//	return 0;
//}


// Print daffodil numbers between 0 to 100000
// A "daffodil number" refers to an n digit number 
// Sum of the nth powers of its digits is exactly equal to the number itself
// such as : 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3, then 153 is a "daffodil number".
// 
//int main() {
//	for (int i = 0; i < 100000; i++)
//	{
//		int temp = i;
//		int count = 0;
//		while (temp)
//		{
//			count++;
//			temp /= 10;
//		}
//		
//		temp = i;
//		int sum = 0;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


// Find the sum of the first n terms of Sn=a+aa+aaa+aaaa+aaaaa, where "a" is a number.
// Example : 2 + 22 + 222 + 2222 + 22222
// 
//int main() {
//	int a, n;
//	printf("Please enter number a and terms n: ");
//	scanf("%d %d", &a, &n);
//
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a;
//		a = a * 10 + 2;
//	}
//
//	printf("result is: %d", sum);
//
//	return 0;
//}

