/*
7-4 交换最小值和最大值
分数 10
作者 C课程组
单位 浙江大学
本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。

注意：题目保证最大和最小值都是唯一的。

输入格式：
输入在第一行中给出一个正整数N（≤10），第二行给出N个整数，数字间以空格分隔。

输出格式：
在一行中顺序输出交换后的序列，每个整数后跟一个空格。

输入样例：
5
8 2 5 1 4
输出样例：
1 2 5 4 8
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
*/

#include <stdio.h>
int main()
{
	int N, i;
	scanf("%d", &N);
	int a[N];
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[0], max_i = 0;
	for (i = 0; i < N; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			max_i = i;
		};
	}
	int t = a[N - 1];
	a[N - 1] = max;
	a[max_i] = t;

	int min = a[0], min_i = 0;
	for (i = 0; i < N; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			min_i = i;
		};
	}
	t = a[0];
	a[0] = min;
	a[min_i] = t;
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
