#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Swap 2 variables without the temp variable
//
//void swap(int* a, int* b) {
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	swap(&a, &b);
//
//	printf("a is %d, b is %d", a, b);
//
//	return 0;
//}


// Get how many ones in the binary of a number
//
//int num_ones(int n) {
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1); 
//		count++;
//	}
//	
//	return count;
//}
//
//int main() {
//	int n;
//	printf("Please enter a number: ");
//	scanf("%d", &n);
//
//	printf("number of ones is: %d", num_ones(n));
//
//	return 0;
//}


// Get all the even and odd digits in an integer binary sequence 
// and print out the binary sequence respectively
//
void print_bit(int n) {
	printf("odd digits are: ");
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");

	printf("even digits are: ");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}

int main() {
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);

	print_bit(n);

	return 0;
}
