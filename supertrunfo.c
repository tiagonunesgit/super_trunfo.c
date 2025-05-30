#include <stdio.h>

int main(){

//Carta 1
char estado1;                        
char codigo1[4];
char cidade1[50];
unsigned long int populacao1;
float areakm1;
float pib1;
int pontosturisticos1;
float densidade1,pibpercapita1, superpoder1;

//Carta 2
char estado2;
char codigo2[4];
char cidade2[50];
unsigned long int populacao2;
float areakm2;
float pib2;
int pontosturisticos2; 
float densidade2,pibpercapita2, superpoder2;

printf("Carta 1: \n");

printf("Digite a letra do estado A a H: ");
scanf(" %c", & estado1);

printf("Digite o Codigo da Carta de 01 a 04(ex:A01, C02): ");
scanf("%s", codigo1);

printf("Digite o nome da Cidade: ");
scanf(" %[^\n]", cidade1);

printf("Digite a População: ");
scanf("%lu", & populacao1);

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
scanf("%lu", & populacao2);

printf("Digite a área em km²: ");
scanf("%f", & areakm2);

printf("Digite o PIB (Em bilhões de reais): ");
scanf("%f", & pib2);

printf("Digite o número de Pontos Turísticos: ");
scanf("%d", & pontosturisticos2);

//Cálculos
densidade1 = populacao1 / areakm1;
pibpercapita1 = (pib1 * 10000000000) / populacao1;

densidade2 = populacao2 / areakm2;
pibpercapita2 = (pib2 * 1000000000) / populacao2;

//Super poder

superpoder1 = (float)populacao1 + areakm1 + (pib1 * 1000000000) + pontosturisticos1 +  
                pibpercapita1 + (1.0 / densidade1);

superpoder2 = (float)populacao2 + areakm2 + (pib2 * 1000000000) + pontosturisticos2 +
                pibpercapita2 + (1.0 / densidade2);


printf("\nCarta 1: \n");
printf("Estado: %c \n", estado1);
printf("Codigo: %s \n", codigo1);
printf("Nome da Cidade: %s \n", cidade1);
printf("População: %lu \n", populacao1);
printf("Área: %.2f km² \n", areakm1);
printf("PIB: %.2f bilhões de Reais \n", pib1);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos1);
printf("Densidade Populacional: %f hab/km²\n", densidade1);
printf("Pib per Capita: %.2f reais \n", pibpercapita1);
printf("Super Poder: %.2f \n", superpoder1);

printf("\nCarta 2: \n");
printf("Estado: %c \n", estado2);
printf("Codigo: %s \n", codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %lu \n", populacao2);
printf("Área: %.2f km²\n", areakm2);
printf("PIB: %.2f bilhões de Reais\n", pib2);
printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
printf("Densidade Populacional: %f hab/km² \n", densidade2);
printf("Pib per Capita: %.2f reais \n", pibpercapita2);
printf("Super Poder: %.2f \n", superpoder2);


//Comparações
printf("\nComparação das Cartas: \n");
printf("População: Carta 1 venceu (%d) \n", populacao1 > populacao2);
printf("Área: Carta 1 venceu (%d) \n", areakm1 > areakm2);
printf("PIB: Carta 1 venceu (%d) \n", pib1 > pib2);
printf("Pontos Turísticos: Carta 1 venceu (%d) \n", pontosturisticos1 > pontosturisticos2);
printf("Densidade: Carta %d venceu (%d) \n", densidade1 < densidade2 ? 1:2, densidade1 < densidade1);
printf("Pib per Capita: Carta 1 venceu (%d) \n", pibpercapita1 > pibpercapita2);
printf("Super Poder: Carta 1 venceu (%d) \n", superpoder1 > superpoder2);


return 0;


    
}
