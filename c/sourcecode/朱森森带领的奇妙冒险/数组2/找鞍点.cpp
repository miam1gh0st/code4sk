//找鞍点
#include<stdio.h>
#define MAXN 6  //阶数最大声明 
int main()
{
	int n,i,j,k,i_max,j_min,t=0;
	int matrix[MAXN][MAXN]; 
	
	scanf("%d",&n);//输入阶数 
	for(i=0;i<n;i++)//输入数据 
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		i_max=matrix[i][0];
		for(j=0;j<n;j++)
		{
			if(matrix[i][j]>i_max)//找到该行最大数 
			{
				i_max=matrix[i][j];
			}
		}
		for(j=0;j<n;j++)
		{
			j_min=matrix[0][j];
			for(k=0;k<n;k++)
			{
				if(matrix[k][j]<j_min)//找到该行最小数 
				{
					j_min=matrix[k][j];
				}
			}
			if(matrix[i][j]==i_max&&matrix[i][j]==j_min)//判断鞍点 
			{
				printf("%d %d\n",i,j);
				t++;//标识 
			}	
		}
	}
	if(t==0)
	{
		printf("NONE\n");
	}

	return 0;
 } 
