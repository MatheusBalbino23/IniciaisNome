#include<stdio.h>

int main(){

    char nome[30];
    int i;
    
	printf("Digite seu nome: ");
    gets(nome);
    
    printf("As iniciais do seu nome eh ");
    
	for (i = 0; nome[i]!='\0'; i++) {
    	if (nome[i] == 'a' || nome[i] == 'A');
        	if (nome[i] != ' ' && (i == 0 || nome[i - 1] == ' ')) 
				printf("%c.", nome[i]);
    }

	return 0;
}

