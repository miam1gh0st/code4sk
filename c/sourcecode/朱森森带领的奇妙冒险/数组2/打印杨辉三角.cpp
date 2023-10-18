//打印杨辉三角
#include<stdio.h>
int main()
{
	int arr[11][11];
	int n=0;
	arr[0][0]=0;
	scanf("%d",&n);//输入n
	
	
	for(int i=0;i<n;i++)//打印，控制外层行数循环
	{
		for(int k=0;k<n-i-1;k++)
		{
			printf(" ");//打印空格
		 } 
		 //打印数据
		 for(int j=0;j<=i;j++)
		 {
		 	if(i==j)//画图找规律，在二维数组第一行为0行，每行第一个，最后一个为1，i==j换行，j=0然后根据杨辉三角规律写中间元素 
			 {
			 	arr[i][j]=1;
			 }
			 else if(j==0)
			 {
			 	arr[i][j]=1;
			 }
			 else
			 {
			 	arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			 }
			 
			 printf("%4d",arr[i][j]);
			 
			 if(i==j)
			 {
			 	printf("\n");
			 }
		  } 
	 } 
	return 0;
 } 
