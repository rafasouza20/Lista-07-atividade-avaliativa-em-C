#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
   int notas[30];
	
	for(int i = 1;i <= 31;i++){
		
	  printf("Digite a %dª nota: ", i);
	  scanf("%d",&notas[i]);
	}
	
	
	return 0;
}
