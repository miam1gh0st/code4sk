/* 7-10 统计素数并求和
分数 10
作者 张彤彧
单位 浙江大学
本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:
输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

输出格式:
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例:
10 31
输出样例:
7 143
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

#include <stdio.h>
int main()
{
	int m, n, i, j, cnt = 0, sum = 0, flag = 1;
	scanf("%d %d", &m, &n);
	if (m == 1)
		m = 2;
	for (i = m; i <= n; i++)
	{
		flag = 1;
		for (j = 2; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			cnt++;
			sum += i;
		}
	}
	printf("%d %d\n", cnt, sum);
	return 0;
}
