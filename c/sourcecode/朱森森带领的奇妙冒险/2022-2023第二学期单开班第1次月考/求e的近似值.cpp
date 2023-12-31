/* 7-7 求e的近似值
分数 10
作者 C课程组
单位 浙江大学
自然常数 e 可以用级数 1+1/1!+1/2!+⋯+1/n!+⋯ 来近似计算。本题要求对给定的非负整数 n，求该级数的前 n+1 项和。

输入格式:
输入第一行中给出非负整数 n（≤1000）。

输出格式:
在一行中输出部分和的值，保留小数点后八位。

输入样例:
10
输出样例:
2.71828180
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	double sum = 1.0, tag = 1.0;
	for (int i = 1; i <= n; i++)
	{
		tag = tag * 1.0 / i;
		sum += tag;
	}
	printf("%.8lf", sum);
	return 0;
}