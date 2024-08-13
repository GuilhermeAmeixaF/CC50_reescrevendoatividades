#include<stdio.h>
#include<string.h>

int main(void)
{

    char texto[20];
    printf("Digite a string:");
    //scanf("%s", texto); ao identificar um espaço scanf  para de receber dados
    
    gets(texto); // Array de string

    printf("Acessando e imprimindo caracter a caracter da string.\n");
    for(int i = 0, tamanho_string = strlen(texto); i < tamanho_string; i++)
    {
        printf("%c\n", texto[i]);
    }
}