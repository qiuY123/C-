#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

//int main()
//{
//
//	for (int x = 3; x % 3 == 0; x += 3)
//	{
//		if (x >= 0 && x <= 100)
//			printf("%d\n", x);
//	}
//
//	return 0;
//}//
//int get_max(int x, int y)
//{
//	int max = x > y ? x : y;
//	return max;
//}
//int get_min(int x, int y)
//{
//	int min = x < y ? x : y;
//	return min;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int arr[3] = { *pa,*pb,*pc };
//	for (int i = 1; i <= 3; i++)
//	{
//		for (int j = 0; j <= 3 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	printf("%d %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 101; x <= 200; x += 2)
//	{
//		for (y = 2; y < x; y++)
//		{
//			if (x % y == 0)
//			{
//				break;
//			}
//		}
//		if (y == x)
//		{
//			printf("%d\n", x);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i = i + 4)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}
//int get_math(int x,int y)
//{
//	int max = x > y ? x : y;
//	int min = x < y ? x : y;
//	int temp = 0;
//	while (min)
//	{
//		temp = max % min;
//		max = min;
//		min = max % temp;
//	}
//	return temp;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int value = get_math(x, y);
//	printf("%d", value);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= 9; j++)
//		{
//			if(i>=j)
//			printf("%d*%d=%-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
#include<stdlib.h>
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	for (int i = 0; i < sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d", max);

	return 0;
}