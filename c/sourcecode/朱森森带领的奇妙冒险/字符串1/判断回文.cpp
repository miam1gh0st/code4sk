//�жϻ���

//����һ���Իس���Ϊ������־���ַ���������80���ַ������жϸ��ַ����Ƿ�Ϊ���ġ�
//���ľ����ַ������ĶԳƣ��硰abcba������abccba���ǻ��ģ���abcdba�����ǻ��ġ�

//�����ʽ:
//����һ���Իس���Ϊ������־���ַ���������80���ַ���

//�����ʽ:
//Ϊ���ģ����yes; �ǻ��ģ����no��ע������Ľ�������лس���

//��������:
//abccba

//�������:
//yes



#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char line[80];
    gets(line);
    n=strlen(line);
    for(i=0;i<n/2;i++)
    {
        if(line[i]!=line[n-1-i])
            break;
    }
    if(i>=n/2)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
