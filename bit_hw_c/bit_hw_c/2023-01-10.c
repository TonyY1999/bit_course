// Use Everything search newc++file.cpp
#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Simulate memcpy
//
//void* my_memcpy(void* dst, const void* src, size_t num) {
//	void* ret = dst;
//
//	assert(dst&& src);
//
//	while (num--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}
//
//int main() {
//	char arr1[] = "XXXXXXXX";
//	char arr2[] = "abcd";
//
//	size_t sz = sizeof(arr2);
//	char* res = my_memcpy(arr1, arr2, sz);
//
//	printf("String after copy is: %s", res);
//
//	return 0;
//}


// Simulate memmove
//
//void* my_memmove(void* dst, const void* src, size_t num) {
//	void* res = dst;
//
//	assert(dst && src);
//	
//	// If there is no overlapping
//	if (src >= dst || (char*)src + num <= (char*)dst)
//	{
//		while (num--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst + 1;
//			src = (char*)src + 1;
//		}
//	}
//	// If there is overlapping
//	else
//	{
//		dst = (char*)dst + num - 1;
//		src = (char*)src + num - 1;
//
//		while (num--)
//		{
//			*(char*)dst = *(char*)src;
//			dst = (char*)dst - 1;
//			src = (char*)src - 1;
//		}
//	}
//}
//
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	my_memmove(str + 20, str + 15, 11);
//	puts(str);
//	return 0;
//}