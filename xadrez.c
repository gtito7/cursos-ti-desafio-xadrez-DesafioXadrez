#include <stdio.h>

// TORRE - Recursivo
void moverTorre(int casas, int direcao)
{
    if (direcao == 1) printf("Cima\n");
    else if (direcao == 2) printf("Baixo\n");
    else if (direcao == 3) printf("Esquerda\n");
    else if (direcao == 4) printf("Direita\n");

    if (casas == 0) return; // Finalização

    moverTorre(casas - 1, direcao);  // Decremento da Recursiva
}

// BISPO - Recursivo
void moverBispo(int casas, int direcao)
{
    if (casas == 0) return; // Finalização

    for (int v = 0; v < 1; v++) // Loop externo Movimento vertical
    { 
    int h = 0; // Variável de movimento horizontal
        while (h < 1) // Loop interno movimento horizontal
        {          
        if (direcao == 1)
        {
                printf("Cima\n");
                printf("Direita\n");
        }
        else if (direcao == 2)
        {
                printf("Cima\n");
                printf("Esquerda\n");
        }
         else if (direcao == 3)
         {
                printf("Baixo\n");
                printf("Direita\n");
        }
        else if (direcao == 4)
        {
                printf("Baixo\n");
                printf("Esquerda\n");
        }

         h++; // Incremento Movimento horizontal
        }
    }

    moverBispo(casas - 1, direcao); // Decremento da Recursiva
}

// RAINHA - Recursivo
void moverRainha(int casas, int direcao)
{
    if (casas == 0) return; // Finalização

    if (direcao == 1) printf("Cima\n");
    else if (direcao == 2) printf("Baixo\n");
    else if (direcao == 3) printf("Esquerda\n");
    else if (direcao == 4) printf("Direita\n");

    moverRainha(casas - 1, direcao); // Decremento da Recursiva
}

int main() {

    // TORRE - Movimentação
    int Torre;
    int direcaoTorre;

    printf("## TORRE ##\nQuantas casas deseja mover? ");
    scanf("%d", &Torre);

    printf("Direção (1-Cima, 2-Baixo, 3-Esquerda, 4-Direita): ");
    scanf("%d", &direcaoTorre);

    moverTorre(Torre, direcaoTorre);

    printf("\n");

    // BISPO - Movimentação
    int Bispo;
    int direcaoBispo;

    printf("## BISPO ##\nQuantas casas deseja mover? ");
    scanf("%d", &Bispo);

    printf("Direção do Bispo:\n");
    printf("1 - Cima, Direita\n");
    printf("2 - Cima, Esquerda\n");
    printf("3 - Baixo, Direita\n");
    printf("4 - Baixo, Esquerda\n");
    scanf("%d", &direcaoBispo);

    moverBispo(Bispo, direcaoBispo);

    printf("\n");

    // RAINHA - Movimentação
    int Rainha;
    int direcaoRainha;

    printf("## RAINHA ##\nQuantas casas deseja mover? ");
    scanf("%d", &Rainha);

    printf("Direção (1-Cima, 2-Baixo, 3-Esquerda, 4-Direita): ");
    scanf("%d", &direcaoRainha);

    moverRainha(Rainha, direcaoRainha);

    printf("\n");

   // CAVALO  - Movimentação
    int direcaoCavalo;

    printf("## CAVALO ##\n");
    printf("Escolha uma direção:\n");
    printf("1-Cima, Direita\t\t");
    printf("2-Cima, Esquerda\n");
    printf("3-Baixo, Direita\t");
    printf("4-Baixo, Esquerda\n");
    printf("5-Esquerda, Baixo\t");
    printf("6-Esquerda, Cima\n");
    printf("7-Direita, Baixo\t");
    printf("8-Direita, Cima\n");
    scanf("%d", &direcaoCavalo);

    // Cavalo: 1 Movimento - Duplo
        for (int i = 0; i < 2; i++) // Executa 2 vezes
        {
        if (direcaoCavalo == 1 || direcaoCavalo == 2)
            printf("Cima\n");
        else if (direcaoCavalo == 3 || direcaoCavalo == 4)
            printf("Baixo\n");
        else if (direcaoCavalo == 5 || direcaoCavalo == 6)
            printf("Esquerda\n");
        else if (direcaoCavalo == 7 || direcaoCavalo == 8)
            printf("Direita\n");
        }
    // Cavalo: 2 Movimento - Unico
        if (direcaoCavalo == 1 || direcaoCavalo == 3)
        printf("Direita\n");
        else if (direcaoCavalo == 2 || direcaoCavalo == 4)
        printf("Esquerda\n");
        else if (direcaoCavalo == 5 || direcaoCavalo == 7)
        printf("Baixo\n");
        else if (direcaoCavalo == 6 || direcaoCavalo == 8)
        printf("Cima\n");

    return 0;
}