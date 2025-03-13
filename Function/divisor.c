#include<stdio.h>

void divisor(int a)
{
    for(int i = 1;i <= a;i++)
    {
        if(a % i == 0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    divisor(n);

    return 0;
}

