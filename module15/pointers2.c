#include<stdio.h>
void fun(int x)
{
    x=100;
}
int main()
{
    int x=10;
    fun(x);
    printf("%d",x);
    return 0;

}