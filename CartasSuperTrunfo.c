/*
Super Trunfo nivel facil

não pode usar logicas complexas
não pode utilizar loops

Deve ser claro ao usuario
tem que ter comentarios
*/

#include <stdio.h>

// Faço uma struct(basicamente um template para variaveis) para organizar as variaveis de 1 unico objeto 
struct Carta {
    char estado;
    char cidade[50];
    int populacao, pontosTur, codigo;
    float area, pib;
};

// Função para Carta 1
void carta1(struct Carta *carta) {
    printf("Selecione um caratere para o estado\n>> ");
    scanf("%c", &carta->estado);

    printf("Selecione um codigo para o estado\n>> ");
    scanf("%d", &carta->codigo);

    getchar();
    printf("Diga o nome da cidade\n>> ");
    fgets(carta->cidade, 50, stdin);

    printf("Quantidade de população\n>> ");
    scanf("%d", &carta->populacao);

    printf("Quantos pontos turisticos tem lá?\n>> ");
    scanf("%d", &carta->pontosTur);

    printf("qual a area em km2 desse estado?\n>>");
    scanf("%f", &carta->area);

    printf("Qual o pib local?\n>> ");
    scanf("%f", &carta->pib);


}

// Função para Carta 2
void carta2(struct Carta *carta){
    printf("Selecione um caratere para o estado\n>> ");
    scanf("%c", &carta->estado);
    
    printf("Selecione um codigo para o estado\n>> ");
    scanf("%d", &carta->codigo);
    
    getchar();
    printf("Diga o nome da cidade\n>> ");
    fgets(carta->cidade, 50, stdin);
    
    printf("Quantidade de população\n>> ");
    scanf("%d", &carta->populacao);
    
    printf("Quantos pontos turisticos tem lá?\n>> ");
    scanf("%d", &carta->pontosTur);
    
    printf("qual a area em km2 desse estado?\n>>");
    scanf("%f", &carta->area);
    
    printf("Qual o pib local?\n>> ");
    scanf("%f", &carta->pib);
}

int main() {

    // Cria uma struct array do Carta com 2 itens
    struct Carta cartas[2];

    carta1(&cartas[0]);
    //getchar limpa o \n que sobra no buffer retirando o bug de passar direto em certos inputs
    getchar();
    
    carta2(&cartas[1]);
    // aiai, usar um for deixaria tudo mais facil e curto :(

    // Os prints aqui em baixo vão exibir o que foi dado pelo usuario.
    printf("Resultados da carta 1\n\n"
        "Estado: %c\n"
        "Codigo: %c%d\n"
        "Nome da Cidade: %s"
        "Populacao: %d\n"
        "Area: %f km^2\n"
        "PIB: %f Bi de reais\n"
        "Numero de pontos turisticos: %d\n", 
        cartas[0].estado, 
        cartas[0].estado, 
        cartas[0].codigo, 
        cartas[0].cidade, 
        cartas[0].populacao, 
        cartas[0].area, 
        cartas[0].pib, 
        cartas[0].pontosTur
    );

    printf("Resultados da carta 2\n\n"
        "Estado: %c\n"
        "Codigo: %c%d\n"
        "Nome da Cidade: %s"
        "Populacao: %d\n"
        "Area: %f km^2\n"
        "PIB: %f Bi de reais\n"
        "Numero de pontos turisticos: %d\n", 
        cartas[0].estado, 
        cartas[0].estado, 
        cartas[0].codigo, 
        cartas[0].cidade, 
        cartas[0].populacao, 
        cartas[0].area, 
        cartas[0].pib, 
        cartas[0].pontosTur
    );
    
    // encerra sem erros(codigo 0)
    return 0;
}
