//�ж������Ǿ��� 
#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int i=0;i<T;i++)
	{
		int m;
		scanf(" %d", &m);
		int mat[m][m];
		//������� 
		for(int j=0;j<m;j++)
		{
			for(int n=0;n<m;n++)
			{
				scanf(" %d", &mat[j][n]);
			}
		}
		
		int flag=1;//�����־ 
		
		for(int x=1;x<m;x++)//�ж������Ƿ��з�0 
		{
			for(int y=0;y<x;y++)
			{
				if(mat[x][y]!=0)
				{
					flag=0;
					break;//�з�0���� 
				}
			}
			if(flag==0)
			break;
		}
		if(flag==1)//��ӡ 
			printf("YES\n");
		else
			printf("NO\n");	
	}
	
	return 0;
}
