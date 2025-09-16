#include <stdio.h>

int main()  {

  
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

    scanf("%d",&populaçao);

    printf(" qual a área da ciadade ??? :");

    scanf("%f",&area);

    printf("qual o pib da cidade ??? :");

    scanf("%f",&pib);

    printf(" quantos pontos turístícos ??? :");

    scanf("%d",&pontosturisticos);

      densiadade = populaçao / area;
     
    pibpercapita = pib / populaçao;

     /////variaveis carta 2 ////////

      printf("\n ###### carta 02 ##### \n");

    char codigo2 [50];
    char cidade2 [50];
    char estado2 [50];
    int populaçao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densiadade2;
    float pibpercapita2;

    ///// entradada de dados carta 2 ////////
     printf("\n------   -------\n");

          
    printf(" qual o codigo da Cidade ?: ");

    scanf("%s",codigo2);

    printf("qual o nome da Ciadade ??? :");

    scanf("%s", cidade2);

    printf("qual o nome do Estado ??? : ");
    
    scanf("%s", estado2);

    printf(" qual o tamanho da população ??? :");

    scanf("%d",&populaçao2);

    printf(" qual a área da ciadade ??? :");

    scanf("%f",&area2);

    printf("qual o pib da cidade ??? :");

    scanf("%f",&pib2);

    printf(" quantos pontos turístícos ??? :");

    scanf("%d",&pontosturisticos2);

     densiadade2 = populaçao2 / area2;
     
    pibpercapita2 = pib2 / populaçao2;

         
    
    //// saida de dados carta 1/////
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

     /////// saida de dados carta 2//////

     printf("\n------- carta 02 ---------\n");

    printf("codigo : %s\n",codigo2);
    
    printf("cidade : %s\n",cidade2);

    printf("estado : %s\n", estado2);

    printf("população : %d milhões \n", populaçao2);

    printf("área : %.2f km² \n",area2);

    printf("pib : %.2f bilhões \n",pib2);

    printf("pontos turístícos : %d \n",pontosturisticos2);

    printf(" densidade : %.1f mil por km² \n",densiadade2);

    printf("pib per capita : %.2f mil \n",pibpercapita2);



















 








return 0;

}
