#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

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
//
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


// Without create temporary variables and swap the contents of two integers.
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
//	printf("a = %d, b = %d", a, b);
//
//	return 0;
//}


// Count the number of ones in binary
//
// First method
// 
//int count_one(int n) {
//	int count = 0;
//
//	// For the 32 bit
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1) {
//			count++;
//		}
//	}
//	 
//	return count;
//}

// Second method
// 
//int count_one(int n) {
//	int count = 0;
//	
//	while (n)
//	{
//		n &= (n - 1);
//		count++;
//	}
//	
//	return count;
//}
//
//int main() {
//	int n = -1;
//
//	int res = count_one(n);
//
//	printf("%d", res);
//
//	return 0; 
//
//}


// Print the odd and even digits of a binary integer
// 00000000 00000000 00000000 00000000 -- 0
// If the first digit is even digit
// 
//void Print(int n) {
//	printf("even digits: ");
//	
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	printf("\n");
//
//	printf("odd digits: ");
//	for (int j = 30; j >= 0; j -= 2)
//	{
//		printf("%d ", (n >> j) & 1);
//	}
//
//	printf("\n");
//}
//
//int main() {
//	int n = 0;
//
//	Print(n);
//
//	return 0;
//}


// Find the number of different bits in two binary numbers
// 
//int count_diff(int a, int b) {
//	int count = 0;
//
//	// any 1 in temp means diff
//	int temp = a ^ b;
//
//	// Calculate how many ones in temp
//	while (temp) 
//	{
//		temp &= (temp - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main() {
//	int a = 1999;
//	int b = 2299;
//
//	int x = count_diff(a, b);
//	printf("%d", x);
//
//	return 0;
//}


// Xiao LeLe needs to walk up n steps to class. 
// Because his legs are long, he can choose to walk one or two steps each time. 
// So how many ways can he walk?
// 
//int get_count(int n) {
//	if (n <= 2) {
//		return n;
//	}
//
//	else {
//		return get_count(n - 1) + get_count(n - 2);
//	}
//}
//
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int count = get_count(n);
//
//	printf("%d", count);
//}


// KiKi wants to get the number of days in a certain month and year. 
// Please help him program it. 
// Input the year and month, and calculate the number of days in this year and month.
// 
// 31 28 31 30 31 30 31 31 30 31 30 31
// 31 29 31 30 31 30 31 31 30 31 30 31 -- run nian
// 
//int get_days(int a, int b) {
//    int days = 0;
//
//    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//    {
//        days = 31;
//    }
//    else if (b == 2) {
//        if ((a % 400 == 0) || ((a % 100 != 0) && (a % 4 == 0))) {
//            days = 29;
//        }
//        else {
//            days = 28;
//        }
//    }
//    else {
//        days = 30;
//    }
//
//    return days;
//}
//
//int main() {
//    int a, b;
//
//    while (scanf("%d %d", &a, &b) != EOF) {
//        int res = get_days(a, b);
//        printf("%d\n", res);
//    }
//
//    return 0;
//}


// Use pointer to print the array
// 
//Print(int* arr, int sz) {
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Print(arr, sz);
//	return 0;
//}


// Reverse the string
//
//void reverse(char* str) {
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//
//    while (left < right) {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char str[10000] = { 0 };
//
//    gets(str);
//
//    reverse(str);
//
//    printf("%s\n", str);
//
//    return 0;
//}


// Print diamond
// 
//int main() {
//	int line = 0;
//	scanf("%d", &line);
//	
//	// Top part
//	for (int i = 0; i < line; i++)
//	{
//		// Print spaces
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//
//		// Print *
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//
//		printf("\n");
//	}
//
//	// Bottom part 
//	for (int i = 0; i < line - 1; i++)
//	{
//		// Print spaces
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" "); // 1 to 6
//		}
//
//		// Print *
//		for (int j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*"); // 11 to 1
//		}
//
//		printf("\n");
//	}
//	
//	return 0;
//}


// Print daffodil number
// A "daffodil number" refers 
// to an n - digit number 
// whose sum of the nth powers of its digits is exactly equal to the number itself, 
// such as : 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3, then 153 is a "daffodil number".
// 
//int main() {
//	for (int i = 0; i <= 100000; i++)
//	{
//		// Calculate n
//		int n = 1;
//		int temp = i;
//		while (temp > 9)
//		{
//			temp /= 10;
//			n++;
//		}
//
//		// Check sum of the nth powers of its digits is exactly equal to the number itself
//		temp = i;
//		int sum = 0;
//		while (temp)
//		{
//			sum += (int) pow(temp % 10, n);
//			temp /= 10;
//		}
//
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


// Find the sum of the first 5 terms of Sn=a+aa+aaa+aaaa+aaaaa, where a is a number.
// Example : 2 + 22 + 222 + 2222 + 22222
//int main() {
//	int a, n;
//	scanf("%d %d", &a, &n);
//
//	int sn = 0;
//	int k = a;
//
//	for (int i = 0; i < n; i++)
//	{
//		sn += k;
//		k = k * 10 + a;
//	}
//
//	printf("%d", sn);
//
//	return 0;
//}


// Drink soda, 1 bottle of soda 1 yuan, 2 empty bottles can be exchanged for a bottle of soda
// give 20 yuan, how much soda can you drink
//
//int main() {
//	int money = 0;
//	int sum = 0;
//	int bottle = 0;
//	scanf("%d", &money);
//
//	sum += money;
//	bottle = money;
//	 
//	while (bottle >= 2)
//	{
//		sum += (bottle / 2);
//		bottle = (bottle / 2) + (bottle % 2);
//	}
//
//	printf("%d", sum);
//
//	return 0;
// }


//  2023-11-23
// 
// Input an integer array and implement a function 
// to adjust the order of the numbers in the array 
// so that all odd numbers in the array are in the first half of the array, 
// and all even numbers are in the second half of the array.
//
void sort(int* arr, int sz) {
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		while (left < right && arr[left] % 2 == 1)
		{
			left++;
		}

		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}

		if (left < right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;

			left++;
			right--;
		}
	}
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	sort(arr, sz);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
