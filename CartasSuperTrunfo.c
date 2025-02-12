#include <stdio.h>

int main() {
    // Definindo as variáveis para os atributos das cidades
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Cadastro das Cartas
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo); // Lê o código da cidade

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // le o nome da cidade %=string, []=como se fosse uma lista ^=nao parar ate encontrar uma nova linha
                            

    printf("digite o numero da população da cidade:");
    scanf("%d",&populacao) // le a população

    printf("digite a area da cidade (em km²):");
    scanf("%f",&area); // Lê a área da cidade

    printf("digite o pib da cidade:");
    scanf("%f", &pib);  // Lê o PIB da cidade

    printf("digite a quantidade de pontos turisticos:");
    scanf("%d", &pontos_turisticos); //Lê o número de pontos turísticos

    //exibição dos dados das cartas
    printf("\ndados da cidade cadastrada: \n");
    printf("codigo:%d\n", codigo);
    printf("nome: %s\n",nome);
    printf("populacao:%d\n",populacao);
    printf("area:%.2f km²\n", area);
    printf("pib: %.2f bilhoes \n", pib);
    printf("pontos turisticos:%.2f\n", pontos_turisticos);
return 0;
}