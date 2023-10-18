//判断回文

//输入一个以回车符为结束标志的字符串（少于80个字符），判断该字符串是否为回文。
//回文就是字符串中心对称，如“abcba”、“abccba”是回文，“abcdba”不是回文。

//输入格式:
//输入一个以回车符为结束标志的字符串（少于80个字符）

//输出格式:
//为回文，输出yes; 非回文，输出no，注意输出的结果后面有回车符

//输入样例:
//abccba

//输出样例:
//yes



#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char line[80];
    gets(line);
    n=strlen(line);
    for(i=0;i<n/2;i++)
    {
        if(line[i]!=line[n-1-i])
            break;
    }
    if(i>=n/2)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
