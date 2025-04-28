#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char cadastro[25];
    char login[25];
    char estado1[30];
    char estado2[30];
    char carta1[20];
    char carta2[20];
    char cidade1 [30];
    char cidade2 [30];
    unsigned long int populacao1, populacao2;
    int senha;
    int turisticos1, turisticos2;
    int escolhaJogador;
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
    scanf("%s", &estado1);
    // Estado do usuário
    printf("Digite o código da carta: \n");
    scanf("%s", &carta1);
    // Código da carta do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);
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
    scanf("%s", &estado2);
    // Estado do usuário
    printf("Digite o código da carta: \n");
    scanf("%s", &carta2);
    // Código da carta do usuário
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);
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

    printf("Manual do jogo! \n");
    printf("Escolha uma opção: \n");
    printf("1. Nome do país \n");
    printf("2. População \n");
    printf("3. Área \n");
    printf("4. PIB \n");
    printf("5. Número de pontos turísticos \n");
    printf("6. Densidade demográfica \n");
    printf("Escolha: \n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) {
        case 1:
        printf("Jogador: nome do país \n");
        break;

        case 2:
        printf("Jogador: População \n");
        if(populacao1 > populacao2) {
            printf("Vencedor: a %s\n", cidade1);
        }else if (populacao2 > populacao1) {
            printf("Vencedor: a %s\n", cidade2);
        }else {
            printf("Empate! \n");
        }
        break;

        case 3:
        printf("Jogador: Área \n");
        if(area1 > area2) {
            printf("Vencedor: a %s\n", area1);
        }else if (area2 > area1) {
            printf("Vencedor: a %s\n", area2);
        }else {
            printf("Empate! \n");
        }
        break;

        case 4:
        printf("Jogador: PIB \n");
        if(pib1 > pib2) {
            printf("Vencedor: a %s\n", pib1);
        }else if (pib2 > pib1) {
            printf("Vencedor: a %s\n", pib2);
        }else {
            printf("Empate! \n");
        }
        break;

        case 5:
        printf("Jogador: Número de pontos turísticos \n");
        if(turisticos1 > turisticos2) {
            printf("Vencedor: a %s\n", turisticos1);
        }else if (turisticos2 > turisticos1) {
            printf("Vencedor: a %s\n", turisticos2);
        }else {
            printf("Empate! \n");
        }
        break;

        case 6:
        printf("Jogador: Densidade demográfica \n");
        if(densidade1 > densidade2) {
            printf("Vencedor: a %s\n", densidade1);
        }else if (densidade2 > densidade1) {
            printf("Vencedor: a %s\n", densidade2);
        }else {
            printf("Empate! \n");
        }
        break;

        default:
        printf("Opção inválida! \n");
    }

    
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

    if(densidade1 < densidade2) {
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