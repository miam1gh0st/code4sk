/* 6-1 使用函数找出数组中的最大值
分数 10
作者 张泳
单位 浙大城市学院
本题要求实现一个找出整型数组中最大值的函数。

函数接口定义：
int FindArrayMax( int a[], int n );
其中a是用户传入的数组，n是数组a中元素的个数。函数返回数组a中的最大值。

裁判测试程序样例：
#include <stdio.h>
#define MAXN 10

int FindArrayMax( int a[], int n );

int main()
{
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for( i=0; i<n; i++ ){
        scanf("%d", &a[i]);
    }

    printf("%d\n", FindArrayMax(a, n));

    return 0;
}

--请在这里填写答案--

输入样例：
4
20 78 99 -14
输出样例：
99
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

int FindArrayMax(int a[], int n)
{
    int j;
    int max = a[0];
    for (j = 0; j < n; j++)
    {
        if (a[j] > max)
            max = a[j];
    }
    return max;
}