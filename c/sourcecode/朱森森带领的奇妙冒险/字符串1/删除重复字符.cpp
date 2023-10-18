//删除重复字符

//本题要求编写程序，将给定字符串去掉重复的字符后，按照字符ASCII码顺序从小到大排序后输出。

//输入格式：
//输入是一个以回车结束的非空字符串（少于80个字符）。

//输出格式：
//输出去重排序后的结果字符串。

//输入样例：
//ad2f3adjfeainzzzv
//输出样例：
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
//删除重复字符
void delete_repeat(char *str)
{
    /**判断数组内第i个字符是否与前i-1个字符存在重复： 若重复，删除该字符，i之后的字符下标均减1，后重新判断新的第i个字符 若不重复，不做处理，继续遍历下一个 */
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

//冒泡排序
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

