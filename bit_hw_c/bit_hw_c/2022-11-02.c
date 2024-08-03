#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Recursive method to get nth Fibonacci number
// 
//int Fib(unsigned int n) {
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 2) + Fib(n - 1);
//	}
//}
//
//int main() {
//	int n;
//	printf("Please enter the which nth Fibonacci number u wanna get: ");
//	scanf("%d", &n);
//
//	printf("%dth Fibonacci number is: %d", n, Fib(n));
//
//	return 0;
//}


// Non-recursive method to get nth Fibonacci number
//int Fib(unsigned int n) {
//	if (n <= 2)
//	{
//		return 1;
//	}
//
//	int first = 0;
//	int second = 1;
//	int res;
//
//	for (int i = 3; i <= n; i++)
//	{
//		res = first + second;
//		first = second;
//		second = res;
//	}
//
//	return res;
//}
//
//int main() {
//	int n;
//	printf("Please enter the which nth Fibonacci number u wanna get: ");
//	scanf("%d", &n);
//
//
//	printf("%dth Fibonacci number is: %d", n, Fib(n));
//
//	return 0;
//}


// Write a function reverse_string(char * string) (recursive implementation)
// Implementation: Arrange the characters in the parameter string in reverse order 
// Not print them in reverse order.
//
// a     b      c      d     \0
// arr  arr+1  arr+2  arr+3  arr+4
//void reverse_string(char* arr) {
//	int len = strlen(arr);
//
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//}
//
//int main() {
//	char str[10];
//	printf("Please enter a string: ");
//	scanf("%s", str);
//
//	reverse_string(str);
//	printf("String now is: %s", str);
//
//	return 0;
//}


// Recursive method to find the factorial of n (without considering overflow issues)
//
//int Fac(int n) {
//	if (n <= 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//
//int main() {
//	int n;
//	printf("Please enter a number: ");
//	scanf("%d", &n);
//
//	printf("Factorial of %d is %d", n, Fac(n));
//	return 0;
//}


// Non-recursive method to find the factorial of n (without considering overflow issues)
//
//int Fac(int n) {
//	int res = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		res *= i;
//	}
//
//	return res;
//}
//
//int main() {
//	int n;
//	printf("Please enter a number: ");
//	scanf("%d", &n);
//
//	printf("Factorial of %d is %d", n, Fac(n));
//	return 0;
//}


