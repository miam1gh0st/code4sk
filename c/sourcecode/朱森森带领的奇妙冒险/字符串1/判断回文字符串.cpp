//判断回文字符串

//回文就是字符串中心对称，从左向右读和从右向左读的内容是一样的。
//输入一个字符串，判断该字符串是否为回文，只考虑数字和字母字符，字母的大小写没有区别。

//输入格式:
//输入一个字符串。

//输出格式:
//是回文，一行输出yes,否则输出no。

//输入样例:
//在这里给出一组输入。例如：

//A man,a plan; cnalPanama
//输出样例:
//在这里给出相应的输出。例如：

//yes

#include<stdio.h>
#include<string.h>

void tran(char a[]);//大小写转换 
void del(char *str);//删除符号 
void Copy_string(char *str1, char *str2);
void reverse(char *a);

//复制字符串 
void Copy_string(char* str1, char* str2)
{
    int i = 0;
    while (str1[i] != 0)
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';//添加字符串结束符
}

//将大写字母转换为小写字母 
void tran(char* a)
{
    int i;
    for (i = 0; a[i] != '\0'; i++)
        if (a[i] >= 'A' && a[i] <= 'Z'){
        	a[i] += 32;
		}
    a[i]='\0';        
}

//移除空格 
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

//倒序排列字符串
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

