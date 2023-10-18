//≈–∂œ∂‘≥∆æÿ’Û 
#include<stdio.h>
int main()
{
	int n, a[10][10];
	int i, j, sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				printf("No\n");
				return 0;
			}

		}
	}
	printf("Yes\n");
	return 0;
 } 
