#include<stdio.h>
#include<string.h>

int main(void)
{
    char texto[30]; // Array de string

    printf("Digite a string:");
    scanf("%s", texto);

    printf("Acessando e imprimindo caracter a caracter da string.\n");
    for(int i = 0, tamanho_string = strlen(texto); i < tamanho_string; i++)
    {
        printf("%c\n", texto[i]);
    }
}