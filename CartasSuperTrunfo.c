#include <stdio.h>

    int main() {
 
      
    char carta1[6];
    char carta2[6];
    char estado;
    char codigo[4];
    char cidade[10];
    int populacao, pontos_tur;
    float area, pib;


    printf(" CADASTRO DE CARTAS SUPER TRUNFO CIDADES\n");
    
    printf("--- DADOS DA CARTA 1 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", &carta1.codigo);
    
    printf("Nome da Cidade: ");
    scanf("%s", &carta1.cidade);
    
    printf("População (habitantes): ");
    scanf("%d", &carta1.populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos_tur);

    printf("\n------------------------------------------\n\n");
    
  
    printf("--- DADOS DA CARTA 2 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);
    
    printf("Código da Carta (Ex: B02): ");
    scanf("%s", &carta2.codigo);
    
    printf("Nome da Cidade: ");
    scanf("%s", &carta2.cidade);
    
    printf("População (habitantes): ");
    scanf("%d", &carta2.populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos_tur);

    printf("   EXIBIÇÃO DAS CARTAS CADASTRADAS\n");

    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_tur);
    
    printf("\n------------------------------------------\n");
    
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_tur);
    
    printf("\n==========================================\n");

    return 0;
}

} 
