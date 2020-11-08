#include <stdio.h>
#include <math.h>
#define PI 3.141592

void multQuatro() {
    int x = 0;
    scanf("%d", &x);
    if (x % 4 == 0) {
        printf("divisivel por 4");
    }else {
        printf("nao e divisivel por 4");
    }
}

int multquatroRetorno(int x){
    if (x % 4 == 0) {
        return printf("divisivel por 4");
    }else {
        return printf("nao e divisivel por 4");
    }

}

void parImpar() {
    int x = 0;
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("o numero %d inserido eh par", x);
    }
    else {
        printf("o numero %d inserido eh impar", x);
    }
}

int parimparRetorno(int x){
    if (x % 2 == 0) {
        return printf("o numero %d inserido eh par", x);
    }
    else {
        return printf("o numero %d inserido eh impar", x);
    }
}

void somaNum() {
    int i, x, y, soma=0;

    printf("Digite os 2 numeros a terem seus intervalos somados: \n");
    scanf("%d %d", &x, &y);

    if(x == y){
        printf("\n Os dois numeros inseridos sao identicos, tente novamente");
        somaNum();

    }else{
        for(i = x; i <= y; i++){
            printf("%d\n", i);
            soma+=i;
        }
    }

    printf("\n A soma dos intervalos de %d e %d: %d\n", x, y, soma);
}

int somanumRetorno(int i, int x, int y, int soma){
    if(x == y){
        return printf("\n Os dois numeros inseridos sao identicos, tente novamente");
    }else{
        for(i = x; i <= y; i++){
            printf("%d\n", i);
            soma+=i;
        }
    }

    return printf("\n A soma dos intervalos de %d e %d: %d\n", x, y, soma);
}

void raioEsfera() {
    float r;
    printf("Digite o valor do raio");
    scanf("%f", &r);
    r = pow(r, 3);
    float formula = (4 * PI * r) / 3;
    printf("O volume de sua esfera eh %f", formula);
}

float raioesferaRetorno(float r, float formula){
    r = pow(r, 3);
    formula = (4 * PI * r) / 3;
    return printf("O volume de sua esfera eh %f", formula);
}

void fatorialNatural() {
    int fat, x;
    printf("\ndigite o numero natural a ter o seu fatorial calculado\n");
    scanf("%d", &x);
    /*if (x > 0) {
        printf("numero natural inserido corretamente");
    }
    else {
        printf("infelizmente voce falhou");
        exit(73);
    }*/

    for (fat = 1; x > 1; x = x - 1) {
        fat = fat * x;
    }

    printf("o fatorial de %d eh %d", x, fat);

}

int fatorialnaturalRetorno(int fat, int x){
    for (fat = 1; x > 1; x = x - 1) {
        fat = fat * x;
    }

    return printf("o fatorial de %d eh %d", x, fat);
}

void baseExpoente() {
    int base, expoente, operacao = 1, i;

    scanf("%d %d", &base, &expoente);
    for (i = 0; i < expoente; i++){
        operacao *= base;
        if ( expoente == 0) {
            operacao = 1;
        }
    }
    printf("\n resultado -> %d", operacao);

}

int baseexpoenteRetorno(int base, int expoente, int operacao, int i){
    operacao = 1;
    for (i = 0; i < expoente; i++){
        operacao *= base;
        if ( expoente == 0) {
            operacao = 1;
        }
    }
    return printf("\n resultado -> %d", operacao);

}
int main() {
    int resposta, continuar = 1, quatro, num = 0, soma = 0, num1, num2, i, fatc, fat, base, expoente, operacao;
    float raio, formula;

    while(continuar > 0){
        printf("\n ---------------------------\n");
        printf("\n Exercicios 1 a 6 do tipo void\n");
        printf("\n ---------------------------\n");
        printf("\n Exercicios 7 a 12 do tipo retorno com parametro\n");
        printf("\n ---------------------------\n");
        scanf("%d", &resposta);
        switch (resposta) {
            case 1:
                printf("\n Leia um numero inteiro e informe se o numero e ou nao o multiplo de 4");
                multQuatro();
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;
            case 2:
                printf("\n Leia um numero inteiro, verifique e apresente se o numero eh par ou impar");
                parImpar();
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;

            case 3:
                printf("Leia 2 numeros inteiros positivos e apresente a soma dos n numeros existentes entre eles");
                printf("Incluindo os limites do intervalo, por exemplo, para 5 e 8: 5+6+7+8\n");
                somaNum();
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;

            case 4:
                printf("Leia o raio de uma esfera e arpesente o seu volume(4 pi R3 /3)");
                raioEsfera();
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;

            case 5:
                printf("Leia um numero fatorial, calcule e apresente o seu fatorial");
                fatorialNatural();
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;
            case 6:
                printf("Leia a base e o expoente de dois numeros e apresente sua potencia");
                baseExpoente();
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;
            case 7:
                printf("Digite um valor a ser verificado sua multiplicidade");
                scanf("%d", &quatro);
                multquatroRetorno(quatro);
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;
            case 8:
                printf("Digite um valor a ser verificado sua paridade");
                scanf("%d", &num);
                parimparRetorno(num);
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;
            case 9:
                printf("Digite os 2 numeros a terem seus intervalos somados: \n");
                scanf("%d %d", &num1, &num2);
                somanumRetorno(i, num1, num2, soma);
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;
            case 10:
                printf("Digite o valor do raio");
                scanf("%f", &raio);
                raioesferaRetorno(raio, formula);
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;
            case 11:
                printf("\ndigite o numero natural a ter o seu fatorial calculado\n");
                scanf("%d", &fat);
                fatorialnaturalRetorno(fatc, fat);
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;
            case 12:
                printf("\nDigite a base e o expoente nessa ordem a serem calculados\n");
                scanf("%d %d", &base, &expoente);
                baseexpoenteRetorno(base, expoente, operacao, i);
                printf("\n Deseja continuar a execucao?\n");
                scanf("%d", &continuar);
                break;

        }
    }
}











