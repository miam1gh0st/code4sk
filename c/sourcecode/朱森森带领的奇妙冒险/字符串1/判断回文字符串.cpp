//�жϻ����ַ���

//���ľ����ַ������ĶԳƣ��������Ҷ��ʹ����������������һ���ġ�
//����һ���ַ������жϸ��ַ����Ƿ�Ϊ���ģ�ֻ�������ֺ���ĸ�ַ�����ĸ�Ĵ�Сдû������

//�����ʽ:
//����һ���ַ�����

//�����ʽ:
//�ǻ��ģ�һ�����yes,�������no��

//��������:
//���������һ�����롣���磺

//A man,a plan; cnalPanama
//�������:
//�����������Ӧ����������磺

//yes

#include<stdio.h>
#include<string.h>

void tran(char a[]);//��Сдת�� 
void del(char *str);//ɾ������ 
void Copy_string(char *str1, char *str2);
void reverse(char *a);

//�����ַ��� 
void Copy_string(char* str1, char* str2)
{
    int i = 0;
    while (str1[i] != 0)
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';//����ַ���������
}

//����д��ĸת��ΪСд��ĸ 
void tran(char* a)
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] >= 'A' && a[i] <= 'Z'){
        	a[i] += 32;
		}
    a[i]='\0';        
}

//�Ƴ��ո� 
void del(char str[]){
    int i=0,j=0;
    char ch;
    ch=str[i];
    while(ch!='\0'){
        if((ch>='a'&&ch<='z')||ch>='A'&&ch<='Z'){
            str[j]=ch;
            j++;
        }
        i++;
        ch=str[i];
    }
    str[j]='\0';
}

//���������ַ���
void reverse(char *s){
    char *end = s;
    char temp;

    while(*end)
    end++;
    end--;
    for(; s<end; s++, end--){
        temp = *s;
        *s = *end;
        *end = temp;
    }
}

int main(){
	char str[100],str1[100],str2[100];
	gets(str);
	tran(str);
	del(str);
	Copy_string(str,str1);
	reverse(str);
	if(strcmp(str1,str)==0)
		printf("yes");
	else
		printf("no");
	return 0;
} 

