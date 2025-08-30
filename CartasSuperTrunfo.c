#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Nayara

int main() {

    printf ("Desafio Super Trunfo\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
int carta1;
char estado1; // single character for state input
char codigo1[4]; // code for carta1
char cidade1[15];
int populacao1;
float area1; // area in KM
float pib1; // PIB in R$
int pontos1;


int carta2;
char estado2; // single character for state input
char codigo2[4]; // code for carta2
char cidade2[15];
int populacao2;
float area2; // area in KM
float pib2; // PIB in R$
int pontos2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

printf ("Carta1:\n");   

printf("Digite o Estado:\n");
scanf(" %c", &estado1);


printf("Digite o Código:\n");
scanf("%3s", codigo1);


printf("Digite o Nome da Cidade:\n");
 getchar(); // Limpa o buffer do teclado
    fgets(cidade1, 15, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;


printf("Digite a população:\n");
scanf("%d", &populacao1);


printf("Digite o tamanho da área:\n");
scanf("%f", &area1);


printf("Digite o PIB:\n");
scanf("%f", &pib1);


printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontos1);





printf ("Carta2:\n");

printf("Digite o Estado:\n");
scanf(" %c", &estado2);


printf("Digite o Código:\n");
scanf("%3s", codigo2);


printf("Digite o Nome da Cidade:\n");
 getchar(); // Limpa o buffer do teclado
    fgets(cidade2, 15, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;


printf("Digite a população:\n");
scanf("%d", &populacao2);


printf("Digite o tamanho da área:\n");
scanf("%f", &area2);


printf("Digite o PIB:\n");
scanf("%f", &pib2);


printf("Digite o número de pontos turísticos:\n");
scanf("%d", &pontos2);




printf ("Carta1:\n");  
printf("Estado: %c\n", estado1);
printf("Código: %c%s\n", estado1, codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f KM²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos1);

float densidade1 = populacao1 / area1;  // population density

printf("A Densidade Populacional é: %.2f hab/km²\n", densidade1);

float percapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita

printf("O PIB per Capita é: %.2f reais\n\n\n", percapita1);


printf ("Carta2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %c%s\n", estado2, codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f KM²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos2);

float densidade2= populacao2 / area2;  // population density

printf("A Densidade Populacional é: %.2f hab/km²\n", densidade2);

float percapita2 = (pib2 * 1000000000) / populacao2; // PIB per capita

printf("O PIB per Capita é: %.2f reais\n", percapita2);

    return 0;
}