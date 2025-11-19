#include<stdio.h>
int main()
{
    int age(int n);
    int n=12;
    printf("Age is %d\n",age(n));
    return 0;

}
int age(int n)
{
    int c;
    if(n==1)
    {
        return 10;
    }
    c=age(n-1)+2;
    return c;
}