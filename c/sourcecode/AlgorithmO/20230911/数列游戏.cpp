/*
G. 数列游戏
Description
小明最近为了锻炼智力，在玩一个数列求和的游戏。设数列的长度为 n，每一个数字都是整数，且在[-1000,1000]范围内，即范围是 -1000~1000。

游戏规则:小明可以从这个数列里面选一串任意长度的连续子串并求和，小明想知道子串和绝对值的最大值是多少，你能帮帮他吗？

绝对值：正数的绝对值为本身，负数的绝对值为它的相反数。

如 5 的绝对值为 5，-7 的绝对值为 7 。

Input
输入共两行，第一行为一个整数 n，第二行为 n 个整数。

Output
输出一个数，为数列子串和绝对值的最大值。

Sample Input
样例一：
10
-562 232 969 201 -111 378 -610 127 245 932
样例二：
10
868 -838 -958 200 867 -920 -493 114 -800 757
样例三：
10
-607 -260 -270 -833 560 -280 404 -542 560 -115
Sample Output
样例一：
2363
样例二：
2828
样例三：
1970
Hint
对于样例 1，可以发现 232+969+201-111+378-610+127+245+932=2363 所以2363 是最大的绝对值。

对于样例 2，可以发现 -838+-958+200+867+-920+-493+114+-800= -2828 所以 2828 是最大的绝对值。

对于 20% 的数据，满足 n<=10

对于 50% 的数据，满足 n<=100

对于 70% 的数据，满足 n<=1000

对于 100% 的数据，满足 n<=1000000
*/
#include<bits/stdc++.h>
using namespace std;
const int MAXN=1000005;
const long long inf=(1LL<<60);
int n;
long long pre_sum[MAXN],pre_min[MAXN],pre_max[MAXN],ans,a[MAXN];
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        pre_sum[i]=pre_sum[i-1]+a[i];
    }
    for(int i=1;i<=n;i++)
    {
        pre_max[i]=max(pre_max[i-1],pre_sum[i-1]);
        pre_min[i]=min(pre_min[i-1],pre_sum[i-1]);
        ans=max(ans,abs(pre_sum[i]-pre_min[i]));
        ans=max(ans,abs(pre_sum[i]-pre_max[i]));
    }
    printf("%d\n",ans);
}
