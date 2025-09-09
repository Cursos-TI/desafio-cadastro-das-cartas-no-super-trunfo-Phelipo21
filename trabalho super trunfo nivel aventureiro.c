#include <stdio.h>

int main() { 

    char codigo[50];
    char cidade [50];
    char estado [50];
    float populaçao;
    float area;
    float pib;
    int pontosturisticos;
    float densiadade;
    float pibpercapita;

    densiadade = populaçao / area;
     
    pibpercapita = pib / populaçao;

    printf("\n#### super trunfo nível aventureiro ####\n");

    //// entada de dados carta 1 /////
    printf("\ncarta 1\n");

    printf("qual o codigo da Cidade ?: ");

    scanf("%s",codigo);

    printf("qual o nome da Ciadade ??? :");

    scanf("%s", cidade);

    printf(" qual o nome do Estado ??? : ");
    
    scanf("%s", estado);

    printf("qual o tamanho da população ??? :");

    scanf("%f",&populaçao);

    printf("qual a área da ciadade ??? :");

    scanf("%f",area);

    














 








return 0;

}
