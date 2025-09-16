#include <stdio.h>

int main() {
    char nome_jogador[20];
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    unsigned long int populacao1;
    double area1;
    double PIB1;
    int pontosturisticos1;
    double densidaepopulacional1;
    double pibpercapita1;
    double superpoder1;

    printf("===Super Trunfo de Cidades===\n");
    printf("O objetivo desse jogo é comparar atributos de diferentes cidades para descobrir qual é a mais forte.\n");

    printf("Primeiro me diga como voce se chama?\n");
    scanf("%s", nome_jogador);

    printf("Digite o Estado (letra de A a H):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite a população:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%lf", &area1);

    printf("Digite o PIB:\n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    densidaepopulacional1 = populacao1 / area1;
    pibpercapita1 = PIB1 / populacao1;
    superpoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + pibpercapita1 + (1 / densidaepopulacional1);

    printf("\n=== Dados da primeira cidade ===\n");
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB em R$: %.2f\n", PIB1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f\n", densidaepopulacional1);
    printf("PIB per capita: %.2f\n", pibpercapita1);
    printf("Super poder: %.2f\n", superpoder1);

    // Segunda cidade
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    unsigned long int populacao2;
    double area2;
    double PIB2;
    int pontosturisticos2;
    double densidaepopulacional2;
    double pibpercapita2;
    double superpoder2;

    printf("\n=== Cadastro da carta 02 ===\n");

    printf("Digite o Estado (letra de A a H):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite a população:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%lf", &area2);

    printf("Digite o PIB:\n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    densidaepopulacional2 = populacao2 / area2;
    pibpercapita2 = PIB2 / populacao2;
    superpoder2 = populacao2 + area2 + PIB2 + pontosturisticos2 + pibpercapita2 + (1 / densidaepopulacional2);

    printf("\n=== Dados da segunda cidade ===\n");
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB em R$: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f\n", densidaepopulacional2);
    printf("PIB per capita: %.2f\n", pibpercapita2);
    printf("Super poder: %.2f\n", superpoder2);

    // Comparações
    int placar_c1 = 0;
    int placar_c2 = 0;

    placar_c1 += (populacao1 > populacao2);
    placar_c2 += (populacao2 > populacao1);

    placar_c1 += (area1 > area2);
    placar_c2 += (area2 > area1);

    placar_c1 += (PIB1 > PIB2);
    placar_c2 += (PIB2 > PIB1);

    placar_c1 += (pontosturisticos1 > pontosturisticos2);
    placar_c2 += (pontosturisticos2 > pontosturisticos1);

    placar_c1 += (pibpercapita1 > pibpercapita2);
    placar_c2 += (pibpercapita2 > pibpercapita1);

    placar_c1 += (densidaepopulacional1 < densidaepopulacional2);
    placar_c2 += (densidaepopulacional2 < densidaepopulacional1);

    placar_c1 += 2 * (superpoder1 > superpoder2);
    placar_c2 += 2 * (superpoder2 > superpoder1);

    printf("\n%s, vamos começar as comparações!\n", nome_jogador);
    printf("A carta que tiver o atributo vencedor pontua.\n");
    printf("Logo abaixo está calculado o placar final.\n\n");

    printf("População: Carta1: (%d) | Carta2: (%d)\n", (populacao1 > populacao2), (populacao2 > populacao1));
    printf("Área: Carta1: (%d) | Carta2: (%d)\n", (area1 > area2), (area2 > area1));
    printf("PIB: Carta1: (%d) | Carta2: (%d)\n", (PIB1 > PIB2), (PIB2 > PIB1));
    printf("Pontos turísticos: Carta1: (%d) | Carta2: (%d)\n", (pontosturisticos1 > pontosturisticos2), (pontosturisticos2 > pontosturisticos1));
    printf("PIB per capita: Carta1: (%d) | Carta2: (%d)\n", (pibpercapita1 > pibpercapita2), (pibpercapita2 > pibpercapita1));
    printf("Densidade populacional (menor é melhor): Carta1: (%d) | Carta2: (%d)\n", (densidaepopulacional1 < densidaepopulacional2), (densidaepopulacional2 < densidaepopulacional1));

    printf("\n(O Super poder vale 2 pontos)\n");
    printf("Super poder: Carta1: (%d) | Carta2: (%d)\n\n", 2 * (superpoder1 > superpoder2), 2 * (superpoder2 > superpoder1));

    printf("------------ PLACAR FINAL ------------\n");
    printf("Carta 1: %d pontos\n", placar_c1);
    printf("Carta 2: %d pontos\n", placar_c2);

    if (placar_c1 > placar_c2) {
        printf("Vencedora: %s\n", nomecidade1);
    } else if (placar_c2 > placar_c1) {
        printf("Vencedora: %s\n", nomecidade2);
    } else {
        printf("Empate!\n");
    }

    printf("\n%s, muito obrigado por jogar. Esperamos que tenha gostado!\n", nome_jogador);

    return 0;
}

