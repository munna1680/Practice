#include<stdio.h>

int sum_n(int a)
{
    if(a == 0)
    return 0;

    else if(a == 1)
    return 1;

    else
    return ((a *(a+1))/2);
    
}


int main()
{
    int a;
    scanf("%d",&a);

    int summ = sum_n(a);

    printf("The sum of all natural numbers :%d\n",summ);

    return 0;
}