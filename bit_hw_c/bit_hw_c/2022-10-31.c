#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Recursion to realize n to the power of k
// 
//int Pow(int n, int k) {
//	if (k == 0)
//	{
//		return 1;
//	}
//
//	return n * Pow(n, k - 1);
//}
//
//int main() {
//	int n, k;
//	printf("Please enter n and k: ");
//	scanf("%d %d", &n, &k);
//
//	int res = Pow(n, k);
//
//	printf("%d to the power of %d is: %d", n, k, res);
//
//	return 0;
//}


// Write a recursive function DigitSum(n), input a non-negative integer, and return the sum of the digits that make it up
// For example, calling DigitSum(1729) should return 1 + 7 + 2 + 9, which sums to 19
// Input: 1729, Output : 19
//int DigitSum(int n) {
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main() {
//	int n;
//	printf("Please enter a number: ");
//	scanf("%d", &n);
//	
//	printf("res is %d:", DigitSum(n));
//
//	return 0;
//}


// Simulation of strlen (recursive implementation)
//
//int my_strlen(char* str) {
//	if (*str)
//	{
//		return 1 + my_strlen(str + 1);
//	}
//
//	return 0;
//}
//
//int main() {
//	char str[10];
//  printf("Please enter a string: ");
//	scanf("%s", str);
//	
//	printf("len is %d", my_strlen(str));
//
//	return 0;
//}


// Recursively print each digit of an integer
//
//void Print(unsigned int n) {
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//
//	printf("%d ", n % 10);
//}
//
//int main() {
//	int n;
//	printf("Please enter an integer: ");
//	scanf("%d", &n);
//	
//	Print(n);
//
//	return 0;
//}