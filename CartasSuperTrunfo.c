#include <stdio.h>
#include <string.h>

void limparBuffer() {
    while (getchar() != '\n'); // Limpa o buffer de entrada
}

int main() {
    // Definindo as variáveis para os atributos das cidades
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    // Cadastro das Cartas
    printf("⚙️ Funcionalidades do Sistema:\n");
    printf("O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.\n");
    printf("Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.\n\n");

    printf("📥 Entrada de Dados:\n");

    // Leitura do código da cidade
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo); // Lê o código da cidade
    limparBuffer(); // Limpa o buffer de entrada após o scanf

    // Leitura do nome da cidade
    printf("Digite o nome da cidade: ");
    fgets(nome, 50, stdin); // Usa fgets para ler o nome com espaços
    nome[strcspn(nome, "\n")] = '\0'; // Remove o '\n' do final da string

    // Leitura da população
    printf("Digite o número da população da cidade: ");
    scanf("%d", &populacao); // Lê a população
    limparBuffer(); // Limpa o buffer de entrada após o scanf

    // Leitura da área da cidade
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area); // Lê a área da cidade
    limparBuffer(); // Limpa o buffer de entrada após o scanf

    // Leitura do PIB
    printf("Digite o PIB da cidade (em milhões): ");
    scanf("%f", &pib); // Lê o PIB da cidade
    limparBuffer(); // Limpa o buffer de entrada após o scanf

    // Leitura dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos); // Lê o número de pontos turísticos
    limparBuffer(); // Limpa o buffer de entrada após o scanf

    // 📤 Saída de Dados
    printf("\n📤 Saída de Dados:\n");
    printf("Dados da cidade cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes \n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}