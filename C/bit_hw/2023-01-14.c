// Use Everything search newc++file.cpp
#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Simulate atoi
///
//int my_atoi(const char* str) {
//	assert(str);
//
//	int res = 0;
//	int sign = 1;
//
//	while (*str == ' ')
//	{
//		str++;
//	}
//
//	if (*str == '-')
//	{
//		sign = -1;
//		str++;
//	}
//	else if (*str == '+')
//	{
//		str++;
//	}
//
//	while (*str >= '0' && *str <= '9')
//	{
//		res = res * 10 + (*str - '0');
//		str++;
//	}
//
//	return sign * res;
//}
//
//int main()
//{
//	int i;
//	char buffer[256];
//	printf("Enter a number: ");
//	fgets(buffer, 256, stdin);
//	i = my_atoi(buffer);
//	printf("The value entered is %d. Its double is %d.\n", i, i * 2);
//	return 0;
//}