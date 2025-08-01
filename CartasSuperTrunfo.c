#include <stdio.h>

/*
O que você vai fazer
Aprimore o programa em C que você criou no nível básico. 
O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. 
A diferença é que, agora, seu programa também deve:
Calcular a Densidade Populacional: Divida a população da cidade pela sua área. 
O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. 
Armazene esse valor em uma variável do tipo float.
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 
O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. 
Armazene esse valor em uma variável do tipo float.
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. 
Formate os valores de ponto flutuante com duas casas decimais.
*/

int main() {
    //início do código
    //variaveis para a carta 01
    char letra1;
    char codigo1[10];
    char cidade1[30];  
    int pop1;   //população
    int tur1; 
    double pib1;
    float area1;
    float densid1;  //densidade populacional
    float capita1;  //PIB per capita


    //variaveis para a carta 02
    char letra2;
    char codigo2[10];
    char cidade2[30];  
    int pop2;   //população
    int tur2; 
    double pib2;
    float area2;
    float densid2;  //densidade populacional
    float capita2;  //PIB per capita


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

         //Densidade Populacional: etapa de levantamento de números
         printf("Qual o tamanho populacional da sua cidade: \n");   //ex: 40000
         scanf("%d", &pop1);

         //Pib total
         printf("Qual o valor do PIB: \n");   //ex: 20000000
         scanf("%lf", &pib1);

         //Pontos turísticos da cidade escolhida
         printf("Quantos pontos turísticos tem nessa cidade?: \n");   //ex: 10
         scanf("%d", &tur1);

         //Aréa da sua cidade
         printf("qual o tamanho da cidade escolhida: \n");   //ex: 15000
         scanf("%f", &area1);

         //Densidade populacional: etapa de calcúlo   
         densid1 = (float) pop1 / area1;   //população / área da cidade

         //PIB per capita
         capita1 = (float) pib1 / pop1;


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
         printf("Qual o tamanho populacional da sua cidade: \n");   //ex: 60000
         scanf("%d", &pop2);

         //Pib total
         printf("Qual o valor do PIB: \n");   //ex: 4000000
         scanf("%lf", &pib2);

         //Pontos turísticos da cidade escolhida
         printf("Quantos pontos turísticos tem nessa cidade?: \n");   //ex: 22
         scanf("%d", &tur2);

         //Aréa da sua cidade
         printf("qual o tamanho da cidade escolhida: \n");   //ex: 2000
         scanf("%f", &area2);

         //Densidade populacional: etapa de calcúlo   
         densid2 = (float) pop2 / area2;   //população / área da cidade

         //PIB per capita
         capita2 = (float) pib2 / pop2;


         //Saída de dados da carta 01
         printf("\nDados da Carta 01\n");
         printf("Estado: %c \n", letra1);
         printf("esse será o código da sua carta: %s \n", codigo1);
         printf("Cidade: %s", cidade1);
         printf("População: %d \n", pop1);
         printf("PIB: R$ %0.f \n", pib1);
         printf("Pontos turísticos: %d \n", tur1);
         printf("Tamanho da cidade: %.2f por Km^2 \n", area1);
         printf("Densidade populacional: %.1f \n", densid1);
         printf("PIB per capita: R$ %.2f \n", capita1);


         //Saída de dados da carta 02
         printf("\nDados da Carta 02\n");
         printf("Estado: %c \n", letra2);
         printf("esse será o código da sua carta: %s \n", codigo2);
         printf("Cidade: %s \n", cidade2);
         printf("População: %d \n", pop2);
         printf("PIB: R$ %0.f \n", pib2);
         printf("Pontos turísticos: %d \n", tur2);
         printf("Tamanho da cidade: %.2f por Km^2 \n", area2);
         printf("Densidade populacional: %.1f \n", densid2);
         printf("PIB per capita: R$ %.2f \n", capita2);


     return 0;
}