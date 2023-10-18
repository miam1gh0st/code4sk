//字符串转换成十进制整数

//输入一个以#结束的字符串，本题要求滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，然后将其转换为十进制数后输出。如果在第一个十六进制字符之前存在字符“-”，则代表该数是负数。

//输入格式：
//输入在一行中给出一个以#结束的非空字符串。

//输出格式：
//在一行中输出转换后的十进制数。题目保证输出在长整型范围内。

//输入样例：
//+-P-xf4+-1!#
//输出样例：
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
 
