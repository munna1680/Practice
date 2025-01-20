#include <stdio.h>

int main() {
    int iH, iM, fH, fM;
    int durationHours, durationMinutes;

    scanf("%d %d %d %d", &iH, &iM, &fH, &fM);

    int startTotalMinutes = iH * 60 + iM;
    int endTotalMinutes = fH * 60 + fM;

    int durationTotalMinutes;
    if (endTotalMinutes > startTotalMinutes) 
    {
        durationTotalMinutes = endTotalMinutes - startTotalMinutes;
    } 
    
    else 
    {
        durationTotalMinutes = (24 * 60 - startTotalMinutes) + endTotalMinutes;
    }

    durationHours = durationTotalMinutes / 60;
    durationMinutes = durationTotalMinutes % 60;

    if (durationHours == 0 && durationMinutes == 0) 
    {
        durationHours = 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durationHours, durationMinutes);

    return 0;
}
