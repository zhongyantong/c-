#include <stdio.h>
double fun(double x, int y);

int main()
{
    double x;
    int y;
    printf("请输入底数x和指数y:");
    scanf("%lf%d", &x, &y);
    printf("%.2lf的%d次方结果是:%.2lf\n", x, y, fun(x, y));
    return 0;
}
double fun(double x, int y)
{
    int i;
    double z;
    for (i = 1, z = x; i < y; i++)
        z = z * x; 
    return z;
}