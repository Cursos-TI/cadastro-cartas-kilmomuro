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
    float densidade1, densidade2;
    float pibperca1, pibperca2;
    float super1;
    float super2;
    int resultado;

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
  densidade1 = populacao1/area1;
  pibperca1 = pib1/populacao1;
  super1 = populacao1 + area1 + pib1 + turismo1 + pibperca1 + (1 / densidade1);
  printf ("\nResultado da primeira carta \n");
  printf ("Estado: %s - Código: %s\n", estado1, codigo1);
  printf ("Cidade: %s - População: %d\n", cidade1, populacao1);
  printf ("Área: %.2f\n", area1);
  printf ("PIB: %.2f\n", pib1);
  printf ("Pontos Turísticos: %d\n", turismo1);
  printf ("Densidade Populacional: %.2f\n", densidade1); //float
  printf ("PIB per capita: %.2f\n", pibperca1); //float
  printf ("Super Poder: %.2f\n", super1);

  //Carta 2
  densidade2 = populacao2/area2;
  pibperca2 = pib2/populacao2;
  super2 = populacao2 + area2 + pib2 + turismo2 + pibperca2 + (1 / densidade2);
  printf ("\nResultado da segunda carta \n");
  printf ("Estado: %s - Código: %s\n", estado2, codigo2);
  printf ("Cidade: %s - População: %d\n", cidade2, populacao2);
  printf ("Área: %.2f\n", area2);
  printf ("PIB: %.2f\n", pib2);
  printf ("Pontos Turísticos: %d\n", turismo2);
  printf ("Densidade Populacional: %.2f\n", densidade2); //float
  printf ("PIB per capita: %.2f\n", pibperca2); //float
  printf ("Super Poder: %.2f\n", super2);

  // Área para comparação das cartas
  if ( super1 > super2)
  {
    printf ("\nA carta 1 é a vencedora!\n");
  }
  else (super1<super2);{
    printf ("\nA carta 2 é a vencedora!\n");
  }
  
  
return 0;
} 
