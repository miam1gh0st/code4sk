/*
A. 英语成绩分析
Description
NIT学校前不久刚结束了一次大一学生的英语测试，分管教学的副校长想知道全校最高分与排名第二十名学生的分差是多少，还想知道最高分与平均分的分差是多少，请你帮忙算一下。

Input
本问题有多组测试数据，第一行输入的就是测试数据组数，对于每组数据，有两行。其中第一行就是学生的个数n（21<=n<=2000）；第二行是n个整数，表示n个学生的英语成绩（0<=每个学生的英语成绩<=100）。

Output
对于每组测试数据，输出也有两行，第一行是最高成绩与排名第二十名学生的成绩分差，第二行是最高分与平均分的分差（精确到小数点后2位）。

Sample Input
2
30
65 71 94 83 62 77 81 96 80 70 66 72 95 84 63 78 82 97 81 71 64 70 93 82 61 76 80 95 79 69
22
77 81 96 80 70 66 72 95 84 63 78 82 97 81 71 64 70 93 82 61 76 80
Sample Output
26
19.10
33
18.86
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double a[2010];

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        double sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lf",&a[i]);
            sum+=a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        printf("%.0f\n",a[0]-a[19]);
        printf("%.2f\n",a[0]-sum/n);
    }
    return 0;
}
