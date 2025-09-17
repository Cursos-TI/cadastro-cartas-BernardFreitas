#include <stdio.h>

int main() {
  // Variáveis da Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  //Variáveis da Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  //Entrada da Carta 1
  printf("Cadastro da Carta 1\n");
  printf("Informe o Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Informe o codigo da Carta (ex: A01): ");
  scanf("%3s", codigo1);

  printf("Informe o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade1);

  printf("Informe a Populacao: ");
  scanf("%f", &area1);

  printf("Informe a Area (km2): ");
  scanf("%f", &area1);

  printf("Informe o PIB (bilhoes de reais): ");
  scanf("%f", &pib1);

  printf("Informe o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  //Exibição da Carta 1
  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("numero de Pontos Turisticos: %d\n", pontosTuristicos1);

  //Entrada da Carta 2
  printf("\nCadastro da Carta 2\n");
  printf("Informe o Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Informe o codigo da Carta (ex: A01): ");
  scanf(" %3s", codigo2);

  printf("Informe o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Informe a Populacao: ");
  scanf("%d", &populacao2);

  printf("Informw a Area (km2): ");
  scanf("%f", &area2);

  printf("Informe o PIB (bilhoes de reais): ");
  scanf("%f", &pib2);

  printf("Informe o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  //Exibição da Carta 2
  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

  return 0;
}

