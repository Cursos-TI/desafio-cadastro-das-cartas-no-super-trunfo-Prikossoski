#include <stdio.h>
int main () 
{ 
    
    char Estado1 [50];
    char Codigo1 [50];
    char Cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    char Estado2 [50];
    char Codigo2 [50];
    char Cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    //PRIMEIRA CARTA//

    printf("Digite seu Estado1:");
    scanf("%s", Estado1);

    printf("Digite seu Codigo1: ");
    scanf("%s", Codigo1);

    printf("Digite sua Cidade1: ");
    scanf("%s", Cidade1);

    printf("Digite sua populacao1: ");
    scanf("%d", &populacao1);

    printf("Digite sua Área1 em Km2: ");
    scanf("%f", &area1);

    printf("Digite o pib1: ");
    scanf("%f", &pib1);

    printf("Digite o &numero pontos turisticos1: ");
    scanf("%d", &numero_pontos_turisticos1);



    //DADOS PRIMEIRA CARTA//

    printf ("\n** CARTA NUMERO 01 **\n");
    printf("Codigo1: %s\n", Codigo1);
    printf("Estado1: %s\n", Estado1);
    printf("Nome da Cidade1: %s\n", Cidade1);
    printf("populacao1: %d\n", populacao1);
    printf("area1 em km: %f\n", area1);
    printf("pib1: %.2f\n", pib1);
    printf("Numero_pontos_turisticos1: %d.\n", numero_pontos_turisticos1);
    printf("densidade_populacional: %.2f\n.", densidade_populacional1);
    printf("pib_per_capital1: .2f\n\n\n", pib_per_capita1);
    
    densidade_populacional1 = populacao1 / area1;

    pib_per_capita1 = pib1 / populacao1;


    printf(" SEGUNDA CARTA\n");

    printf("Digite seu Estado2: ");
    scanf("%s", Estado2);

    printf("Digite seu Codigo2: ");
    scanf("%s", Codigo2);

    printf("Digite sua Cidade2: ");
    scanf("%s", Cidade2);

    printf("Digite sua populacao2: ");
    scanf("%d", &populacao2);

    printf("Digite a area2 em KM2: ");
    scanf("%f", &area2);

    printf("Digite o pib2: ");
    scanf("%f", &pib2);

    printf("Digite o numero_pontos_turisticos2: ");
    scanf("%d", &numero_pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;

    pib_per_capita1 = pib2 / populacao2;


    printf("DADOS SEGUNDA CARTA\n");

    printf("\n** CARTA NUMERO 02 **\n");
    printf("Codigo2: %s\n", Codigo2),
    printf("Estado2: %s\n", Estado2);
    printf("Nome da Cidade2: %s\n", Cidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2 em km2: %f\n", area2);
    printf("pib2: %.2f\n", pib2);
    printf("Numero_pontos_turisticos2: %d\n", numero_pontos_turisticos2);
    printf("densidade_populaciona2: %.2f\n.", densidade_populacional2);
    printf("pib_per_capital2: .2f\n\n\n", pib_per_capita2);


    return 0;

}