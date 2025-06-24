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
    //int carta1; 
    int populacao1;
    int pib1;
    int pontos_turisticos1; 
    float area1;

         //Início do jogo
         printf("\nseja bem vindo ao jogo de Cartas Super trunfo\n");
         
         // leitura de dados da carta 01
         printf("\n---Cadastro da carta 01--- \n");
         printf("Digite o nome da cidade: \n");
         fgets(cidade1, 30, stdin);
         printf("A - RN\nB - CE\nC - PE\nD - SP\nE - RJ\nF - MG\nG - RS\nH - PR\n");
         printf("Estado (A-H): ");  //a esolha do A ao H representa os 8 estados 
         scanf("%s", &letra1);
         
         printf("Código da Carta escolhida: \n");
         scanf("%s", &codigo1);

         //printf("Digite o nome da cidade: \n");
         //fgets(cidade1, 30, stdin);

         printf("Tamanho populacional: \n");
         scanf("%c", &populacao1);

    
     
         
     return 0;
}
