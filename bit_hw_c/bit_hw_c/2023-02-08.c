// Use Everything search newc++file.cpp
#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Write a macro to calculate the offset of 
// a variable in a structure relative to the first address and give an explanation
//
//#define my_offsetof(type, member) ((size_t)&(((type*)0)->member)) 
//
//struct foo {
//	char a;
//	char b[10];
//	char c;
//};
//
//int main()
//{
//	printf("my_offsetof(struct foo,a) is %d\n", (int)offsetof(struct foo, a));
//	printf("my_offsetof(struct foo,b) is %d\n", (int)offsetof(struct foo, b));
//	printf("my_offsetof(struct foo,c) is %d\n", (int)offsetof(struct foo, c));
//
//	return 0;
//}


// Write a macro that swaps the odd and even bits of an integer
//
#define SwapIntBit(n) (((n) & 0x55555555) << 1 | ((n) & 0xaaaaaaaa) >> 1)

int main() {
	int a = 0b101010;

	int swapped = SwapIntBit(a);
	printf("%d", swapped);

	return 0;
}