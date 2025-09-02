#include <stdio.h>

int main(){
    //declarar variáveis das cartas 1 e 2

    char estado1[30], estado2[30];
    char codigo1[5], codigo2[5];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2;
    float pib1, pib2;
    float area1, area2;

    //entrada de dados da carta 1

    printf("Carta 1 \n");
    printf("Estado: ");
    scanf("%s", &estado1);

    printf("Codigo da carta: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Área: ");
    scanf("%f", &area1);


    //entrada de dados da carta 2


        printf("Carta 2 \n");
    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("////////////////////////////////////////////////////////////////");

    printf("Resultado\n");
    printf("Carta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);
    printf("PIB: %1.f bilhoes de reais\n", pib1);
    printf("Area: %2.f km2\n", area1);

    printf("Resultado\n");
    printf("Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("PIB: %1.f bilhoes de reais\n", pib2);
    printf("Area: %2.f km2\n", area2);



return 0;
}
