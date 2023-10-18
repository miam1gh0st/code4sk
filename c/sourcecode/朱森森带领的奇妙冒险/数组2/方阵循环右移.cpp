//方阵循环右移 
#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n;
	int i,j;
	scanf("%d %d",&m,&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	m=m%n;//可能m比n大取余数 
	for(i=0;i<n;i++)
	{
		for(j=n-m;j<n;j++)//先输出右移的部分 
		{
			printf("%d ",a[i][j]);
		}
		for(j=0;j<n-m;j++)//再输出余下的部分 
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
