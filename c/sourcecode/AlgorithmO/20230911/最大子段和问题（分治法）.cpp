/*
D. 最大子段和问题三（分治法）
Description
给你n个整数a1，a2，a3……，an，对于1<=i<=j<=n（1<=n<=100000）；求ai+ai+1+ai+2+……aj的最大值。如果给定的n个整数都为负数，那么规定最大值为零。

要求用分治法求解

Input
输入为两行，第一行为整数n，第二行为n个整数。

Output
输出也有两行，第一行为i和j；第二行为最大的子段和的值，格式参见Sample Output。

Sample Input
6
2 -5 11 -4 13 -2
Sample Output
From=3,To=5
MaxSum=20
*/
#include<bits/stdc++.h>
using namespace std;
const int MAXN=100005;
int n;
long long a[MAXN],sum,ansum;
pair<int,int>ans;
const long long inf=(1LL)<<61;
void div_algorithm(int l,int r)
{
    if(l>r)return;
    int mid=(l+r)>>1;
    long long lsum=0,rsum=0,lmax=-inf,rmax=-inf;
    int lpos,rpos;
    for(int i=mid;i>=l;--i)
    {
        lsum+=a[i];
        if(lmax<lsum)
        {
            lmax=lsum;
            lpos=i;
        }
        else if(lmax==lsum)
        {
            lpos=i;
        }
    }
    for(int i=mid;i<=r;++i)
    {
        rsum+=a[i];
        if(rmax<rsum)
        {
            rmax=rsum;
            rpos=i;
        }
    }
    if(ansum<lmax+rmax-a[mid])
    {
        ansum=lmax+rmax-a[mid];
        ans=make_pair(lpos,rpos);
    }
    else if(ansum==lmax+rmax-a[mid])
    {
        ans=min(ans,make_pair(lpos,rpos));
    }
    div_algorithm(l,mid-1);
    div_algorithm(mid+1,r);
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
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
            printf("From=0,To=0\nMaxSum=0\n");
            continue;
        }
        ansum=-1;
        sum=0;
        div_algorithm(1,n);
        printf("From=%d,To=%d\nMaxSum=%lld\n",ans.first,ans.second,ansum);
    }
    return 0;
}
