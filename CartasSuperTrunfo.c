#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Nayara

int main() {

    Printf ("Desafio Super Trunfo\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
int carta1;
char estado; // single character for state input
char codigo[8][4] = { "A01", "B02", "C03", "D04", "E05", "F06", "G07", "H08" }; // array of codes for each state
char cidade[15];
int populacao;
float area; // area in KM
float pib; // PIB in R$
int pontos;
int carta2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
printf ("Carta1:\n");   

printf("Digite o Estado:\n");
scanf(" %c", &estado);
printf("Estado: %c\n", estado);


printf("Digite o Código:\n");
scanf("%s", &codigo);
printf("Código: %c%s\n", estado, codigo);

printf("Digite o Nome da Cidade:\n");
 getchar(); // Limpa o buffer do teclado
    fgets(cidade, 15, stdin);
    cidade[strcspn(cidade, "\n")] = 0;
printf("Nome da Cidade: %s\n", cidade);

printf("Digite a população:\n");
scanf("%d", &populacao);
printf("População: %d\n", populacao);

printf("Digite o tamanho da área:\n");
scanf("%f", &area);
printf("Área: %.2f KM²\n", area);

printf("Digite o PIB:\n");
scanf("%f", &pib);
printf("PIB: %.2f bilhões de reais\n", pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontos);
printf("Número de Pontos Turísticos: %d\n", pontos);

    printf ("Carta2:\n");

    printf("Digite o Estado:\n");
scanf(" %c", &estado);
printf("Estado: %c\n", estado);


printf("Digite o Código:\n");
scanf("%s", &codigo);
printf("Código: %c%s\n", estado, codigo);

printf("Digite o Nome da Cidade:\n");
 getchar(); // Limpa o buffer do teclado
    fgets(cidade, 15, stdin);
    cidade[strcspn(cidade, "\n")] = 0;
printf("Nome da Cidade: %s\n", cidade);

printf("Digite a população:\n");
scanf("%d", &populacao);
printf("População: %d\n", populacao);

printf("Digite o tamanho da área:\n");
scanf("%f", &area);
printf("Área: %.2f KM²\n", area);

printf("Digite o PIB:\n");
scanf("%f", &pib);
printf("PIB: %.2f bilhões de reais\n", pib);

printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontos);
printf("Número de Pontos Turísticos: %d\n", pontos);



    return 0;

}    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
