/* 7-7 判断回文字符串
分数 10
作者 陈春晖
单位 浙江大学
回文就是字符串中心对称，从左向右读和从右向左读的内容是一样的。
输入一个字符串，判断该字符串是否为回文，只考虑数字和字母字符，字母的大小写没有区别。

输入格式:
输入一个字符串。

输出格式:
是回文，一行输出yes,否则输出no。

输入样例:
在这里给出一组输入。例如：

A man,a plan; cnalPanama
输出样例:
在这里给出相应的输出。例如：

yes
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

#include <stdio.h>

int main()
{
    char s[85], c[85];
    gets(s);
    int cnt = 0, k = 0, flag = 1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9' ||
            s[i] >= 'A' && s[i] <= 'Z' ||
            s[i] >= 'a' && s[i] <= 'z')
        {
            c[k] = s[i];
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                c[k] += 32;
            }
            k++;
        }
    }
    for (int i = 0; i < k / 2; i++)
    {
        if (c[i] != c[k - i - 1])
        {
            flag = 0;
        }
    }
    if (flag)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}