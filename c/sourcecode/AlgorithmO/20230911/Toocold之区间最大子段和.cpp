/*
E. Toocold之区间最大子段和
Description
Toocold学会了怎样求区间最大子段和,现在他又玩出了新花样.他有n个数,他想知道对于区间的左端点l限定在[ll,rr]之间, 对于区间的右端点r限定在[ll2,rr2]之间的区间最大和是多少?

Input
输入第一行cas(1<=cas<=10)表示有几个cas

接下来每个cas的第一行是一个数n(1<=n<=100000)表示有n个数

第二行有n个数,a1,a2,a3...an(-1000<=ai<=1000)

第三行一个数q(1<=q<=100000)表示有q个询问

接下来q行每行四个数字ll, rr, ll2, rr2.(1<=ll,rr,ll2,rr2<=n)(ll<=rr)(ll2<=rr2)(rr2>=ll)表示左端点l的范围和右端点r的范围

Output
每个询问输出符合范围的区间最大和

Sample Input
1
6
4 -3 1 -3 5 -2
2
1 4 2 5
1 1 3 4
Sample Output
4
2
*/
#include<bits/stdc++.h>
using namespace std;
const int MAXN=100015;
int n,m;
int a[MAXN],pre_sum[MAXN],suf_sum[MAXN],l1,l2,r1,r2;
struct tnode
{
    int sum,lmax,rmax,ans;
	int l,r;
};
tnode operator + (const tnode& a,const tnode& b)
{
    tnode c;
    c.l=a.l;
    c.r=b.r;
    c.sum=a.sum+b.sum;
    c.lmax=max(a.lmax,a.sum+b.lmax);
    c.rmax=max(a.rmax+b.sum,b.rmax);
    c.ans=max(a.ans,b.ans);
    c.ans=max(c.ans,a.rmax+b.lmax);
    return c;
}
struct Segment_Tree
{
	tnode t[4*MAXN];
	void update(int root)
	{
	    int ch=root<<1;
	    t[root]=t[ch]+t[ch+1];
	}
	void buildt(int root,int l,int r,int A[])
	{
		if(l!=r)
		{
			int mid=(l+r)>>1;
			int ch=root<<1;
			buildt(ch,l,mid,A);
			buildt(ch+1,mid+1,r,A);
			update(root);
		}
		else
        {
            t[root].ans=t[root].lmax=t[root].rmax=t[root].sum=A[l];
            t[root].l=t[root].r=l;
        }
	}
	tnode query(int root,int l,int r)
	{
		if(t[root].l==l&&t[root].r==r)
		{
			return t[root];
		}
		int mid=(t[root].l+t[root].r)>>1;
		int ch=root<<1;
		if(r<=mid)return query(ch,l,r);
		else if(l>mid)return query(ch+1,l,r);
		else return query(ch,l,mid)+query(ch+1,mid+1,r);
	}
};
Segment_Tree ST1;
struct tnodes
{
    int Max;
	int l,r;
};
struct Segment_Tree_Max
{
	tnodes t[4*MAXN];
	void buildt(int root,int l,int r,int A[])
	{
		t[root].l=l;
		t[root].r=r;
		if(l!=r)
		{
			int mid=(l+r)>>1;
			int ch=root<<1;
			buildt(ch,l,mid,A);
			buildt(ch+1,mid+1,r,A);
			t[root].Max=max(t[ch].Max,t[ch+1].Max);
		}
		else t[root].Max=A[l];
	}
	int query(int root,int l,int r)
	{
		if(t[root].l==l&&t[root].r==r)
		{
			return t[root].Max;
		}
		int mid=(t[root].l+t[root].r)>>1;
		int ch=root<<1;
		if(r<=mid)return query(ch,l,r);
		else if(l>mid)return query(ch+1,l,r);
		else return max(query(ch,l,mid),query(ch+1,mid+1,r));
	}
};
Segment_Tree_Max ST2,ST3;
int get_sum(int l,int r)
{
    if(l>r)return 0;
    return pre_sum[r]-pre_sum[l-1];
}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;++i)
        {
            scanf("%d",&a[i]);
        }
        ST1.buildt(1,1,n,a);
        pre_sum[0]=suf_sum[n+1]=0;
        for(int i=1;i<=n;++i)
        {
            pre_sum[i]=pre_sum[i-1]+a[i];
        }
        for(int i=n;i;--i)
        {
            suf_sum[i]=suf_sum[i+1]+a[i];
        }
        ST2.buildt(1,1,n,pre_sum);
        ST3.buildt(1,1,n,suf_sum);
        scanf("%d",&m);
        while(m--)
        {
            scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
            if(r1<l2)///3 无交
            {
                printf("%d\n",ST3.query(1,l1,r1)-pre_sum[n]+ST2.query(1,l2,r2));
            }
            else if(l2<=l1&&l1<=r2&&r2<=r1)///2
            {
                printf("%d\n",ST1.query(1,l1,r2).ans);
            }
            else if(l1<=l2&&l2<=r1&&r1<=r2)///1
            {
                int temp=ST1.query(1,l2,r1).ans;
                if(l2-1>=l1)
                {
                    temp=max(temp,ST3.query(1,l1,l2-1)-pre_sum[n]+ST2.query(1,l2,r2));
                }
                if(r1+1<=r2)
                {
                    temp=max(temp,ST2.query(1,r1+1,r2)-pre_sum[n]+ST3.query(1,l1,r1));
                }
                printf("%d\n",temp);
            }
            else if(l1<=l2&&l2<=r2&&r2<=r1)///4
            {
                int temp=ST1.query(1,l2,r2).ans;
                if(l2-1>=l1)
                {
                    temp=max(temp,ST3.query(1,l1,l2-1)-pre_sum[n]+ST2.query(1,l2,r2));
                }
                printf("%d\n",temp);
            }
            else if(l2<=l1&&l1<=r1&&r1<=r2)///5
            {
                int temp=ST1.query(1,l1,r1).ans;
                if(r1+1<=r2)
                {
                    temp=max(temp,ST2.query(1,r1+1,r2)-pre_sum[n]+ST3.query(1,l1,r1));
                }
                printf("%d\n",temp);
            }
        }
    }
    return 0;
}
