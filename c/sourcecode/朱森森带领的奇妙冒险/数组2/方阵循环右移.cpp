//����ѭ������ 
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
	m=m%n;//����m��n��ȡ���� 
	for(i=0;i<n;i++)
	{
		for(j=n-m;j<n;j++)//��������ƵĲ��� 
		{
			printf("%d ",a[i][j]);
		}
		for(j=0;j<n-m;j++)//��������µĲ��� 
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
