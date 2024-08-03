#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Practice using the library function, qsort, to sort various types of data
//struct Student
//{
//	char name[10];
//	int age;
//};
//
//int compare_int(const void* p1, const void* p2) {
//	return *(int*)p1 - *(int*)p2;
//}
//
//int compare_struct_name(const void* p1, const void* p2) {
//	return strcmp(((struct Student*)p1) -> name, ((struct Student*)p2) ->name);
//}
//
//int compare_struct_age(const void* p1, const void* p2) {
//	return ((struct Student*)p1) -> age - ((struct Student*)p2) -> age;
//}
//
//int main() {
//	// Use qsort to sort int
//	int arr1[5] = { 2,5,9,8,7 };
//	int num = sizeof(arr1) / sizeof(arr1[0]);
//	int sz = sizeof(arr1[0]);
//
//	qsort(arr1, num, sz, compare_int);
//
//	printf("arr1 now is: ");
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	// Use qsort to sort struct by name
//	struct Student s1 = { "Tony", 25 };
//	struct Student s2 = { "Leo", 20 };
//	struct Student s3 = { "David", 21 };
//	
//	struct Student S[3] = { s1, s2, s3 };
//	num = sizeof(S) / sizeof(S[0]);
//	sz = sizeof(S[0]);
//
//	qsort(S, num, sz, compare_struct_name);
//
//	printf("S now is: ");
//	for (int i = 0; i < num; i++)
//	{
//		printf("{%s %d} ", (S + i) ->name, (S + i) ->age);
//	}
//	printf("\n");
//
//	// Use qsort to sort struct by age
//	qsort(S, num, sz, compare_struct_age);
//
//	printf("S now is: ");
//	for (int i = 0; i < num; i++)
//	{
//		printf("{%s %d} ", (S + i)->name, (S + i)->age);
//	}
//	printf("\n");
//
//	return 0;
//}


// Imitate the function of qsort to implement a general bubble sort
//
//void swap(char* buffer1, char* buffer2, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		char temp = *buffer1;
//		*buffer1 = *buffer2;
//		*buffer2 = temp;
//		buffer1++;
//		buffer2++;
//	}
//}
//
//void bubble_sort(void* base, size_t num, size_t size, int (*compare) (const void*, const void*)) {
//	for (size_t i = 0; i < num  - 1; i++)
//	{
//		for (size_t j = 0;  j < num - 1 - i;  j++)
//		{
//			if (compare((char*)base + size * j, (char*)base + size * (j + 1)) > 0) {
//				swap((char*)base + size * j, (char*)base + size * (j + 1), size);
//			}
//		}
//	}
//}
//
//int main() {
//	// Use qsort to sort int
//	int arr1[5] = { 2,5,9,8,7 };
//	size_t num = sizeof(arr1) / sizeof(arr1[0]);
//	size_t sz = sizeof(arr1[0]);
//
//	bubble_sort(arr1, num, sz, compare_int);
//
//	printf("arr1 now is: ");
//	for (int i = 0; i < num; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	return 0;
//}