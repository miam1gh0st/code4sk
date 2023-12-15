/*
7-7 十进制转二进制
分数 10
作者 于延
单位 哈尔滨师范大学
任务描述
编程输出十进制非负整数转换成二进制数的序列。（不能用递归函数，当然此时你还没有学习到函数，请用循环解决）
输入格式:
若干个非负整数，每个整数代表一组数据，且都不超过2的30次方1073741824，数据之间以空格或回车分隔。
输出格式:
依次输出每组数据的二进制序列，每个输出结果单独占一行。
输入样例:
25 36 0 1
1024 1073741824
输出样例:
11001
100100
0
1
10000000000
1000000000000000000000000000000
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
	int n;
	int b[10000];
	while (scanf("%d", &n) == 1)
	{
		int i, cnt = 0;
		if (n == 0)
			printf("0");
		for (i = 0; n != 0; n /= 2)
		{
			b[i] = n % 2;
			cnt++;
			i++;
		}
		for (i = cnt - 1; i >= 0; i--)
		{
			printf("%d", b[i]);
		}
		printf("\n");
	}
	return 0;
}
