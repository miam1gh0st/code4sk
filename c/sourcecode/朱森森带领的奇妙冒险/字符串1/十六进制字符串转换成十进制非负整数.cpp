//十六进制字符串转换成十进制非负整数

//输入一个以#结束的字符串，滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，输出该字符串并将其转换为十进制数后输出。

//输入格式:
//输入在一行中给出一个不超过80个字符长度的、以#结束的非空字符串。

//输出格式:
//第1行中输出已滤去所有非十六进制字符的字符串。
//在第2行中输出转换后的十进制数。题目保证输出结果在长整型范围内。

//输入样例:
//-zy1+Ak0-bq?#
//输出样例:
//1A0b
//6667

#include <stdio.h>
#include <string.h>
#include<math.h>
int num(char s);
 
int main()
{
 
    char a[81],b[81]; //数组b存放过滤后的字符串
    int d,i,j,k;
 
    i=0;
    while((d=getchar())!='#'){
        a[i]=(char)d;
        i++;
    }
    a[i]='\0';
 
    j=i,k=0;
    for(i=0;i<j;i++){
        if((a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='f')||(a[i]>='A'&&a[i]<='F')){
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++){
        printf("%c",b[i]);
    }
 
    int sum=0;
    for(i=k-1,j=0;i>=0;i--,j++){   //i 控制幂次 j控制位数 因为 f41  第一位的要乘的数的幂次为f*16的2次方
         if(b[j]>='0'&&b[j]<='9'){
            sum=sum+(b[j]-48)*pow(16,i);  //(b[j]-48) 将字符转化为相对应的数字；
        }else{
            sum=sum+num(b[j])*pow(16,i);
        }
    }
    printf("\n%d",sum);
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
