// Use Everything search newc++file.cpp
#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// In an array, only two numbers appear once, and all other numbers appear twice.
// Write a function to find these two numbers that appear only once.
// For example
// The elements of the array are : 1, 2, 3, 4, 5, 1, 2, 3, 4, 6
// Only 5 and 6 appear once, and we need to find 5 and 6.
//
//void find_single_num(int* arr, int sz, int* single_nums) {
//	int res = 0;
//
//	for (int i = 0; i < sz; i++)
//	{
//		res ^= arr[i];
//	}
//
//	// Find the different bit of 2 single nums
//	int pos = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((res >> i) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	// Found this pos, use this bit as the mark to divide origin array to 2 arrays
//	for (int i = 0; i < sz; i++)
//	{
//		if ((arr[i] >> pos) & 1 == 1)
//		{
//			single_nums[0] ^= arr[i];
//		}
//		else
//		{
//			single_nums[1] ^= arr[i];
//		}
//	}
//}
//
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);   
//
//	// Use this array to hold 2 single numbers
//	int single_nums[2] = { 0 };
//
//	find_single_num(arr, sz, single_nums);
//
//	printf("%d %d\n", single_nums[0], single_nums[1]);
//
//	return 0;
//}


// Simulate strncpy
// 
//char* my_strncpy(char* destination, const char* source, size_t num) {
//	char* res = destination;
//
//	assert(destination && source);
//
//	while (num--)
//	{
//		if (*source != '\0')
//		{
//			*destination = *source;
//			source++;
//		}
//		else
//		{
//			*destination = '\0';
//		}
//
//		destination++;
//	}
//
//	return res;
//}
//
//int main()
//{
//	char str1[] = "To be or not to be";
//	char str2[40];
//	char str3[40];
//
//	/* copy to sized buffer (overflow safe): */
//	my_strncpy(str2, str1, sizeof(str2));
//
//	/* partial copy (only 5 chars): */
//	my_strncpy(str3, str2, 5);
//	str3[5] = '\0';   /* null character manually added */
//
//	puts(str1);
//	puts(str2);
//	puts(str3);
//
//	return 0;
//}


// Simulate strncat
//
//char* my_strncat(char* destination, const char* source, size_t num) {
//	char* res = destination;
//
//	assert(destination && source);
//
//	while (*destination != '\0')
//	{
//		destination++;
//	}
//
//	while (num-- && *source != '\0')
//	{
//		*destination = *source;
//		destination++;
//		source++;
//	}
//
//	*destination = '\0';
//
//	return res;
//}
//
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//
//	my_strncat(str1, str2, 6);
//
//	puts(str1);
//	return 0;
//}