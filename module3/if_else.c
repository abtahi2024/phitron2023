#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%10 == 0)
        {
            printf("%d - Even\n", i);
        }
        else
        {
            printf("%d - Odd\n", i);
        }

    } 
    return 0;
}