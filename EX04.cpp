#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, NL; // contador e numero de letras
	char letra[30]; // limite de 30
	
	system("color B");
	
	printf("Serão quantas letras? ");
	scanf("%d", &NL);
	fflush(stdin);
	for(i = 1; i <= NL; i++){
		printf("\ndigite a letra: ");
		scanf("%c", &letra[i]);	
	}
	for(i = NL; i >= 1; i--){
		printf("%c\t", letra[i]);
	}
	return 0;
}
