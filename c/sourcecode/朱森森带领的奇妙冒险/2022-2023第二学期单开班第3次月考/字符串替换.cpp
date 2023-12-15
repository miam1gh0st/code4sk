/* 7-8 字符串替换
分数 10
作者 C课程组
单位 浙江大学
本题要求编写程序，将给定字符串中的大写英文字母按以下对应规则替换：

原字母	对应字母
A	Z
B	Y
C	X
D	W
…	…
X	C
Y	B
Z	A
输入格式：
输入在一行中给出一个不超过80个字符、并以回车结束的字符串。

输出格式：
输出在一行中给出替换完成后的字符串。

输入样例：
Only the 11 CAPItaL LeTtERS are replaced.
输出样例：
Lnly the 11 XZKRtaO OeGtVIH are replaced.
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB */

#include <stdio.h>
int main()
{
    char str[81];
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' & str[i] <= 'Z')
        {
            str[i] = 'A' + 'Z' - str[i];
        }
    }
    puts(str);
    return 0;
}