/*
7-9 找完数
分数 10
作者 陈建海
单位 浙江大学
所谓完数就是该数恰好等于除自身外的因子之和。例如：6=1+2+3，其中1、2、3为6的因子。本题要求编写程序，找出任意两正整数m和n之间的所有完数。

输入格式：
输入在一行中给出2个正整数m和n（1<m≤n≤10000），中间以空格分隔。

输出格式：
逐行输出给定范围内每个完数的因子累加形式的分解式，每个完数占一行，格式为“完数 = 因子1 + 因子2 + ... + 因子k”，其中完数和因子均按递增顺序给出。若区间内没有完数，则输出“None”。

输入样例：
2 30
输出样例：
6 = 1 + 2 + 3
28 = 1 + 2 + 4 + 7 + 14
*/

#include<stdio.h>
int main()
{
	int n, m, i, j, k, sum = 0;
	int N = 1;					   //用于判断m-n之间是否有完数 
	int flag = 0;                 //判断是否是完数 
	scanf("%d %d", &m, &n);
	for (i = m;i <= n;i++)       //m到n之间找完数 
	{
		flag = 0;
		sum = 0;
		for (j = 1;j <= i / 2;j++)      //循环次数不会超过一半 
		{
			if (i % j == 0)
				sum += j;
		}
		if (sum == i)       //是完数 
			flag = 1;
 
		if (flag)       //进行输出 
		{
			N = 0;
			printf("%d = 1 ", i);           //完数和第一项因子 
			for (k = 2;k <= i / 2;k++)      //第一项因子已经拿出来，k这里取2开始 
			{
				if (i % k == 0)
				{
					printf("+ %d ", k);
				}
			}
			printf("\n");
		}
	}
	if (N)          //m-n之间没有完数            
	{
		printf("None\n");
	}
	return 0;
}
