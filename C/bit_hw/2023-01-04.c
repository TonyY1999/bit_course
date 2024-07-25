#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// There is a digital matrix. 
// Each row of the matrix increases from left to right and from top to bottom. 
// Please write a program to find whether a certain number exists in such a matrix.
//
//void find_k(int arr[3][3], int r, int c, int k) {
//	int x = 0;
//	int y = c - 1;
//
//	while (x <= r - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("Found it, x is %d, y is %d.", x, y);
//			return;
//		}
//	}
//
//	printf("Can't find this number.\n");
//}
//
//int main() {
//	int arr[3][3] = { {1,2,3}, {4,5,6},{7,8,9} };
//	int k = 7;
//	
//	find_k(arr, 3, 3, k);
//
//	return 0;
//}


// Implement a function that can rotate k characters in a string to the left.
// For example :
// Rotate ABCD to the left by one character to get BCDA
// Rotate ABCD to the left by two characters to get CDAB
//
//void move1(char* str, int k) {
//	int len = strlen(str);
//
//	// In case of k is more than len, like 8, it's the same as rotate 2
//	k %= len;
//
//	// Rotate k characters is rotate one character k times
//	for (int i = 0; i < k; i++)
//	{	
//		// Get the first character
//		char temp = str[0];
//
//		// Move the rest 
//		for (int j = 0; j < len - 1; j++)
//		{
//			str[j] = str[j + 1];
//		}
//
//		// Put str[0] to the end
//		str[len - 1] = temp;
//	}
//
//}
//
//void reverse(char* left, char* right) {
//	assert(left);
//	assert(right);
//	
//	while (right > left)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//void move2(char* str, int k) {
//	int len = strlen(str);
//	
//	k %= len;
//	
//	// reverse the left part
//	reverse(str, str + k - 1);
//
//	// reverse the right part
//	reverse(str + k, str + len - 1);
//
//	// reverse the whole string
//	reverse(str, str + len - 1);
//}
//
//int main() {
//	char str[] = "ABCDF";
//
//	int k = 0;
//
//	//move1(str, k);
//	
//	move2(str, k);
//
//	printf("%s", str);
//
//	return 0;
//}


// Write a function to determine whether a string is the rotation of another string.
// For example : given s1 = AABCD and s2 = BCDAA, return 1
// Given s1 = abcd and s2 = ACBD, return 0.
// Rotate AABCD left by one character to get ABCDA
// Rotate AABCD left by two characters to get BCDAA
// Rotate AABCD right by one character to get DAABC
//
//int check1(char* str1, char* str2) {
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//
//	for (int i = 0; i < len1; i++)
//	{
//		move2(str1, 1);
//
//		if (strcmp(str1, str2) == 0) {
//			return 1;
//		}
//	}
//
//	return 0;
//}
//
//int check2(char* str1, char* str2) {
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//
//	strncat(str1, str1, len1);
//
//	if (strstr(str1, str2) != NULL)
//	{
//		return 1;
//	}
//
//	return 0;
//}
//
//int main() {
//	char str1[20] = "AABCD";
//	char str2[] = "BCDAA";
//
//	//int res = check1(str1, str2);
//	int res = check2(str1, str2); 
//	
//	if (res == 1)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}