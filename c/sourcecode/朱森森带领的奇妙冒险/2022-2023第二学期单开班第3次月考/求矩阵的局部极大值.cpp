/*
7-1 求矩阵的局部极大值
分数 10
作者 徐镜春
单位 浙江大学
给定M行N列的整数矩阵A，如果A的非边界元素A[i][j]大于相邻的上下左右4个元素，那么就称元素A[i][j]是矩阵的局部极大值。本题要求给定矩阵的全部局部极大值及其所在的位置。

输入格式：
输入在第一行中给出矩阵A的行数M和列数N（3≤M,N≤20）；最后M行，每行给出A在该行的N个元素的值。数字间以空格分隔。

输出格式：
每行按照“元素值 行号 列号”的格式输出一个局部极大值，其中行、列编号从1开始。要求按照行号递增输出；若同行有超过1个局部极大值，则该行按列号递增输出。若没有局部极大值，则输出“None 总行数 总列数”。

输入样例1：
4 5
1 1 1 1 1
1 3 9 3 1
1 5 3 5 1
1 1 1 1 1
输出样例1：
9 2 3
5 3 2
5 3 4
输入样例2：
3 5
1 1 1 1 1
9 3 9 9 1
1 5 3 5 1
输出样例2：
None 3 5
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
    int m, n, i, j, cnt = 0;
    scanf("%d %d", &m, &n);
    int A[100][100];
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 2; i < m; i++)
    {
        for (j = 2; j < n; j++)
        {
            if (A[i][j] > A[i + 1][j] && A[i][j] > A[i][j + 1] && A[i][j] > A[i - 1][j] && A[i][j] > A[i][j - 1])
            {
                cnt++;
                printf("%d %d %d\n", A[i][j], i, j);
            }
        }
    }
    if (cnt == 0)
        printf("None %d %d", m, n);
    return 0;
}