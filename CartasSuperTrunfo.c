#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
/*
O que você vai fazer

Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

 
Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

O sistema permitirá ao usuário cadastrar os dados de duas cartas manualmente via terminal.
Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.
Entrada e Saída de Dados:

O usuário insere os dados de cada carta interativamente via scanf.
O programa exibe os dados cadastrados usando printf, com cada atributo em uma nova linha.
Simplificações para o Nível Novato:

Cadastre apenas duas cartas.
Concentre-se na leitura, armazenamento e exibição. Não implemente comparações ou outros recursos.
Não use laços (for, while) ou condicionais (if, else).
*/

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
    //início do código
    //variaveis para a carta 01
    char letra1;
    char codigo1[10];
    char cidade1[30];  
    int populacao1;
    int ponto_turistico1; 
    double pib1;
    float area1;


    //variaveis para a carta 02
    char letra2;
    char codigo2[10];
    char cidade2[30];  
    int populacao2;
    int ponto_turistico2; 
    double pib2;
    float area2;

         //Início do jogo
         printf("\nseja bem vindo ao jogo de Cartas Super trunfo\n");
         
         // Leitura de dados da carta 01
         printf("\n---Cadastro da carta 01--- \n");
         
         //Nome da sua cidade
         printf("Digite o nome da cidade: \n");   //ex: Natal
         fgets(cidade1, 30, stdin);
         
         //Um estado 
         printf("A - RN\nB - CE\nC - PE\nD - SP\nE - RJ\nF - MG\nG - RS\nH - PR\n");
         printf("\nEscolha um estado do A ao H\n");   //ex: Rio de Janeiro(RJ)
         
         printf("Estado (A-H): ");  //a escolha do A ao H representa os 8 estados 
         scanf("%c", &letra1);
         
         //Código da carta
         printf("A letra do estado seguida de um número de 01 a 04: \n");  //ex: B01
         scanf(" %s", codigo1);

         //A população da sua cidade
         printf("Quantidade populacional: \n");   //ex: 40000
         scanf("%d", &populacao1);

         //Pib total
         printf("Qual o valor do PIB: \n");   //ex: 20000000
         scanf("%lf", &pib1);

         //Pontos turísticos da cidade escolhida
         printf("Quantos pontos turísticos tem nessa cidade?: \n");   //ex: 10
         scanf("%d", &ponto_turistico1);

         //Aréa da sua cidade
         printf("qual o tamanho da cidade escolhida: \n");   //ex: 15000
         scanf("%f", &area1);



         // Leitura de dados da carta 02
         printf("\n---Cadastro da carta 02--- \n");
         
         //Nome da sua cidade
         printf("Digite o nome da cidade: \n");   //ex: João Pessoa
         scanf(" %[^\n]", cidade2);  // Corrigido para ler nome com espaços
         //fgets(cidade2, 30, stdin);
         
         //Um estado 
         printf("A - RN\nB - CE\nC - PE\nD - SP\nE - RJ\nF - MG\nG - RS\nH - PR\n");
         printf("\nEscolha um estado do A ao H\n");   //ex: São Paulo(SP)
         
         printf("Estado (A-H): ");  //a escolha do A ao H representa os 8 estados 
         scanf(" %c", &letra2);
         
         //Código da carta
         printf("A letra do estado seguida de um número de 01 a 04: \n");  //ex: A02
         scanf("%s", codigo2);

         //A população da sua cidade
         printf("Quantidade populacional: \n");   //ex: 60000
         scanf("%d", &populacao2);

         //Pib total
         printf("Qual o valor do PIB: \n");   //ex: 4000000
         scanf("%lf", &pib2);

         //Pontos turísticos da cidade escolhida
         printf("Quantos pontos turísticos tem nessa cidade?: \n");   //ex: 22
         scanf("%d", &ponto_turistico2);

         //Aréa da sua cidade
         printf("qual o tamanho da cidade escolhida: \n");   //ex: 2000
         scanf("%f", &area2);


         //Saída de dados da carta 01
         printf("\nDados da Carta 01\n");
         printf("Estado: %c \n", letra1);
         printf("esse será o código da sua carta: %s \n", codigo1);
         printf("Cidade: %s", cidade1);
         printf("População: %d \n", populacao1);
         printf("PIB: R$ %f \n", pib1);
         //printf("PIB: R$ %.2f \n", pib1 / 1000000000);
         printf("Pontos turísticos: %d \n", ponto_turistico1);
         printf("Tamanho da cidade: %.2f por Km^2 \n", area1);



         //Saída de dados da carta 02
         printf("\nDados da Carta 02\n");
         printf("Estado: %c \n", letra2);
         printf("esse será o código da sua carta: %s \n", codigo2);
         printf("Cidade: %s \n", cidade2);
         printf("PIB: R$ %f \n", pib2);
         printf("População: %d \n", populacao2);
        //printf("PIB: R$ %.2f \n", pib2 / 1000000000);
         printf("Pontos turísticos: %d \n", ponto_turistico2);
         printf("Tamanho da cidade: %.2f por Km^2 \n", area2);

         
     return 0;
}
