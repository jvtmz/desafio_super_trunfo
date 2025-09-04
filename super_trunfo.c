/*Exercício de desafio Super Trunfo.
Nesse desafio criarei o início para a base dos dados a serem utilizados em um jogo no estilo Super Trunfo.
Nesse primeiro desafio, foi solicitado um pequeno sistema que permita um usuário inserir alguns dados sobre os tópicos: Estado; Cód da Carta; Nome da Cidade; População; Área em KM2;
PIB e Núm. de Pontos Turísticos.
Nesse primeiro momento deverei apresentar apenas a composição para preenchimento de dados para duas cartas.
O código deverá está devidamente formatado e comentado, de forma clara e que permita futuras análise e manuteções de forma clara e facilitada.

- João Victor Porangaba 
- Ciência da Computação
- Universidade Estácio
*/

// Primeiro passo - Importação da bibioteca a ser utilizada e abertura da função "main" e sua respectiva "{"
#include <stdio.h>
int main(){

/*Segundo passo - Determinação das variáveis a serem uilizadas no sistema. 
Por serem poucas variáveis as deixei separadas, contudo elas podem ser agrupadas por tipos, desde que separadas por "," e ";" o tipo de variável.
*/
char estado1[20];
char codigo_da_carta1[20];
char cidade1[20];
int populacao1;
float area1;
double pib1;
int pontos_turisticos1;

char estado2[20];
char codigo_da_carta2[20];
char cidade2[20];
int populacao2;
float area2;
double pib2;
int pontos_turisticos2;

// Terceiro passo - Apresentação do sistema ao usuário pela função printf
    printf("Olá, seja bem vindo ao jogo Super Trunfo Cidades.\nNesse momento estamos cadastrando os dados das respectivas cartas utilizadas no jogo.\n\n\nPor favor, digite os dados abaixo conforme solicitados. \n\n");

// Quarto Passo - Início da solictação dos dados para preenchimento pelo usuário  - conjunto 1
    printf("Digite o Estado:\n ");
    scanf("%s", estado1);
    printf("Confirmado! O Estado é: %s \n\n", estado1);
    
    printf("Digite o código da respectiva carta (ex.: A01):\n");
    scanf("%s", codigo_da_carta1);
    printf("Confirmado! Código da carta: %s \n\n", codigo_da_carta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Confirmado! A cidade é: %s \n\n", cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao1);
    printf("Confirmado! A população da cidade é de: %d pessoas. \n\n", populacao1);

    printf("Digite a área da cidade em Km2 (utilize pontos para representar decimais): \n");
    scanf("%f", &area1);
    printf("Confirmado! A área da cidade é de: %.2f KM2. \n\n", area1);

    printf("Digite o PIB (Produto Interno Bruto) da cidade (utilize pontos para representar decimais): \n");
    scanf("%lf", &pib1);
    printf("Confirmado! O PIB da cidade é de: R$ %.2f reais. \n\n", pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos1);
    printf("Confirmado! O número de pontos turísticos da cidade é de: %d pontos turísticos. \n\n\n", pontos_turisticos1);

// Quinto passo - mensagem de encerramento parcial o cadastro e apresentação dos dados cadastrados
    printf("Cadastro da carta 1 concluído.\n");
    printf("Estado: %s\nCódigo da Carta: %s\nCidade: %s\nPopulação: %d pessoas\nÁrea: %.2f KM2\nPIB: R$ %.2f reais\nNúmero de Pontos Turísticos: %d pontos turísticos\n\n\n\n",estado1,codigo_da_carta1,cidade1,populacao1,area1,pib1,pontos_turisticos1);

// Sexto passo - Início da solictação dos dados para preenchimento pelo usuário  - conjunto 2
    printf("Digite o Estado:\n ");
    scanf("%s", estado2);
    printf("Confirmado! O Estado é: %s \n\n", estado2);
    
    printf("Digite o código da respectiva carta (ex.: A01):\n");
    scanf("%s", codigo_da_carta2);
    printf("Confirmado! Código da carta: %s \n\n", codigo_da_carta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Confirmado! A cidade é: %s \n\n", cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("Confirmado! A população da cidade é de: %d pessoas. \n\n", populacao2);

    printf("Digite a área da cidade em Km2 (utilize pontos para representar decimais): \n");
    scanf("%f", &area2);
    printf("Confirmado! A área da cidade é de: %.2f KM2. \n\n", area2);

    printf("Digite o PIB (Produto Interno Bruto) da cidade (utilize pontos para representar decimais): \n");
    scanf("%lf", &pib2);
    printf("Confirmado! O PIB da cidade é de: R$ %.2f reais. \n\n", pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Confirmado! O número de pontos turísticos da cidade é de: %d pontos turísticos. \n\n\n", pontos_turisticos2);

// Setimo passo - mensagem de encerramento parcial o cadastro e apresentação dos dados cadastrados
    printf("Cadastro da carta 2 concluído.\n");
    printf("Estado: %s\nCódigo da Carta: %s\nCidade: %s\nPopulação: %d pessoas\nÁrea: %.2f KM2\nPIB: R$ %.2f reais\nNúmero de Pontos Turísticos: %d pontos turísticos\n\n\n\n",estado2,codigo_da_carta2,cidade2,populacao2,area2,pib2,pontos_turisticos2);

// Oitavo passo - Mensagem de encerramento e apresentação final de todos os dados cadastrados pelo usuário
    printf("Parabéns,todos os dados cadastrados!\n\nOs dados cadastrados ficaram organizados da seguinte forma:\n");
    printf("CARTA 1:\nEstado: %s\nCódigo da Carta: %s\nCidade: %s\nPopulação: %d pessoas.\nÁrea: %.2f metros quadrados.\nPIB: %.2f reais.\nNúmero de Pontos Turísticos: %d pontos turísticos.\n\n\n",estado1,codigo_da_carta1,cidade1,populacao1,area1,pib1,pontos_turisticos1);
    printf("CARTA 2:\nEstado: %s\nCódigo da Carta: %s\nCidade: %s\nPopulação: %d pessoas.\nÁrea: %.2f metros quadrados.\nPIB: %.2f reais.\nNúmero de Pontos Turísticos: %d pontos turísticos.\n\n\n\n",estado2,codigo_da_carta2,cidade2,populacao2,area2,pib2,pontos_turisticos2);
    printf("Muito obrigado por utilizar nosso sistema.\nAté a próxima!\n\n\n\n\n");
    
return 0;
}
