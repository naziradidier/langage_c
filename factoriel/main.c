#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    int factoriel = 1;
    int i ;
    printf("saisir un nombre: ");
    scanf("%d" , &A);

    for ( i = A ; i > 1 ; i--) {
       factoriel = factoriel * i ;

    }
    printf("resultat est: %d" , factoriel);
    return 0;
}
