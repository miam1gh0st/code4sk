/*
7-3 ???????????????
?? 10
?? C???
?? ????
????????,??????? 1 - 1/4 + 1/7 - 1/10 + ... ?????????????????eps?

????:
?????????????eps?

????:
??????�sum = S�??????????S,???????????????????????????

????1:
4E-2
????1:
sum = 0.854457
????2:
0.02
????2:
sum = 0.826310
*/
#include<stdio.h>
int main(){
	int flag=1;
	double eps,a=1,sum=0;
	scanf("%lf",&eps);
	for(int i=1;;){
		sum+=1.0/a*flag;
		if(1.0/a<=eps)
			break;
		a+=3;
		flag=-flag;
	}
	printf("sum = %.6lf",sum);
	return 0;
}
