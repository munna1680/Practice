#include<stdio.h>

int fact(int a)
{
    if(a == 1)
    {
        return 1;
    }
    else
    {
        int Fact = a * fact(a - 1);
        return Fact;
    }
    
}

int main()
{
    int x;
    scanf("%d",&x);

    int factorial = fact(x);

    printf("%d\n",factorial);

    return 0;
}