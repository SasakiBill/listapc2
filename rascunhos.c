#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

void multQuatro() {
	int x = 0;
	scanf_s("%d", &x);
	if (x % 4 == 0) {
		printf("divisivel por 4");
	}else {
		printf("nao e divisivel por 4");
	}
}

void parImpar() {
	int x = 0;
	scanf_s("%d", &x);
	if (x % 2 == 0) {
		printf("o numero %d inserido eh par", x);
	}
	else {
		printf("o numero %d inserido eh impar", x);
	}
}

void somaNum() {
	int x = NULL, y;
	printf("Digite 2 numeros inteiros a terem suas somas apresentadas\n");
	scanf_s("%d %d", & x, & y);
	/*if (x == (int)x) {
		printf("Entrada valida\n");
	}else {
		printf("entrada invalida, programa foi encerrado\n");
		exit(1);
	}*/
	int resultado = x;
	int resultadoPassado = x;
	
	do{
		resultado += 1;
		printf("%d + %d\n", resultadoPassado, resultado);
		resultadoPassado = resultado;

	} while (resultado < y);
}

void raioEsfera() {
	float r;
	printf("Digite o valor do raio");
	scanf_s("%f", &r);
	r = pow(r, 3);
	float formula = (4 * PI * r) / 3;
	printf("O volume de sua esfera eh %f", formula);
}

void fatorialNatural() {
	int fat, x;
	printf("\ndigite o numero natural a ter o seu fatorial calculado\n");
	scanf_s("%d", &x);
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

int main() {
	printf("\n Leia um numero inteiro e informe se o numero e ou nao o multiplo de 4");
	multQuatro();

	printf("\n Leia um numero inteiro, verifique e apresente se o numero eh par ou impar");
	parImpar();

	printf("Leia 2 numeros inteiros positivos e apresente a soma dos n numeros existentes entre eles");
	printf("Incluindo os limites do intervalo, por exemplo, para 5 e 8: 5+6+7+8\n");
	somaNum();

	printf("Leia o raio de uma esfera e arpesente o seu volume(4 pi R3 /3)");
	raioEsfera();

	printf("Leia um numero fatorial, calcule e apresente o seu fatorial");
	fatorialNatural();

}
