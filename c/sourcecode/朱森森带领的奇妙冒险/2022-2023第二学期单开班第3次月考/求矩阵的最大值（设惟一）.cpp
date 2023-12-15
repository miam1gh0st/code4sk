/* 7-5 求矩阵的最大值（设惟一）
分数 10
作者 颜晖
单位 浙大城市学院
本题要求编写程序，求一个给定的m×n矩阵的最大值以及位置。题目保证最大值惟一。

输入格式:
输入第一行给出两个正整数m和n（1≤m,n≤6）。随后m行，每行给出n个整数，其间以空格分隔。

输出格式:
输出在第一行中输出最大值，在第二行中按照“行下标 列下标”（下标从0开始）的格式输出最大值的位置。

输入样例:
3 2
6 3
23 -9
6 -1
输出样例:
23
1 0
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

#include <stdio.h>
int main()
{
    int m, n, i, j;
    scanf("%d %d", &m, &n);
    int A[100][100];
    int maxnum = -100, max_i, max_j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
            if (A[i][j] > maxnum)
            {
                maxnum = A[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    printf("%d\n", maxnum);
    printf("%d %d", max_i, max_j);
    return 0;
}