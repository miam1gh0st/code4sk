//求矩阵各行元素之和
#include<stdio.h>
#include<string.h>
int main()
{
	int m, n, i, j, k;
	//输入两个正整数: m*n
	scanf("%d %d", &m, &n);
	int a[m][n];
	//记录每行的n个数的和 
	int b[100]= {0};
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 //每行输出对应矩阵行元素之和
	 k=0;
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		b[k]+=a[i][j];
		 }
		 k++;
	  } 
	  
	  for(i=0;i<m;i++)
	  {
	  	printf("%d\n",b[i]);
	  }
	return 0;
}
