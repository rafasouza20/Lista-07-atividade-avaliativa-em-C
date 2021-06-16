#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, alunos;
	float notas[50];
	
	system("color B");
	
	printf("Quantos alunos ser�o avaliados: ");
	scanf("%d", &alunos);
	for(i = 0; i < alunos; i++){
		printf("Informe a nota do aluno[%d]: ", i+1);
		scanf("%f", &notas[i]);		
	}
	printf("\n");
	system("pause");
	system("cls");
	for(i = 0; i < alunos; i++){
		printf("O aluno[%d] ficou: |%.2f| na nota final\n", i+1, notas[i]);
	}
	
	return 0;
}
    
    
