//ͳ���ַ����ִ���

//����Ҫ���д����ͳ�Ʋ����ĳ�����ַ��ڸ����ַ����г��ֵĴ�����

//�����ʽ��
//�����һ�и���һ���Իس��������ַ���������80���ַ������ڶ�������һ���ַ���

//�����ʽ��
//��һ������������ַ��ڸ����ַ����г��ֵĴ�����

//����������
//programming is More fun!
//m
//���������
//2


#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0;
	char str[81];
	gets(str);
    char c;
    scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
    {
		if(str[i]==c)
			count++;
	}
	printf("%d\n",count);
    return 0;
}

