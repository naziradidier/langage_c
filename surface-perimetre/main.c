#include <stdio.h>
#include <stdlib.h>

int main()
{
    float L;
    float l;
    float surface;
    float perimetre;
    printf("donner la valeur de la longueur: ");
    scanf("%f", &L);
    printf("donner la valeur de la largeur: ");
    scanf("%f", &l);
    surface = L*l;
    perimetre = (L+l)*2;
    printf("surface est: %f\n", surface);
    printf("perimetre est: %f", perimetre);
    return 0;
}
