//�ַ���ת����ʮ��������

//����һ����#�������ַ���������Ҫ����ȥ���еķ�ʮ�������ַ������ִ�Сд�������һ���µı�ʾʮ���������ֵ��ַ�����Ȼ����ת��Ϊʮ�����������������ڵ�һ��ʮ�������ַ�֮ǰ�����ַ���-�������������Ǹ�����

//�����ʽ��
//������һ���и���һ����#�����ķǿ��ַ�����

//�����ʽ��
//��һ�������ת�����ʮ����������Ŀ��֤����ڳ����ͷ�Χ�ڡ�

//����������
//+-P-xf4+-1!#
//���������
//-3905

#include <stdio.h>  
#include <string.h> 
#include<math.h>
int num(char s);

int main()  
{   	
	char a[800],b[800]; 
	int d,i,j,k;
	
	i=0;
	while((d=getchar())!='#'){
		a[i]=(char)d;
		i++;
	}
	a[i]='\0';
	

	int p;
	p=i;
	k=0; 
	for(i=0;i<p;i++){
		if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='f')||(a[i]>='A'&&a[i]<='F')||a[i]=='-'){
			b[k]=a[i];
			k++;
		}
	}
	
	int flag=1;
	if(b[0]=='-') flag=-1; 
	

	k=0;
	for(i=0;i<p;i++){
		if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='f')||(a[i]>='A'&&a[i]<='F')){
			b[k]=a[i];
			k++;
		}
	}	
	
	int sum=0;
	for(i=k-1,j=0;i>=0;i--,j++){  
 		if(b[j]>='0'&&b[j]<='9'){
			sum=sum+(b[j]-48)*pow(16,i);
		}else{
			sum=sum+num(b[j])*pow(16,i);   
		}
	} 
	printf("%d",sum*flag);
    return 0;  
  
} 
int num(char s)
{
    if(s == 'a'||s == 'A')
        return 10;
    if(s == 'b'||s == 'B')
        return 11;
    if(s == 'c'||s == 'C')
        return 12;
    if(s == 'd'||s == 'D')
        return 13;
    if(s == 'e'||s == 'E')
        return 14;
    if(s == 'f'||s == 'F')
        return 15;
}
 
