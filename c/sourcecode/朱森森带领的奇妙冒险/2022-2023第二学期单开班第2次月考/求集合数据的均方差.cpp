/*
7-2 求集合数据的均方差
分数 10
作者 何钦铭
单位 浙江大学
设计函数求 N 个给定整数的均方差。若将 N 个数 A[ ] 的平均值记为 Avg，则均方差计算公式为：
[(A
1
​
 −Avg)
2
 +(A
2
​
 −Avg)
2
 +⋯+(A
N
​
 −Avg)
2
 ]/N
​
 。

输入格式：
输入首先在第一行给出一个正整数 N（≤10
4
 ），随后一行给出 N 个正整数。所有数字都不超过 1000，同行数字以空格分隔。

输出格式：
输出这N个数的均方差，要求固定精度输出小数点后5位。

输入样例 1：
10
6 3 7 1 4 8 2 9 11 5
输出样例 1：
3.03974
输入样例 2：
1
2
输出样例 2：
0.00000
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	double avg, fangcha, sum1 = 0, sum2 = 0;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		sum1 += a[i];
	}
	avg = sum1 * 1.0 / n;
	for (i = 0; i < n; i++)
	{
		sum2 += pow(a[i] - avg, 2);
	}
	fangcha = pow(1.0 * sum2 / n, 0.5);
	printf("%.5lf", fangcha);
	return 0;
}