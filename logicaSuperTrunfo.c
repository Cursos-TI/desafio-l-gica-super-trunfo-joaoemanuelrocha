#include <stdio.h>

int main() {
    char cadastro[25];
    char login[25];
    char estado[30];
    char carta1[20];
    char carta2[20];
    char cidade [30];
    unsigned long int populacao1, populacao2;
    int senha;
    int turisticos1, turisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float capita1, capita2;
    float inverso1, inverso2;
    float calcular1, calcular2;
    float super1, super2;
    

    printf("Carta 1: \n");
    // Carta 1
    printf("Faça seu cadastro: \n");
    scanf("%s", &cadastro);
    // Cadastro do usuário
    printf("Coloque sua senha: \n");
    scanf("%d", &senha);
    // Senha do usuário
    printf("Digite seu estado: \n");
    scanf("%s", &estado);
    // Estado do usuário
    printf("Digite o código da carta: \n");
    scanf("%s", &carta1);
    // Código da carta do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    // Cidade do usuário
    printf("Digite o número de habitantes: \n");
    scanf("%u", &populacao1);
    // Número de habitantes da cidade do usuário
    printf("Digite a área: \n");
    scanf("%f", &area1);
    // Área da cidade do usuário
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    // PIB da cidade do usuário
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &turisticos1);
    // Locais turísticos da cidade do usuário
    densidade1 = (float) (populacao1 / area1);
    printf("A densidade populacional é: %.3f hab/km²\n", densidade1);
    // Calculo para saber a densidade populacional
    capita1 = (float) (pib1 / populacao1);
    printf("O PIB per capita é: %.3f reais\n", capita1);
    // Calculo para saber o PIB per capita
    calcular1 = (float) (densidade1 + capita1);
    printf("O resultado do calculo de densidade populacional e pib per capita é: %f\n", calcular1);
    // Calculo de densidade populacional + o PIB per capita
    inverso1 = (float) (populacao1 / area1);
    printf("O inverso da densidade populacional é: %f\n", inverso1);
    // Calculo para saber o inverso da densidade populacional
    super1 = (float) (populacao1 + area1 + pib1 + turisticos1 + capita1 + inverso1);
    printf("O Super Poder é: %.4f\n", super1);
    // Calculo do super poder
   

    printf("Carta 2: \n");
    // Carta 2
    printf("Faça seu login: \n");
    scanf("%s", &login);
    // Login do usuário
    printf("Coloque sua senha: \n");
    scanf("%d", &senha);
    // Senha do usuário
    printf("Digite seu estado: \n");
    scanf("%s", &estado);
    // Estado do usuário
    printf("Digite o código da carta: \n");
    scanf("%s", &carta2);
    // Código da carta do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    // Cidade do usuário
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    // Número de habitantes da cidade do usuário
    printf("Digite a área: \n");
    scanf("%f", &area2);
    // Área da cidade do usuário
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    // PIB da cidade do usuário
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &turisticos2);
     // Locais turísticos da cidade do usuário
     densidade2 = (float) (populacao2 / area2);
    printf("A densidade populacional é: %.3f hab/km²\n", densidade2);
    // Calculo para saber a densidade populacional
    capita2 = (float) (pib2 / populacao2);
    printf("O PIB per capita é: %.3f reais\n", capita2);
    // Calculo para saber o PIB per capita
    calcular2 = (float) (densidade2+ capita2);
    printf("O resultado do calculo de densidade populacional e pib per capita é: %f\n", calcular2);
    // Calculo de densidade populacional + o PIB per capita
    inverso2 = (float) (populacao2 / area2);
    printf("O inverso da densidade populacional é: %f\n", inverso2);
    // Calculo para saber o inverso da densidade populacional
    super2 = (float) (populacao2 + area2 + pib2 + turisticos2 + capita2 + inverso2);
    printf("O Super Poder é: %.4f\n", super2);
    // Calculo do super poder
    
    printf("Comapração das cartas: \n");
    
    if(populacao1 > populacao2) {
        printf("População da carta 1 vencendora! \n");
    }else {
        printf("População da carta 2 vencedora! \n");
    }

    if(turisticos1 > turisticos2) {
        printf("Pontos turísticos da carta 1 venceu! \n");
    }else {
        printf("Pontos turísticos da carta 2 venceu! \n");
    }

    if(area1 > area2) {
        printf("Área da carta 1 venceu! \n");
    }else {
        printf("Área da carta 2 venceu! \n");
    }

    if(pib1 > pib2) {
        printf("Pib da carta 1 venceu! \n");
    }else {
        printf("Pib da carta 2 venceu! \n");
    }

    if(densidade1 > densidade2) {
        printf("Densidade da carta 1 venceu! \n");
    }else {
        printf("Densidade da carta 2 venceu! \n");
    }

    if(capita1 > capita2) {
        printf("Pib per capita da carta 1 venceu! \n");
    }else {
        printf("Pib per capita da carta 2 venceu! \n");
    }

    if(inverso1 > inverso2) {
        printf("Inverso da densidade populacional da carta 1 venceu! \n");
    }else {
        printf("Inverso da densidade populacional da carta 2 venceu! \n");
    }

    if(super1 > super2) {
        printf("O super poder da carta 1 venceu! \n");
    }else {
        printf("O super poder da carta 2 venceu! \n");
    }

    return 0;
}