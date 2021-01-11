#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*float maths;
    float frs;
    float svt;
    float ang;
    float pc;
    float somme;
    float moyenne;
    printf("entrer le maths: ");
    scanf("%f", &maths);
    printf("entrer le pc: ");
    scanf("%f", &pc);
    printf("entrer le svt: ");
    scanf("%f", &svt);
    printf("entrer le frs: ");
    scanf("%f", &frs);
    printf("entrer le ang: ");
    scanf("%f", &ang);
    maths = maths * 4;
    pc = pc * 4;
    ang = ang * 2;
    frs = frs * 2;
    svt = svt * 4;
    somme = maths + frs + pc + ang + svt;
    moyenne = somme / 16;
    printf ("maths est: %f\n" , maths);
    printf ("pc est: %f\n" , pc);
    printf ("svt est: %f\n" , svt);
    printf ("frs est: %f\n" , frs);
    printf ("ang est: %f\n" , ang);
    printf ("moyenne est: %f\n" , moyenne);*/

    float notes[5];
    float coef[5];
    coef[0] = 4;
    coef[1] = 4;
    coef[2] = 4;
    coef[3] = 2;
    coef[4] = 2;
    float notecoef[5];
    float somme = 0;
    float sommecoef = 0;
    float moyenne;
    int i;
    for (i = 0 ; i<=4 ; i++) {
        printf("saisir le note %d: ", i + 1);
        scanf("%f" , &notes[i]);
    }
    for (i= 0 ; i<=4 ; i++) {
        notecoef[i] = notes[i] * coef[i];
    }
    for (i= 0 ; i<=4 ; i++ ) {
            somme = somme + notecoef[i];

    }

    for (i= 0 ; i<=4 ; i++ ) {
        sommecoef = sommecoef + coef[i];

    }
    moyenne = somme / sommecoef;
    printf("la moyenne est : %f", moyenne);



    return 0;
}
