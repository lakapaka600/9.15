#include <stdio.h>
float retta(float m,float x,float q , float y) {
    if(y=m*x+q) {
    return 1;
}
    else {
        return 0;
}
}


int main(void) {
    float m,x,q,y;
    printf("inserisci la ma:");
    scanf("%f",&m);
    printf("inserisci la  x:");
    scanf("%f",&x);
    printf("inserisci q:");
    scanf("%f",&q);
    printf("inserisci y:");
    scanf("%f",&y);
    if(retta(m,x,q,y)==1) {
        printf("il punto appartiene alla retta");

    }
    else {
        printf("il punto appartiene non retta");
    }
    return 0;
}
