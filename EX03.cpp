#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, d[100], quant;
	float soma;
	soma=0;
	
	system("color B");
	
	printf("Quantos n�meros ser�o somados: ");
	scanf("%d", &quant);
	for(i = 0; i < quant; i++){
		printf("Digite o %d� n�mero: ", i+1);
		scanf("%d", &d[i]);
		fflush(stdin);
		soma = soma + d[i];  
	}
	printf("O total ficou: %.1f", soma);
	
	return 0;
}
