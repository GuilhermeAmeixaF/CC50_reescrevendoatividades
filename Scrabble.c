#include<stdio.h>
#include<string.h>

/* Jogo proposto onde 2 jogadores escolhem uma palavra ou nome respectivamente e baseado na complexidade
   do nome ou palavra o jogador recebe uma pontuação.*/

  int POINTS[] = {1, 3, 3, 2, 1, 4, 2,
   4, 1, 8, 5, 1, 3, 1,
    1, 3, 10, 1, 1, 1,
     1, 4, 4, 8, 4, 10}; // ARRAY DE PONTOS

   // FUNÇÕES
   int compute_score(char word[21]); // Função que irá calcular pontos da palavra
   char upper_string(char word[]);; // UPPER STRING
 int main(void)
 {
   // SOLICITAR AS PALAVRAS AO USUÁRIOS -----------------------------------------------------
   // DECLARA OS DOIS JOGADORES - paralavra pode contar no máximo 21 caracter
   char jogador1[21];
   char jogador2[21];

   printf("Jogador1 : ");
   gets(jogador1);

   printf("Jogador2 : ");
   gets(jogador2);

   int p1, p2; // Pontuações dos jogadores.
   jogador1 = upper_string(jogador1);
   p1 = compute_score(jogador1);

 }

 int compute_score(char word[21])
 {
   int pontuacao = 0;
    
   for(int i = 0, tam_palavra = strlen(word); i < tam_palavra; i++)
   {
      if( word[i] >= 65 && word[i] <= 90)
      {
         pontuacao += POINTS[(word[i] - 65)] ; // 65 é o primeiro caracter da tabela ascii ao subtrair ele o caracter passa a correlacionar ao primeiro valor do array POINTS
      }
   }

   return pontuacao;
 }

// Função para capitalizar toda a palavra. -------------------
 char upper_string (char word[])
 {
   int tam_palavra = strlen(word);
   for (int i=0; i < tam_palavra; i++)
   {
      word[i] = toupper(word[i]);
   }

   return word;

 }