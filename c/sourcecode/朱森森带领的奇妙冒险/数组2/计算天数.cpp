//¼ÆËãÌìÊı
#include<stdio.h>
int main()
{
	int i, year, month, day, n=0;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d/%d/%d",&year,&month,&day);
	if((year%4==0&&year%100)||year%400==0)
	{
		a[2]=29;
	}
	for(i=0;i<=month-1;i++)
	{
			n+=a[i];
	}
	printf("%d",n+day);
	return 0;
}
