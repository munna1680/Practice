#include<stdio.h>

float add_f(float a, float b)
{
    float add = a + b;
    return add;
}

float subtrct_f(float a, float b)
{
    float subtract = a - b;
    return subtract;
}

float multiply_f(float a, float b)
{
    float multiply = a * b;
    return multiply;
}

float div_f(float a, float b)
{
    float div = a / b;
    return div;
}


int main()
{

    float x,y;
    scanf("%f %f",&x,&y);

    float add = add_f(x,y);
    float subtract = subtrct_f(x,y);
    float multiply = multiply_f(x,y);
    float div = div_f(x,y);

    printf("%.2f %.2f %.2f %.2f\n",add,subtract,multiply,div);
    return 0;
}