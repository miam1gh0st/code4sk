//�ַ����滻


//����Ҫ���д���򣬽������ַ����еĴ�дӢ����ĸ�����¶�Ӧ�����滻��

//ԭ��ĸ	��Ӧ��ĸ
//A	Z
//B	Y
//C	X
//D	W
//��	��
//X	C
//Y	B
//Z	A
//�����ʽ��
//������һ���и���һ��������80���ַ������Իس��������ַ�����

//�����ʽ��
//�����һ���и����滻��ɺ���ַ�����

//����������
//Only the 11 CAPItaL LeTtERS are replaced.
//���������
//Lnly the 11 XZKRtaO OeGtVIH are replaced.

#include <stdio.h>
int main()
{
    char str[81];
    gets(str);
    for( int i=0; i<81; i++ )
	{
        if( str[i]>='A' && str[i]<='Z' )
            str[i] += 25-2*(str[i]-65);
        
        printf("%c", str[i]);
    }
    
    return 0;
}
