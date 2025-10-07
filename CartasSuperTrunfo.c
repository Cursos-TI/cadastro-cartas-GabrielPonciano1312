#include <stdio.h>

int main(){
    
/*Declarando o tipo de variáveis e dando nome a elas*/

    char estado[8];
    char código[5];
    char nome [30];
    int população;
    float áreacidade;
    float PIB;
    int pontosturísticos;
    
/*Interação do usuário com a Carta 1, usando printf e scanf*/

    printf("Carta 1\n");
    
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Estado: %s\n", estado);
    
    printf("Digite o código da carta\n");
    scanf("%s", código);
    printf("Código: %s\n", código);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);
    printf("Nome da cidade: %s\n", nome);
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &população);
    printf("População total: %d\n", população);
    
    printf("Digite a área total da cidade: \n");
    scanf("%f", &áreacidade);
    printf("Área total da cidade: %f KM²\n", áreacidade);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);
    printf("PIB total: %f bilhões de reais\n", PIB);
    
    printf("Digite o total de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturísticos);
    printf("Número de pontos turísticos: %d\n", pontosturísticos);
   
    /*Visualização das informações que o usário digitou no teclado. Única dúvida que ficou,
    foi sobre como deixar o estado e o código juntos sem a vírgula.*/

    printf("Carta 1\n");
    
    printf("Estado: %s\n", estado);
    
    printf("Código: %s, %s\n", estado, código);
    
    printf("Nome da cidade: %s\n", nome);
    
    printf("População total: %d\n", população);
    
    printf("Área total da cidade: %f KM²\n", áreacidade);
    
    printf("PIB total: %f bilhões de reais\n", PIB);
    
    printf("Número de pontos turísticos: %d\n", pontosturísticos);

    /*Interação do usuário com a Carta 2, usando printf e scanf*/

    printf("Carta 2\n");
    
    printf("Digite o estado: \n");
    scanf("%s", estado);
    printf("Estado: %s\n", estado);
    
    printf("Digite o código da carta\n");
    scanf("%s", código);
    printf("Código: %s\n", código);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);
    printf("Nome da cidade: %s\n", nome);
    
    printf("Digite a população da cidade: \n");
    scanf("%d", &população);
    printf("População total: %d\n", população);
    
    printf("Digite a área total da cidade: \n");
    scanf("%f", &áreacidade);
    printf("Área total da cidade: %f KM²\n", áreacidade);
    
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB);
    printf("PIB total: %f bilhões de reais\n", PIB);
    
    printf("Digite o total de pontos turísticos da cidade: \n");
    scanf("%d", &pontosturísticos);
    printf("Número de pontos turísticos: %d\n", pontosturísticos);
    
/*Visualização das informações que o usário digitou no teclado. Única dúvida que ficou,
foi sobre como deixar o estado e o código juntos sem a vírgula.*/

    printf("Carta 2\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s, %s\n", estado, código);
    printf("Nome da cidade: %s\n", nome);
    printf("População total: %d\n", população);
    printf("Área total da cidade: %f KM²\n", áreacidade);
    printf("PIB total: %f bilhões de reais\n", PIB);
    printf("Número de pontos turísticos: %d\n", pontosturísticos);
    return 0; 
}