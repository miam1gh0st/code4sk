//矩阵转置 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,a[3][3],b[3][3];///定义两个数组，一个是转置前的，另一个是转置后的。
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);///遍历输入，遍历转置
            b[j][i]=a[i][j];///转置时行变列，列变行
        }
    }
    for(j=0;j<3;j++)///输出转置后的数列。
    {
        for(i=0;i<3;i++)
        {
            printf("%4d",b[j][i]);
        }
        printf("\n");
    }
    return 0;
}

