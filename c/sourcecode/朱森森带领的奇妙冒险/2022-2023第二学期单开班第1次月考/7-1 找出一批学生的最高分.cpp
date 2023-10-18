/*7-1 找出一批学生的最高分
分数 10
作者 颜晖
单位 浙大城市学院
本题要求编写程序，找出最高分。

输入格式:
输入在一行中给出一系列非负整数，其间以空格分隔。当读到负整数时，表示输入结束，该数字不要处理。

输出格式:
在一行中输出最高分。

输入样例:
在这里给出一组输入。例如：

67 88 73 54 0 95 60  -1
输出样例:
在这里给出相应的输出。例如：

95*/

#include<stdio.h>
int main()
{
    int num,maxnum;
    scanf("%d",&num);
    maxnum=num;
    for(;num>=0;){
        scanf("%d",&num);
        if(num>maxnum){
            maxnum=num;
        }
    }
    printf("%d",maxnum);
    return 0;
}
