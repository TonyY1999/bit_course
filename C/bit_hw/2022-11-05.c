#define _CRT_SECURE_NO_WARNINGS 1
#include "hw.h"


// Swap 2 arrays with same size
// 
//void swap_arr(int arr1[], int arr2[], int sz) {
//	for (int i = 0; i < sz; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
// 
//int main() {
//	int sz = 5;
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//
//	swap_arr(arr1, arr2, sz);
//
//	// arr1[]
//	printf("arr1[5] = ");
//	for (int i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr1[i]);
//	}
//
//	printf("\n");
//
//	// arr2[]
//	printf("arr2[5] = ");
//	for (int i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr2[i]);
//	}
//
//	return 0;
//}


// Initialize, print and reverse an array
// 
//void init(int arr[], int sz) {
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz) {
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	printf("\n");
//}
//
//void reverse(int arr[], int sz) {
//	int start = 0;
//	int end = sz - 1;
//
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//}
//
//int main() {
//	int sz = 5;
//	int arr[5] = { 1,2,3,4,5 };
//
//	//init(arr, sz);
//	print(arr, sz);
//
//	reverse(arr, sz);
//	print(arr, sz);
//}
