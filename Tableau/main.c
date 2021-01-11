#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notes[4];
    notes[0] = 10;
    notes[1] = 10;
    notes[2] = 10;
    notes[3] = 10;
    int moyenne;
    int somme = 0;
    int i;

    for (i = 0 ; i<= 3; i++) {

        somme = somme + notes[i];
         /*produit = produit * notes[i];*/
        printf("les notes %d est: %d\n", i + 1, notes[i]);
    }

    moyenne = somme / 4;
    printf("la moyenne est: %d\n" , moyenne);


    return 0;
}
