//�ַ�������

//����һ���ַ������Ը��ַ���������������������ַ�����

//�����ʽ��
//������һ���и���һ��������80���ַ����ȵġ��Իس������ķǿ��ַ�����

//�����ʽ��
//��һ��������������ַ�����

//����������
//Hello World!
//���������
//!dlroW olleH



#include<stdio.h>
#include<string.h>
int main()
{
    char str[81];
    gets(str);
    int n=strlen(str);
    int i;
    char temp;
    for(i=0;i<(n/2);i++){
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("%s\n",str);
    return 0;
}
