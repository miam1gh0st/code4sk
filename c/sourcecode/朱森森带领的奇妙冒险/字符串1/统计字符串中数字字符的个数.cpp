//统计字符串中数字字符的个数 

//输入一个字符串，统计其中数字字符（'0'……'9'）的个数。

//输入格式:
//输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

//输出格式:
//输出所统计的数字字符的个数。

//输入样例:
//It's 512?

//输出样例:
//3

#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0;
	char str[81];
	gets(str);
	for(i=0;str[i]!='\0';i++)
    {
		if(str[i]>='0'&&str[i]<='9')
			count++;
	}
	printf("%d\n",count);
    return 0;
}

