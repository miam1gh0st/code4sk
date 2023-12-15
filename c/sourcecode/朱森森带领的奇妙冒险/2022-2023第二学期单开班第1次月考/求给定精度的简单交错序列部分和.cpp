/* 7-3 求给定精度的简单交错序列部分和
分数 10
作者 C课程组
单位 浙江大学
本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。

输入格式:
输入在一行中给出一个正实数eps。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。

输入样例1:
4E-2
输出样例1:
sum = 0.854457
输入样例2:
0.02
输出样例2:
sum = 0.826310
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

#include <stdio.h>
int main()
{
	double eps;
	scanf("%lf", &eps);
	double sum = 0;
	double a = 1;
	int t = 1;
	for (int i = 1;;)
	{
		sum += 1.0 / a * t;
		if (1.0 / a <= eps)
			break;
		a += 3;
		t = -t;
	}
	printf("sum = %.6lf", sum);
	return 0;
}