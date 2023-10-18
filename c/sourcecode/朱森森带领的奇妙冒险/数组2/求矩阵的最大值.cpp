//求矩阵的最大值（设惟一） 
#include<stdio.h>
int main(){
    int m,n,i,j,im=0,jm=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[im][jm]<a[i][j]){im=i;jm=j;}
        }
    }
    printf("%d\n%d %d",a[im][jm],im,jm);
    return 0;
}
