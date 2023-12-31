/*
7-1 选择法排序之第k趟
分数 10
作者 颜晖
单位 浙大城市学院
本题要求使用选择法排序，将给定的n个整数从小到大进行排序，输出第k趟（k从0开始）排序后的结果。

选择排序的算法步骤如下：

第0步：在未排序的n个数（a[0]〜 a[n−1]）中找到最小数，将它与 a[0]交换；

第1步：在剩下未排序的n−1个数（a[1] 〜 a[n−1]）中找到最小数，将它与 a[1] 交换；

……

第k步：在剩下未排序的n−k个数（a[k]〜a[n−1]）中找到最小数，将它与 a[k] 交换；

……

第n−2步：在剩下未排序的2个数（a[n−2] 〜a[n−1]）中找到最小数，将它与 a[n−2]交换。

输入格式：
输入第一行给出一个不超过10的正整数n和一个不超过n-1的正整数k。第二行给出n个整数，其间以空格分隔。

输出格式：
在一行中输出排序过程中第k步（k从0开始）的中间结果，即第k步后a[0]〜 a[n−1]的值，相邻数字间有一个空格，行末不得有多余空格。

输入样例：
4 1
5 1 7 2
输出样例：
1 2 7 5
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
	int i, j, n, k;
	scanf("%d %d", &n, &k);
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	if (n == 1)
		printf("%d", a[0]);
	for (i = 0; i < n - 1; i++)
	{
		int c = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[c] > a[j])
				c = j;
		}
		int t = a[i];
		a[i] = a[c];
		a[c] = t;
		if (i == k)
		{
			printf("%d", a[0]);
			for (j = 1; j < n; j++)
				printf(" %d", a[j]);
		}
	}
}