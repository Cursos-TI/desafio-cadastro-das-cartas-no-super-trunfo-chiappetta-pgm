#include <stdio.h>
//Primeira carta

int main(){
    // Primeira carta//
   printf("super trunfo \n");
   printf("Carta 1 \n");
   char estado[50];
   char cidade[50];
   char codigo[50];
   float populacao;
   int turisticos;
   float area;
   float pib;

   
   printf("Estado: \n");
   scanf("%s", estado);

   printf("Cidade: \n");
   scanf("%s", &cidade);

   printf("Código da carta: \n");
   scanf("%s", &codigo);
   
   printf("População: \n");
   scanf("%e, &populacao");

   printf("Pontos Turísticos: \n");
   scanf("%i, &turisticos");

   printf("Área em m²: \n");
   scanf("%e, &area");

   printf("PIB: \n");
   scanf("%e, &pib \n");

     
   //inserção dados segunda carta//


   printf("Carta 2 \n");

   printf("Estado: \n");
   scanf("%s", estado);

   printf("Cidade: \n");
   scanf("%s", &cidade);

   printf("Código da carta: \n");
   scanf("%s", &codigo);
   
   printf("População: \n");
   scanf("%e, &populacao");

   printf("Pontos Turísticos: \n");
   scanf("%i, &turisticos");

   printf("Área em m²: \n");
   scanf("%e, &area");

   printf("PIB: \n");
   scanf("%e, &pib \n");
   
    return 0;
}
