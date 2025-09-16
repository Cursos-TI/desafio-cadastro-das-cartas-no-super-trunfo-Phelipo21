#include <stdio.h>

int main () { 

    printf("\n desafio  super trunfo\n");



    
    char codigo[50];
    char nome[50];
    int populaçao;
    float area;
    float pib;
    int pontosturisticos;
    
    //entada de dados
    printf("qual o código da cidade ?: ");
    scanf("%s",codigo);
     
    printf("qual o nome da cidade ?: ");
    scanf("%s",nome);

    printf("qual o tamanho da população: ");
    scanf("%d", &populaçao);       
    
    printf("qual a área ??: ");
    scanf("%f", &area);
    
    printf("qual o pib: ");
    scanf("%f", &pib);

    printf("qual a quantidade de pontos turístícos: ");
    scanf("%d", &pontosturisticos);
    

    // saida de dados
printf("\n--- carta 01 ---\n");

    printf("código:%s\n",codigo);

    printf("nome:%s\n",nome);

    printf("populção:%d de habitantes\n",populaçao);

     printf("área : %.2f km \n",area);

     printf("pib : %.2f bilhões \n",pib);
    
     printf("pontos turístíticos : %d \n",pontosturisticos);

    printf("\n----------------------\n");
   
   // carta 02

    char codigo2[50];
    char nome2[50];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    //entada de dados
    printf("qual o código da cidade ?: ");
    scanf("%s",codigo2);
     
    printf("qual o nome da cidade ?: ");
    scanf("%s",nome2);

    printf("qual o tamanho da população: ");
    scanf("%d", &populaçao2);       
    
    printf("qual a área ??: ");
    scanf("%f", &area2);
    
    printf("qual o pib: ");
    scanf("%f", &pib2);

    printf("qual a quantidade de pontos turístícos: ");
     scanf("%d", &pontosturisticos2);
    

    // saida de dados
printf("\n--- carta 02 ---\n");

    printf("código:%s\n",codigo);

    printf("nome:%s\n",nome);

    printf("populção:%d de habitantes\n",populaçao);

     printf("área : %.2f km \n",area);

     printf("pib : %.2f bilhões \n",pib);
    
     printf("pontos turístíticos : %d \n ",pontosturisticos);






return 0;



}