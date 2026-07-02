#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Declaração das variáveis da  carta1

  char estado1[5]; 
  char codigo1[10];  
  char cidade1[20];
  int populaçao1;
  float area1;
  float pib1;
  int pontos_turisticos1;

  // Área para entrada de dados carta 1

  printf("---CARTA 1---\n");

  printf("Estado: ");
  scanf(" %c", &estado1);

  printf("Código: ");
  scanf(" %s", codigo1);

  printf("Cidade: ");
  scanf(" %s", cidade1);

  printf("População: ");
  scanf(" %d", &populaçao1);

  printf("Área: ");
  scanf(" %f", &area1);

  printf("Pib: ");
  scanf(" %f", &pib1);

  printf("Pontos Turisticos: ");
  scanf(" %d", &pontos_turisticos1);

  // Área para exibição dos dados da cidade
  //Imprime os dados da carta 1 utilizando printf
  
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populaçao1);
  printf("Área: %f Km²\n", area1);
  printf("Pib: %f Bilhões De Reais\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos_turisticos1);  

  // Declaração das variáveis da carta2

  char estado2[5]; 
  char codigo2[10];  
  char cidade2[20];
  int populaçao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

 // Área para entrada e saida de dados carta 2

  printf("---CARTA 2---\n");

  printf("Estado: ");
  scanf(" %c", &estado2);

  printf("Código: ");
  scanf(" %s", codigo2);

  printf("Cidade: ");
  scanf(" %s", cidade2);

  printf("População: ");
  scanf(" %d", &populaçao2);

  printf("Área: ");
  scanf(" %f", &area2);

  printf("Pib: ");
  scanf(" %f", &pib2);

  printf("Pontos turisticos: ");
  scanf(" %d", &pontos_turisticos2);

 // Área para exibição dos dados da cidade
 //Imprime os dados da carta 2 utilizando printf

  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populaçao2);
  printf("Área: %f Km²\n", area2);
  printf("Pib: %f Bilhões De Reais\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos_turisticos2);

return 0;
} 
