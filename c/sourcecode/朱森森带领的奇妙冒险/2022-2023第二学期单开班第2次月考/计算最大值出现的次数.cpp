/*
7-3 计算最大值出现的次数
分数 10
作者 李志聪
单位 哈尔滨师范大学
计算一维数组中最大值出现的次数。

输入格式:
输入在一行n（ n<=1000，代表数组的大小）,在下一行中输入 n个整数，为一维数组的元素。

输出格式:
输出最大值和出现的次数。

输入样例:
在这里给出一组输入。例如：

4
4 2 2 4
输出样例:
在这里给出相应的输出。例如：

4 2
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
	int n, i, max, cnt = 0;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == max)
			cnt++;
	}
	printf("%d %d", max, cnt);
	return 0;
}