//字符串逆序

//输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。

//输入格式：
//输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

//输出格式：
//在一行中输出逆序后的字符串。

//输入样例：
//Hello World!
//输出样例：
//!dlroW olleH



#include<stdio.h>
#include<string.h>
int main()
{
    char str[81];
    gets(str);
    int n=strlen(str);
    int i;
    char temp;
    for(i=0;i<(n/2);i++){
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("%s\n",str);
    return 0;
}
