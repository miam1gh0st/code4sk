//��ӡ�������
#include<stdio.h>
int main()
{
	int arr[11][11];
	int n=0;
	arr[0][0]=0;
	scanf("%d",&n);//����n
	
	
	for(int i=0;i<n;i++)//��ӡ�������������ѭ��
	{
		for(int k=0;k<n-i-1;k++)
		{
			printf(" ");//��ӡ�ո�
		 } 
		 //��ӡ����
		 for(int j=0;j<=i;j++)
		 {
		 	if(i==j)//��ͼ�ҹ��ɣ��ڶ�ά�����һ��Ϊ0�У�ÿ�е�һ�������һ��Ϊ1��i==j���У�j=0Ȼ�����������ǹ���д�м�Ԫ�� 
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
