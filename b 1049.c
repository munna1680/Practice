#include<stdio.h>
int main()
{
    char W1[100], W2[100], W3[100];
    scanf("%s %s %s",&W1,&W2,&W3);

    if(W1[0] == 'v' && W2[0] =='a' && W3[0] == 'c' )
    {
        printf("aguia\n");
    }

    if(W1[100] == 'vertebrado' && W2[100] =='ave' && W3[100] == 'onivoro' )
    {
        printf("pomba\n");
    }

    if(W1[100] == 'vertebrado' && W2[100] =='mamifiro' && W3[100] == 'onivoro' )
    {
        printf("homem\n");
    }

    if(W1[100] == 'vertebrado' && W2[100] =='mamifiro' && W3[100] == 'herbivoro' )
    {
        printf("vaca\n");
    }

    if(W1[100] == 'invertebrado' && W2[100] =='inseto' && W3[100] == 'hematofago' )
    {
        printf("pulga\n");
    }

    if(W1[100] == 'invertebrado' && W2[100] =='inseto' && W3[100] == 'herbivoro' )
    {
        printf("lagarta\n");
    }

    if(W1[100] == 'invertebrado' && W2[100] =='anelideo' && W3[100] == 'hematofago' )
    {
        printf("sanguessuga\n");
    }

    if(W1[100] == 'invertebrado' && W2[100] =='anelideo' && W3[100] == 'onivoro' )
    {
        printf("minhoca\n");
    }
    return 0;
}