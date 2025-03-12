#include<stdio.h>

void hello_f()
{
    printf("My first function\n");
}

int sum_f(int a, int b)
{
    int sum = a + b;
    return sum;
}



int main()
{
    hello_f();

    int SUM = sum_f(10,20);

    printf("The sum is = %d\n",SUM);


    return 0;
}