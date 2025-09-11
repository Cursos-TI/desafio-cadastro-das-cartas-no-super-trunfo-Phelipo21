#include <stdio.h>

int main() { 

    char codigo[50];
    char cidade [50];
    char estado [50];
    int populaçao;
    float area;
    float pib;
    int pontosturisticos;
    float densiadade;
    float pibpercapita;


    printf("\n#### super trunfo nível aventureiro ####\n");
    printf("\n------   -------\n");
    //// entada de dados carta 1 /////
   

    printf(" qual o codigo da Cidade ?: ");

    scanf("%s",codigo);

    printf("qual o nome da Ciadade ??? :");

    scanf("%s", cidade);

    printf("qual o nome do Estado ??? : ");
    
    scanf("%s", estado);

    printf(" qual o tamanho da população ??? :");

    scanf("%f",&populaçao);

    printf(" qual a área da ciadade ??? :");

    scanf("%f",&area);

    printf("qual o pib da cidade ??? :");

    scanf("%f",&pib);

    printf(" quantos pontos turístícos ??? :");

    scanf("%d",&pontosturisticos);

      densiadade = populaçao / area;
     
    pibpercapita = pib / populaçao;


    
    //// saida de dados /////
    printf("\n------- carta 01 ---------\n");

    printf("codigo : %s\n",codigo);
    
    printf("cidade : %s\n",cidade);

    printf("estado : %s\n", estado);

    printf("população : %d milhões \n", populaçao);

    printf("área : %.2f km² \n",area);

    printf("pib : %.2f bilhões \n",pib);

    printf("pontos turístícos : %d \n",pontosturisticos);

    printf(" densidade : %.1f mil por km² \n",densiadade);

    printf("pib per capita : %.2f mil \n",pibpercapita);



















 








return 0;

}
