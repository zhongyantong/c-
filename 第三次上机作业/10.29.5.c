#include<stdio.h>
void main()
{
    int x,y,z,mid,dec;
    printf("6,8,5:\n");
    scanf("%d%d",&x,&y,&z);
    if(x<y)
    {
        mid=x;x=y;y=mid;
    }
    if(x<z)
    {
        mid=x;x=z;z=mid;
    }
    if(y<z)
    {
        mid=y;y=z;z=mid;
    }
    printf("8:\n");
    scanf("%d",&dec);
    if(dec>=0)printf("最大整数为:%d\n",z);
    else printf("最小整数为：%d\n",z);
}