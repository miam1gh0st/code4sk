/*
Description
给出N个数字, 计算出最大的子段和。
 
Input
第一行给出一个数字 T(1<=T<=20) 代表接下来的组数.
接下来每 T 行,开始给出一个正整数 N(1<=N<=100000), 接着跟着N个整数.。数据保证中间结果和最后结果都在int范围内。
 
Output
输出最大的子段和
 
Sample Input
2
5 6 -1 5 4 -7
7 0 6 -1 1 -6 7 -5
Sample Output
14
7
*/
#include<bits/stdc++.h>
using namespace std;
const int MAXN=100005;
int n;
long long a[MAXN],sum,ansum;
pair<int,int>ans;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;++i)
        {
            scanf("%lld",&a[i]);
        }
        bool flag=false;
        for(int i=1;i<=n;++i)
        {
            if(a[i]>=0)flag=true;
        }
        if(!flag)
        {
            printf("0\n");
            continue;
        }
        int pos=0;
        ansum=-1;
        sum=0;
        for(int i=1;i<=n;++i)
        {
            sum+=a[i];
            if(sum<0)
            {
                sum=0;
                pos=i;
            }
            else
            {

                if(sum>ansum)
                {
                    ansum=sum;
                    ans=make_pair(pos+1,i);
                }
                else if(sum==ansum)
                {
                    ans=min(ans,make_pair(pos+1,i));
                }
            }
        }
        printf("%lld\n",ansum);
    }
    return 0;
}
