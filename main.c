#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    if(m%n==0)
    {
        printf("%d",m/n);
    }
    else
    {
        printf("%d",0);
    }
}
