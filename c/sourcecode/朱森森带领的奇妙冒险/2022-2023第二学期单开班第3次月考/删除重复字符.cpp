/* 7-10 删除重复字符
分数 10
作者 颜晖
单位 浙大城市学院
本题要求编写程序，将给定字符串去掉重复的字符后，按照字符ASCII码顺序从小到大排序后输出。

输入格式：
输入是一个以回车结束的非空字符串（少于80个字符）。

输出格式：
输出去重排序后的结果字符串。

输入样例：
ad2f3adjfeainzzzv
输出样例：
23adefijnvz
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

#include <stdio.h>
int a[300];
int main()
{
    char s[85];
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        int b = (int)s[i];
        a[b]++;
    }
    for (int i = 0; i < 300; i++)
    {
        if (a[i] != 0)
        {
            printf("%c", i);
        }
    }

    return 0;
}