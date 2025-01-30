#include <stdio.h>
int main() 
{
    int x;
    while (1) 
    {
        scanf("%d", &x);
        if (x == 0) 
        break;
        for (int i = 1; i <= x; i++) 
        {
            printf("%d%s", i, (i == x) ? "\n" : " ");
        }
    }
    return 0;
}
