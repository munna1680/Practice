#include<stdio.h>

void hello_f()
{
    printf("Hello! I am from inside of a function\n");
}

void val_f(int a)
{
    if(a % 2 == 0)
    {
        printf("Even\n");
    }
    else 
    {
        printf("odd\n");
    }

}

int main()
{
    hello_f();

    printf("\n");

    int A;
    scanf("%d",&A);
    val_f(A);

    return 0;
}