#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=0;
    // s=n-1;
    // k=1;
    k=(2*n)-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s++;
        // s--;
        // k=k+2;
        k=k-2;
        printf("\n");
    }
    return 0;
}