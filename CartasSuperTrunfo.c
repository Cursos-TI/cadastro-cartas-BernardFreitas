#include <stdio.h>

int main() {
  // Variáveis da Carta 1
  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  //Variáveis da Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
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
  scanf("%lu", &populacao1);

  printf("Informe a Area (km2): ");
  scanf("%f", &area1);

  printf("Informe o PIB (bilhoes de reais): ");
  scanf("%f", &pib1);

  printf("Informe o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos1);

  //Cálculo da Carta 1
  float densidade1 = populacao1 / area1;
  float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

  //Exibição da Carta 1 com cálculo
  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %lu\n", populacao1);
  printf("Area: %.2f km2\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("Pib per Capita: %.2f reais\n", pibPerCapita1);

  //Entrada da Carta 2
  printf("\nCadastro da Carta 2\n");
  printf("Informe o Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Informe o codigo da Carta (ex: A01): ");
  scanf(" %3s", codigo2);

  printf("Informe o Nome da Cidade: ");
  scanf(" %[^\n]", nomeCidade2);

  printf("Informe a Populacao: ");
  scanf("%lu", &populacao2);

  printf("Informw a Area (km2): ");
  scanf("%f", &area2);

  printf("Informe o PIB (bilhoes de reais): ");
  scanf("%f", &pib2);

  printf("Informe o Numero de Pontos Turisticos: ");
  scanf("%d", &pontosTuristicos2);

  //Cálculos da Carta 2
  float densidade2 = populacao2 / area2;
  float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  //Exibição da Carta 2 com cálculo
  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %lu\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  //Cálculo do Super Poder
  float superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
  float superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

  //Comparações
  int vitoriaPopulacao = populacao1 > populacao2;
  int vitoriaArea = area1 > area2;
  int vitoriaPib = pib1 > pib2;
  int vitoriaPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  int vitoriaDensidade = densidade1 < densidade2; //Menor densidade vence
  int vitoriaPibPerCapita = pibPerCapita1 > pibPerCapita2;
  int vitoriaSuperPoder = superPoder1 > superPoder2; 

  //Exibição dos resultados das comparações
  printf("\nComparação de Cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", vitoriaPopulacao);
  printf("Área: Carta 1 venceu (%d)\n", vitoriaArea);
  printf("PIB: Carta 1 venceu (%d)\n", vitoriaPib);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vitoriaPontosTuristicos);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", vitoriaDensidade);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", vitoriaPibPerCapita);
  printf("Super Poder: Carta 1 venceu (%d)\n", vitoriaSuperPoder);

  return 0;
}

