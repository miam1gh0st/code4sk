//����ָ���ַ�

//����Ҫ���д���򣬴Ӹ����ַ����в���ĳָ�����ַ���

//�����ʽ��
//����ĵ�һ����һ�������ҵ��ַ����ڶ�����һ���Իس������ķǿ��ַ�����������80���ַ�����

//�����ʽ��
//����ҵ�����һ���ڰ��ո�ʽ��index = �±ꡱ������ַ����ַ���������Ӧ������±꣨�±��0��ʼ�����������"Not Found"��

//��������1��
//m
//programming
//�������1��
//index = 7
//��������2��
//a
//1234
//�������2��
//Not Found


#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0,index;
    char c;
    scanf("%c\n",&c);
	char str[81];
	gets(str);

	for(i=0;str[i]!='\0';i++)
    {
		if(str[i]==c)
        {
            index=i;
            count++;
        }

	}
    if(count!=0)
	    printf("index = %d\n",index);
    else if(count==0)
        printf("Not Found");
    return 0;
}


