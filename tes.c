#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
//错误,有问题代码
//int mian()
//{
//	int arr[] = { 22, 34, 85, 91, 46, 81, 2, 91 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	for (int i = 0; i <sz ; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}
//int  compare(const void*a, const void*b)
//{
//	return(*(int*)a - *(int*)b);
//}

//参考例题
//int values[] = { 40, 10, 100, 90, 20, 25 };
//
//int compare(const void * a, const void * b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//	int n;
//	qsort(values, 6, sizeof(int), compare);
//	for (n = 0; n<6; n++)
//		printf("%d ", values[n]);
//	return 0;
//}

//学习,,,,也是错误代码
void test5()
{
	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
	/*qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);*/
	int n;
	for (n = 0; n<6; n++)
		printf("%d ", values[n]);
}
int main()
{
	test5();
	
	return 0;
}
int cmp_stu_by_age(void*a, void*b)
{
	return(((struct stu*)a)->age - ((struct stu*)b)->age);

}