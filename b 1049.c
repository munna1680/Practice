#include<stdio.h>
int main()
{
    char W1[100], W2[100], W3[100];
    scanf("%s %s %s",&W1,&W2,&W3);

    if(W1[0] == 'v' && W2[0] =='a' && W3[0] == 'c' )
    {
        printf("aguia\n");
    }

    if(W1[0] == 'v' && W2[0] =='a' && W3[0] == 'o' )
    {
        printf("pomba\n");
    }

    if(W1[0] == 'v' && W2[0] =='m' && W3[0] == 'o' )
    {
        printf("homem\n");
    }

    if(W1[0] == 'v' && W2[0] =='m' && W3[0] == 'h' )
    {
        printf("vaca\n");
    }

    if(W1[0] == 'i' && W2[2] =='s' && W3[0] == 'h' )
    {
        printf("pulga\n");
    }

    if(W1[0] == 'i' && W2[2] =='s' && W3[2] == 'r' )
    {
        printf("lagarta\n");
    }

    if(W1[0] == 'i' && W2[1] =='n' && W3[0] == 'h' )
    {
        printf("sanguessuga\n");
    }

    if(W1[0] == 'i' && W2[1] =='n' && W3[0] == 'o' )
    {
        printf("minhoca\n");
    }
    return 0;
}