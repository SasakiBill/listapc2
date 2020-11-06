//Modularização  -> Funções
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//Aula 1 05/11/2020
void somaS() {
    int x;
    x = 5 + 3;
    print("%d", x);
}

int soma() {
    int a, b;
    int x;
    x = a +b;
    return x;
}

int dobro(int valor){
    return valor*2;
}

int min(int a, int b){
    if( a < b){
        return b;
    }else{
        return a;
    }
    //return (a < b? a : b);
}

void main(){
    int a, v, v1, v2, menor, totaMin= 0;

    scanf("%d%d", &v1, &v2);
    menor = min(v1, v2)
    totalMin += min(v1, v2);
    (min(v1, v2) < 0) ? printf("Minimo Negativo"): printf("Minimo Positivo");
    printf("Minimo: %d\n", min(v1, v2));

    a = soma(5, 3);
    printf("o valore retornado eh %d", a);
    scanf("%d", &v);
    printf("o dobro eh: %d\n", dobro(v)))
}