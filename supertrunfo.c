#include <stdio.h>

int main(){

//Carta 1
char estado1;                        
char codigo1[4];
char cidade1[50];
int populacao1;
float areakm1;
float pib1;
int pontosturisticos1;

//Carta 2
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float areakm2;
float pib2;
int pontosturisticos2; 


printf("Carta 1: \n");

printf("Digite a letra do estado A a H: ");
scanf(" %c", & estado1);

printf("Digite o Codigo da Carta de 01 a 04(ex:A01, C02): ");
scanf("%s", codigo1);

printf("Digite o nome da Cidade: ");
scanf(" %[^\n]", cidade1);

printf("Digite a População: ");
scanf("%d", & populacao1);

printf("Digite a área em km²: ");
scanf("%f", & areakm1);

printf("Digite o PIB (Em bilhões de reais): ");
scanf("%f", & pib1);

printf("Digite o número de Pontos Turísticos: ");
scanf("%d", & pontosturisticos1);


printf("\nCarta 2: \n" );


printf("Digite a letra do estado A a H: ");
scanf(" %c",& estado2);

printf("Digite o Codigo da Carta de 01 a 04(ex:A01, C02): ");
scanf("%s", codigo2);

printf("Digite o nome da Cidade: ");
scanf(" %[^\n]", cidade2);

printf("Digite a População: ");
scanf("%d", & populacao2);

printf("Digite a área em km²: ");
scanf("%f", & areakm2);

printf("Digite o PIB (Em bilhões de reais): ");
scanf("%f", & pib2);

printf("Digite o número de Pontos Turísticos: ");
scanf("%d", & pontosturisticos2);


printf("\nCarta 1: \n");
printf("Estado: %c \n", estado1);
printf("Codigo: %s \n", codigo1);
printf("Nome da Cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Área: %.2f km\xB2 \n", areakm1);
printf("PIB: %.2f bilhões de Reais \n", pib1);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);


printf("\nCarta 2: \n");
printf("Estado: %c \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Área: %.2f km\xB2 \n", areakm2);
printf("PIB: %.2f bilhões de Reais\n", pib2);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);



return 0;


    
}
