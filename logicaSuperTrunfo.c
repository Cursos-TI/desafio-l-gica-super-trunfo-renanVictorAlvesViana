#include <stdio.h>

struct Pais{ // criação das variaveis das carta usando struct para poder herdar para mais de uma carta
    char Estado;             
    char CodigoCarta[4];
    char NomeCidade[30];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos; 
    float densidade_populacional;
    float PIB_per_capita;
    float super_poder;
    int resultado;
};

int main(){
    struct Pais pais[2]; // Usando as variaveis pais dentro de struct e fazendo uma array de dois pais 

    // usando printf e scanf para coletar os dados de cada carta
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (letra A-H):\n");
    scanf(" %c", &pais[0].Estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", pais[0].CodigoCarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", pais[0].NomeCidade);

    printf("Digite a População:\n");
    scanf("%d", &pais[0].Populacao);

    printf("Digite a area em km²:\n");
    scanf("%f", &pais[0].Area);

    printf("Digite o PIB:\n");
    scanf("%f", &pais[0].PIB);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pais[0].Pontos_turisticos);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (letra A-H):\n");
    scanf(" %c", &pais[1].Estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", pais[1].CodigoCarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", pais[1].NomeCidade);

    printf("Digite a População:\n");
    scanf("%d", &pais[1].Populacao);

    printf("Digite a area em km²:\n");
    scanf("%f", &pais[1].Area);

    printf("Digite o PIB:\n");
    scanf("%f", &pais[1].PIB);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pais[1].Pontos_turisticos);

    // calculo de densidade de populacional e pib per capita
    pais[0].densidade_populacional = (pais[0].Populacao / pais[0].Area);
    pais[0].PIB_per_capita = (pais[0].PIB / pais[0].Populacao);

    pais[1].densidade_populacional = (pais[1].Populacao / pais[1].Area);
    pais[1].PIB_per_capita = (pais[1].PIB / pais[1].Populacao);
    // calculo de super poder  
    pais[0].super_poder = pais[0].super_poder + (pais[0].Populacao + pais[0].Area + pais[0].PIB + pais[0].Pontos_turisticos + pais[0].densidade_populacional + pais[0].PIB_per_capita);
    pais[1].super_poder = pais[1].super_poder + (pais[1].Populacao + pais[1].Area + pais[1].PIB + pais[1].Pontos_turisticos + pais[1].densidade_populacional + pais[1].PIB_per_capita);
    pais[0].resultado = pais[0].super_poder > pais[1].super_poder;

    printf("\n=== Exibindo Cartas ===\n");
    for(int i = 0 ; i < 2; i++) { // usando for para mostra de maneira mais facil os dados dais cartas
        printf("\nCarta %d\n", i + 1);
        printf("Estado: %c\n", pais[i].Estado);
        printf("Código da Carta: %s\n", pais[i].CodigoCarta);
        printf("Cidade: %s\n", pais[i].NomeCidade);
        printf("População: %d\n", pais[i].Populacao);
        printf("Área: %.2f Km²\n", pais[i].Area);
        printf("PIB: %.2f\n", pais[i].PIB);
        printf("Pontos Turísticos: %d\n", pais[i].Pontos_turisticos);
        printf("Densidade populacional: %.2f habitantes por quilômetro quadrado\n",pais[i].densidade_populacional);
        printf("PIB per capita: %.3f\n",pais[i].PIB_per_capita);
        printf("valor do super poder:%.2f\n",pais[i].super_poder);
        if(pais[0].Populacao > pais[1].Populacao) {
            printf("A carta 1 venceu em quesito população\n");
        }else{
            printf("A carta 2 perdeu em quesito população");
        }

    }

    return 0;
}