//输出大写英文字母


//本题要求编写程序，顺序输出给定字符串中所出现过的大写英文字母，每个字母只输出一遍；若无大写英文字母则输出“Not Found”。

//输入格式：
//输入为一个以回车结束的字符串（少于80个字符）。

//输出格式：
//按照输入的顺序在一行中输出所出现过的大写英文字母，每个字母只输出一遍。若无大写英文字母则输出“Not Found”。

//输入样例1：
//FONTNAME and FILENAME
//输出样例1：
//FONTAMEIL
//输入样例2：
//fontname and filrname
//输出样例2：
//Not Found


#include <stdio.h>
#include <string.h>
int main()
{
	char a[80];
	char b[80];
	int i,j,count;
	int flag=0;
	int n;
	int d;
	gets(a);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		b[i]=a[i];
	}
	a[i]=0;
	count=0;
	
	for(i=0;a[i]!='\0';i++)
	{
		flag=0;
		if(a[i]>='A'&&a[i]<='Z')
		{
			for(j=0;j<i;j++)
			{
				if(b[j]==a[i])
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				printf("%c",a[i]);
				count++;
			}
		}
	}
	if(count==0)
	{
		printf("Not Found");
	}
	return 0;
}
