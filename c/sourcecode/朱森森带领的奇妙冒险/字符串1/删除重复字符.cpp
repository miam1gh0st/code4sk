//ɾ���ظ��ַ�

//����Ҫ���д���򣬽������ַ���ȥ���ظ����ַ��󣬰����ַ�ASCII��˳���С��������������

//�����ʽ��
//������һ���Իس������ķǿ��ַ���������80���ַ�����

//�����ʽ��
//���ȥ�������Ľ���ַ�����

//����������
//ad2f3adjfeainzzzv
//���������
//23adefijnvz


#include <stdio.h>
#include <string.h>
#define SIZE 81

void delete_repeat(char *str);
void bubble_sort(char *str);

int main()
{
    char str[SIZE];
    gets(str);
    delete_repeat(str);
    bubble_sort(str);
    puts(str);
    return 0;
}
//ɾ���ظ��ַ�
void delete_repeat(char *str)
{
    /**�ж������ڵ�i���ַ��Ƿ���ǰi-1���ַ������ظ��� ���ظ���ɾ�����ַ���i֮����ַ��±����1���������ж��µĵ�i���ַ� �����ظ���������������������һ�� */
    for(int i=1;str[i]!='\0';i++){
        for(int j=0;j<i;j++) 
        {
            if(str[i]==str[j])
            {
                for(int k=i;k<strlen(str)-1;k++)
                {
                    str[k]=str[k+1];
                }
                str[strlen(str)-1]='\0';
                i--;
            }
        }
    }
}

//ð������
void bubble_sort(char *str)
{
    int swap;
    char temp;
    int k=strlen(str);
    do{
        swap =0;
        for(int i=0;i<k-1;i++){
            if(str[i]>str[i+1])
            {
                swap=1;
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
        k--;
    }while(k>0&&swap);
}

