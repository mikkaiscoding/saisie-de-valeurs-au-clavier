#include <stdio.h>
int main(){
    int v;
    printf("entrez une valeur entiere : \n");
    scanf("%i", &v); //scanf = prendre la valeur tapée au clavier par l'utilisateur, qui est de type entier (car %i) et la mettre à l'adresse (&) de la variable v
    printf("on a v = %i \n", v);
    return 0;
}