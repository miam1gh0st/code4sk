/* 7-9 十六进制字符串转换成十进制非负整数
分数 10
作者 颜晖
单位 浙大城市学院
输入一个以#结束的字符串，滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，输出该字符串并将其转换为十进制数后输出。

输入格式:
输入在一行中给出一个不超过80个字符长度的、以#结束的非空字符串。

输出格式:
第1行中输出已滤去所有非十六进制字符的字符串。
在第2行中输出转换后的十进制数。题目保证输出结果在长整型范围内。

输入样例:
-zy1+Ak0-bq?#
输出样例:
1A0b
6667
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

#include <stdio.h>
#include <math.h>
int main()
{
    char s[85], c;
    int i = 0, sum = 0;
    while (1)
    {
        c = getchar();
        if (c == '#')
            break;
        if (c >= '0' && c <= '9' || c >= 'a' && c <= 'f' || c >= 'A' && c <= 'F')
        {
            s[i] = c;
            i++;
        }
    }
    for (int j = 0; j < i; j++)
    {
        if (s[j] >= '0' && s[j] <= '9')
        {
            int a = (int)s[j];
            int b = a - 48;
            sum += b * pow(16, i - j - 1);
        }
        if (s[j] >= 'a' && s[j] <= 'f')
        {
            int a = (int)s[j];
            int b = a - 87;
            sum += b * pow(16, i - j - 1);
        }
        if (s[j] >= 'A' && s[j] <= 'F')
        {
            int a = (int)s[j];
            int b = a - 55;
            sum += b * pow(16, i - j - 1);
        }
    }
    puts(s);
    printf("%d\n", sum);
    return 0;
}