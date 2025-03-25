#include<stdio.h>

int main() {
    
    char estado1 = 'A';
    char codigo1 = "02";
    char nomecidade1[19] = "Rio de Janeiro";
    int populacao1 = 1145089;
    float arekm1 = 1200.56;
    float pib1 = 850.25;
    int nponttur1 = 150;

    printf("Carta 1: \n"); //opca da carta;
    printf("Estado: %c\n", estado1); //Estado uma letra especifica do estado;
    printf("Código: A02\n", codigo1); //codigo da Carta 
    printf("Nome da Cidade: %s\n", nomecidade1); // nome da cidade
    printf("Populacao: %d\n", populacao1); // número de habitantes
    printf("Área: %.2f Km\n", arekm1); //Área em km quadrados
    printf("PIB: %.2f \n", pib1); //O Produto Bruto interno
    printf("Número de Pontos Turísticos: %d\n", nponttur1); //Quantidade de pontos Turisticos.

    printf("Próxima Carta!");
    printf("Carta 2: \n");
    char estado2 = 'B';
    char codigo2 = "02";
    char nomecidade2[19] = "Salvador";
    int populacao2 = 58000;
    float arekm2 = 6800.56;
    float pib2 = 520.25;
    int nponttur2 = 250;

    printf("Carta 2: \n"); //opca da carta;
    printf("Estado: %c\n", estado2); //Estado uma letra especifica do estado;
    printf("Código: A02\n", codigo2); //codigo da Carta 
    printf("Nome da Cidade: %s\n", nomecidade2); // nome da cidade
    printf("Populacao: %d\n", populacao2); // número de habitantes
    printf("Área: %.2f Km\n", arekm2); //Área em km quadrados
    printf("PIB: %.2f \n", pib2); //O Produto Bruto interno
    printf("Número de Pontos Turísticos: %d\n", nponttur2); //Quantidade de pontos Turisticos.

    return 0;
}
