//字符转换

//本题要求提取一个字符串中的所有数字字符（'0'……'9'），将其转换为一个整数输出。

//输入格式：
//输入在一行中给出一个不超过80个字符且以回车结束的字符串。

//输出格式：
//在一行中输出转换后的整数。题目保证输出不超过长整型范围。

//输入样例：
//free82jeep5
//输出样例：
//825

#include<stdio.h> 
int main()
{
	char arr[80];
	char b[80];
	int n = 0;
	int len = 0;
	while (1)
	{
		scanf("%c", &arr[len]);
		if (arr[len] == '\n')
		{
			break;
		}
		len++;
	}
	//将数字备份到字符串b中 
	for (int i = 0; i < len; ++i) 
	{
		if (arr[i] >= '0' && arr[i] <= '9') 
		{
			b[n] = arr[i];
			n++;//记录b的个数
		}
	}
	int sum = 0;
	//最大的坑
	//本题要求提取一个字符串中的所有数字字符（'0'……'9'），将其转换为一个整数输出。
	for (int i = 0; i < n; ++i)
	{
		//输出最好按题目要求
		if (i == 0) 
		{
			sum = b[i] - '0';
		}
		//字符串转数字要-'0' 
		else 
		{
			sum = sum * 10 + b[i] - '0';
		}
	}
	printf("%d",sum);
    return 0;
}
