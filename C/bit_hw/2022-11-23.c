#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Input an integer array and implement a function 
// to adjust the order of the numbers in the array 
// so that all odd numbers in the array are in the first half of the array, 
// and all even numbers are in the second half of the array.
//
//void sort(int* arr, int sz) {
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//
//			left++;
//			right--;
//		}
//	}
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	sort(arr, sz);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}