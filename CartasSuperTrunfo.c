#include <stdio.h>
//Primeira carta

int main(){
    // Primeira carta//
   printf("super trunfo \n");
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
   scanf("%f, &populacao");

   printf("Pontos Turísticos: \n");
   scanf("%i, &turisticos");

   printf("Área em m²: \n");
   scanf("%f, &area");

   printf("PIB: \n");
   scanf("%f, &pib");


    return 0;
}
