/*
7-2 求简单交错序列前N项和
分数 10
作者 C课程组
单位 浙江大学
本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。

输入样例:
10
输出样例:
sum = 0.819
*/

#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int flag = 1;
	int a = 1;
	double sum = 0;
	for (int i = 1; i <= N; i++, a += 3)
	{
		sum += 1.0 / a * flag;
		flag = -flag;
	}
	printf("sum = %.3lf", sum);
	return 0;
}
