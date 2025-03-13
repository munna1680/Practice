#include<stdio.h>
#include<math.h>

int power(int a, int b)
{
    if(b == 0)
    return 1;

    else
    return (a *power(a,b-1));

}


int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    power(a,b);
    printf("Power of a number (%d^%d) = %d\n",a,b,power(a,b));


    return 0;
}