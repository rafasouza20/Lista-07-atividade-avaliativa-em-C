#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, d[100], quant;
	float soma;
	soma=0;
	
	system("color B");
	
	printf("Quantos números serão somados: ");
	scanf("%d", &quant);
	for(i = 0; i < quant; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &d[i]);
		fflush(stdin);
		soma = soma + d[i];  
	}
	printf("O total ficou: %.1f", soma);
	
	return 0;
}
