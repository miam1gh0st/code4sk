/*
7-8 查找满足条件的最后一个整数
分数 10
作者 颜晖
单位 浙大城市学院
本题要求编写程序，将输入的n个整数存入数组a中，然后在数组a中查找给定的x。如果数组a中的元素与x的值相同，输出满足条件的最后一个元素的下标（下标从0开始）；如果没有找到，输出“Not Found”。

输入格式:
输入在第1行中给出一个正整数n（1≤n≤100）和一个整数x，第2行输入n个整数，其间以空格分隔。题目保证数据不超过长整型整数的范围。

输出格式:
如果找到，输出与x的值相同的最后一个元素的下标；如果没有找到，在一行中输出“Not Found”。

输入样例1:
5 9
2 9 8 1 9
输出样例1:
4
输入样例2:
10 101
2 8 10 1 9 8 -101  0  98762  1
输出样例2:
Not Found
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
	int n, num, cnt = 0, maxi;
	scanf("%d %d", &n, &num);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == num)
		{
			cnt++;
			maxi = i;
		}
	}
	if (cnt == 0)
		printf("Not Found");
	else if (cnt != 0)
		printf("%d", maxi);

	return 0;
}