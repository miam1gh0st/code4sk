/*
7-3 打印杨辉三角
分数 10
作者 徐镜春
单位 浙江大学
本题要求按照规定格式打印前N行杨辉三角。

输入格式：
输入在一行中给出N（1≤N≤10）。

输出格式：
以正三角形的格式输出前N行杨辉三角。每个数字占固定4位。

输入样例：
6
输出样例：
        1
       1   1
      1   2   1
     1   3   3   1
    1   4   6   4   1
   1   5  10  10   5   1
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
    int n, i, j;
    scanf("%d", &n);
    int a[100][100], cnt = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}