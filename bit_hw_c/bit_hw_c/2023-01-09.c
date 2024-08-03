// use Everything search newc++file.cpp
#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Simulate strlen
// 
//int my_strlen(const char* str) {
//	assert(str);
//
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//int main() {
//	char arr1[] = "abcdef";
//
//	int res = my_strlen(arr1);
//	printf("String len is: %d", res);
//
//	return 0;
//}


// Simulate strcpy
// 
//char* my_strcpy(char* dst, const char* src) {
//	assert(dst && src);
//
//	char* p = dst;
//
//	while (*p++ = *src++)
//	{
//		;
//	}
//
//	return dst;
//}
//
//int main() {
//	char arr1[] = "XXXXXXXX";
//	char arr2[] = "abcd";
//
//	char* res = my_strcpy(arr1, arr2);
//
//	printf("String after copy is: %s", res);
//
//	return 0;
//}


// Simulate strcmp
// 
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//
//		str1++;
//		str2++;
//	}
//
//	return *str1 - *str2;
//}
//
//int main() {
//	char arr1[] = "abct";
//	char arr2[] = "abcd";
//
//	int res = my_strcmp(arr1, arr2);
//
//	if (res > 0)
//	{
//		printf("The first character that does not match has a greater value in ptr1 than in ptr2");
//	}
//	else if (res == 0)
//	{
//		printf("The contents of both strings are equal");
//	}
//	else
//	{
//		printf("The first character that does not match has a lower value in ptr1 than in ptr2");
//	}
//
//	return 0;
//}


// Simulate strcat
// 
//char* my_strcat(char* dst, const char* src) {
//	assert(dst && src);
//
//	char* p = dst;
//
//	while (*p)
//	{
//		p++;
//	}
//
//	while (*p++ = *src++)
//	{
//		;
//	}
//
//	return dst;
//}
//
//int main() {
//	char arr1[20] = "abcd";
//	char arr2[] = "abcd";
//
//	char* res = my_strcat(arr1, arr2);
//
//	printf("String after cat is: %s", res);
//
//	return 0;
//}


// Simulate strstr
// 
//char* my_strstr(char* str1, const char* str2) {
//	assert(str1 && str2);
//
//	if (*str2 == 0)
//	{
//		return str1;
//	}
//
//	char* cp = str1;
//	char* s1 = str1;
//	char* s2 = str2;
//	
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//
//		while (*s1 != '\0' && *s2 != '\0' && * s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//
//		cp++;
//	}
//
//	return NULL;
//}
//
//
//int main() {
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	
//	char* res = my_strstr(arr1, arr2);
//	printf("arr1 after strstr is: %s", res);
//
//	return 0;
//}