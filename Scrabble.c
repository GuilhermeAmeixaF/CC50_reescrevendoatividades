#include<stdio.h>
 
 int main(void)
 {
    /* Jogo proposto onde 2 jogadores escolhem uma palavra ou nome respectivamente e baseado na complexidade
    do nome ou palavra o jogador recebe uma pontuação.*/

    // DECLARA OS DOIS JOGADORES
    char jogador1[20];
    char jogador2[20];

    printf("Jogador1 : ");
    gets(jogador1);

    printf("Jogador2 : ");
    gets(jogador2);

    char char_pontuacoes = {{'A',1},{'B',2}};
    printf("Caracter e seu valor\n %c - %i\n\n", char_pontuacoes[0][0], char_pontuacoes[0][1]);

 }