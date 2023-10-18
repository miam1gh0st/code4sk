//½ÇÉ«½»»»
#include<stdio.h>
void swap(int *px,int *py);
int main()
{
	int a=1,b=2;
	int *pa=&a,*pb=&b;
	swap(pa,pb);
	printf("After calling swap:a=%d b=%d\n",a,b);
	return 0;
 } 
 void swap(int *px,int *py)
 {
 	int t;
 	t=*px;
 	*px=*py;
 	*py=t;
 }
