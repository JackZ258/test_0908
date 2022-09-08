#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = { 'b','i','t' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//C99 标准中引用一个概念:变长数组
//支持数组创建的时候，用变量指定大小的，但是这个数组不能初始化
//VS2019 是不支持C99中变长数组的

//int main()
//{
//	int n = 10;
//	/*int arr[n] = { 0 };*/
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:\test\0908"));
//	return 0;
//}

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d\n", &a, &b); 
	int m = Max(a, b);
	printf("%d\n", m);

	return 0;
}