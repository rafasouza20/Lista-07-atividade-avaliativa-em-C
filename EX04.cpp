#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, NL; // contador e numero de letras
	char letra[30]; // limite de 30
	
	system("color B");
	
	printf("Ser�o quantas letras? ");
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
