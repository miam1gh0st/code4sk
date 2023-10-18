/*
A. 最简单的“最大子段和”问题
Description
给定n个整数（可能为负数）a1,a2,……an。求ai,ai+1,……aj   其中1<=i<=j<=n的子段和的最大值。当所有整数均为负数时我们定义其最大子段和为0。例如：当（a1,a2,a3,a4,a5,a6）=（-2,11,-4,13,-5,-2）时，最大子段和为a2+a3+a4=20，i=2,j=4（下标从1开始）这个问题我们称之为“最大子段和问题”。

在课堂上，我们假定n<=100，今天我们把n的范围规定修改为n<=200，你的任务是设计一个程序解决它。

Input
输入由两行，第一行为n；第二行为n个整数。

Output
输出也有两行，第一行为：“From=xxx,To=xxx”；第二行为：“MaxSum=xxxx”，参见样例。

Sample Input
6
-2 11 -4 13 -5 -2
Sample Output
From=2,To=4
MaxSum=20
*/
#include <stdio.h>
int a[1001],n,max,from,to,s;
   int main()
{
     int i,j,n;
     while(1==scanf("%d",&n))
     {
         for(i=1;i<=n;i++)
         {
             scanf("%d",&a[i]);
         }
         from=1;
         to=n;
         max=0;
         for(i=1;i<=n;i++)
         {
             s=0;
             for(j=i;j<=n;j++)
             {
                 s+=a[j];
                 if(max<s)
                 {
                    max=s;
                    from=i;
                    to=j;
                 }
             }
         }
         printf("From=%d,To=%d\n",from,to);
         printf("MaxSum=%d\n",max);
     }
     return 0;
}

