#include <stdio.h>
#include <string.h>

void limparBuffer() {
    while (getchar() != '\n'); // Limpa o buffer de entrada
}

int main() {
    // Definindo as variáveis para a primeira cidade
    int codigo1;
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Definindo as variáveis para a segunda cidade
    int codigo2;
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Cadastro das Cartas
    printf("⚙️ Funcionalidades do Sistema:\n");
    printf("O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.\n");
    printf("Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.\n\n");

    printf("📥 Entrada de Dados:\n");

    // Primeira cidade
    printf("Primeira cidade: \n");

    // Leitura do código da cidade
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo1);
    limparBuffer();

    // Leitura do nome da cidade
    printf("Digite o nome da cidade: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    // Leitura da população
    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao1);
    limparBuffer();

    // Leitura da área da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    limparBuffer();

    // Leitura do PIB
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);
    limparBuffer();

    // Leitura dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    limparBuffer();

    // Cálculos para a primeira cidade
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais

    // Segunda cidade
    printf("\nSegunda cidade: \n");

    // Leitura do código da cidade
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo2);
    limparBuffer();

    // Leitura do nome da cidade
    printf("Digite o nome da cidade: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    // Leitura da população
    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao2);
    limparBuffer();

    // Leitura da área da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    limparBuffer();

    // Leitura do PIB
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);
    limparBuffer();

    // Leitura dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    limparBuffer();

    // Cálculos para a segunda cidade
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB para reais

    // 📤 Saída de Dados
    printf("\n📤 Saída de Dados:\n");

    // Dados da primeira cidade
    printf("\nCarta 1:\n");
    printf("Código: %d\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Dados da segunda cidade
    printf("\nCarta 2:\n");
    printf("Código: %d\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}