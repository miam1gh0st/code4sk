//字符串输入练习 (III)

//输出字符串的子串。

//输入格式:
//每行的开始是一个正整数k,然后是一个字符串s，k和s之间用空格分开。(k大于0且小于等于s的长度）请在这里写输入格式。例如：输入在一行中给出2个绝对值不超过1000的整数A和B。

//输出格式:
//输出从头开始的长度为k的子串。

//输入样例:
//2 hello world!
//输出样例:
//he


#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    char s[1000];
    getchar();
    gets(s);
    int i;
    for(i=0;i<k;i++)
    {
        printf("%c",s[i]);
    }
    return 0;
}








