//����ת�� 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,a[3][3],b[3][3];///�����������飬һ����ת��ǰ�ģ���һ����ת�ú�ġ�
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);///�������룬����ת��
            b[j][i]=a[i][j];///ת��ʱ�б��У��б���
        }
    }
    for(j=0;j<3;j++)///���ת�ú�����С�
    {
        for(i=0;i<3;i++)
        {
            printf("%4d",b[j][i]);
        }
        printf("\n");
    }
    return 0;
}

