#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, alunos;
	float notas[50];
	
	system("color B");
	
	printf("Quantos alunos serão avaliados: ");
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
    
    
