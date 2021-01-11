#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{   float a;
    float b;
    float c;
    float x1;
    float x2;
    float x3;
    float delta;
    printf("saisir a: ");
    scanf("%f" , &a);
    printf("saisir b: ");
    scanf("%f" , &b);
    printf("saisir c: ");
    scanf("%f" , &c);
    delta = pow(b, 2) -  4*a*c;
    x1 = -b - sqrt(delta) / 2*a;
    x2 = -b + sqrt(delta) / 2*a;
    x3 = -b / a;
    if (delta == 0) {
        printf("solution est: %f\n" , x3);
    }
    else if( delta < 0) {
        printf("pas de solution");
    }
    else {
        printf("il existe deux solutions\n");
        printf("x1 est: %f\n" , x1);
        printf("x2 est: %f\n" , x2);
    }


    return 0;
}
