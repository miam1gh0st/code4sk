//��������Ԫ��֮��
#include<stdio.h>
#include<string.h>
int main()
{
	int m, n, i, j, k;
	//��������������: m*n
	scanf("%d %d", &m, &n);
	int a[m][n];
	//��¼ÿ�е�n�����ĺ� 
	int b[100]= {0};
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 //ÿ�������Ӧ������Ԫ��֮��
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
