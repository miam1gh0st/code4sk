//�����дӢ����ĸ


//����Ҫ���д����˳����������ַ����������ֹ��Ĵ�дӢ����ĸ��ÿ����ĸֻ���һ�飻���޴�дӢ����ĸ�������Not Found����

//�����ʽ��
//����Ϊһ���Իس��������ַ���������80���ַ�����

//�����ʽ��
//���������˳����һ������������ֹ��Ĵ�дӢ����ĸ��ÿ����ĸֻ���һ�顣���޴�дӢ����ĸ�������Not Found����

//��������1��
//FONTNAME and FILENAME
//�������1��
//FONTAMEIL
//��������2��
//fontname and filrname
//�������2��
//Not Found


#include <stdio.h>
#include <string.h>
int main()
{
	char a[80];
	char b[80];
	int i,j,count;
	int flag=0;
	int n;
	int d;
	gets(a);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
		b[i]=a[i];
	}
	a[i]=0;
	count=0;
	
	for(i=0;a[i]!='\0';i++)
	{
		flag=0;
		if(a[i]>='A'&&a[i]<='Z')
		{
			for(j=0;j<i;j++)
			{
				if(b[j]==a[i])
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				printf("%c",a[i]);
				count++;
			}
		}
	}
	if(count==0)
	{
		printf("Not Found");
	}
	return 0;
}
