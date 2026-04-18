#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1 [40], estado2 [40];
    char codigo1 [3], codigo2 [3];
    char cidade1 [40], cidade2[40];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;
  // Área para entrada de dados
  //Carta 1
  printf ("Informe os dados da primeira carta\n");
  printf ("Informe o nome do estado: \n");
  scanf ("%s", estado1);
  printf ("Informe o código do estado: \n");
  scanf ("%s", codigo1);
  printf ("Informe o nome da cidade: \n");
  scanf ("%s", cidade1);
  printf ("Informe a população da cidade: \n");
  scanf ("%d", &populacao1);
  printf ("Informe a área da cidade: \n");
  scanf ("%f", &area1);
  printf ("Informe o PIB da cidade: \n");
  scanf ("%f", &pib1);
  printf ("Informe o número de pontos turísticos da cidade: \n");
  scanf ("%d", &turismo1);

    //Carta 2
  printf ("Informe os dados da segunda carta\n");
  printf ("Informe o nome do estado: \n");
  scanf ("%s", estado2);
  printf ("Informe o código do estado: \n");
  scanf ("%s", codigo2);
  printf ("Informe o nome da cidade: \n");
  scanf ("%s", cidade2);
  printf ("Informe a população da cidade: \n");
  scanf ("%d", &populacao2);
  printf ("Informe a área da cidade: \n");
  scanf ("%f", &area2);
  printf ("Informe o PIB da cidade: \n");
  scanf ("%f", &pib2);
  printf ("Informe o número de pontos turísticos da cidade: \n");
  scanf ("%d", &turismo2);

  // Área para exibição dos dados da cidade
  //Carta 1
  printf ("Resultado da primeira carta");
  printf ("Estado: %s - Código: %s\n", estado1, codigo1);
  printf ("Cidade: %s - População: %d\n", cidade1, populacao1);
  printf ("Área: %.2f\n", area1);
  printf ("PIB: %.2f\n", pib1);
  printf ("Pontos Turísticos: %d\n", turismo1);

  //Carta 2
  printf ("Resultado da segunda carta");
  printf ("Estado: %s - Código: %s\n", estado2, codigo2);
  printf ("Cidade: %s - População: %d\n", cidade2, populacao2);
  printf ("Área: %.2f\n", area2);
  printf ("PIB: %.2f\n", pib2);
  printf ("Pontos Turísticos: %d\n", turismo2);
  
return 0;
} 
