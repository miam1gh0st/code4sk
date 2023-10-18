/*
7-4 求整数的位数及各位数字之和
分数 10
作者 C课程组
单位 浙江大学
对于给定的正整数N，求它的位数及其各位数字之和。

输入格式：
输入在一行中给出一个不超过10^9的正整数N。

输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。

输入样例：
321
输出样例：
3 6
*/
#include<stdio.h>
int main(){
	int N,cnt=0,sum=0;
	scanf("%d",&N);
	for(;N!=0;){
		sum+=N%10;
		N=N/10;
		cnt++;
	} 
	printf("%d %d",cnt,sum);
	return 0;
}
