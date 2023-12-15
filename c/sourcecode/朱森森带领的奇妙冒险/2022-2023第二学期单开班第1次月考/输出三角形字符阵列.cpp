/* 7-8 输出三角形字符阵列
分数 10
作者 颜晖
单位 浙大城市学院
本题要求编写程序，输出n行由大写字母A开始构成的三角形字符阵列。

输入格式：
输入在一行中给出一个正整数n（1≤n<7）。

输出格式：
输出n行由大写字母A开始构成的三角形字符阵列。格式见输出样例，其中每个字母后面都有一个空格。

输入样例：
4
输出样例：
A B C D
E F G
H I
J
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
	char c = 'A';
	for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("%c ", c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
