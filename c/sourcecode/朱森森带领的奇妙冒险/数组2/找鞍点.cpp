//�Ұ���
#include<stdio.h>
#define MAXN 6  //����������� 
int main()
{
	int n,i,j,k,i_max,j_min,t=0;
	int matrix[MAXN][MAXN]; 
	
	scanf("%d",&n);//������� 
	for(i=0;i<n;i++)//�������� 
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
			if(matrix[i][j]>i_max)//�ҵ���������� 
			{
				i_max=matrix[i][j];
			}
		}
		for(j=0;j<n;j++)
		{
			j_min=matrix[0][j];
			for(k=0;k<n;k++)
			{
				if(matrix[k][j]<j_min)//�ҵ�������С�� 
				{
					j_min=matrix[k][j];
				}
			}
			if(matrix[i][j]==i_max&&matrix[i][j]==j_min)//�жϰ��� 
			{
				printf("%d %d\n",i,j);
				t++;//��ʶ 
			}	
		}
	}
	if(t==0)
	{
		printf("NONE\n");
	}

	return 0;
 } 
