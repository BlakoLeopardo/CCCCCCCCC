// Loops Aninhados = Um loop dentro de outro loop
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int linhas;
    int colunas;
    
    bool Rod = true;

    char simb1;    
    char simb2;

    do {
        printf("Deseja sair? (S) ou (N): ");
            scanf(" %c", &simb2);

        if (simb2 == 'S' || simb2 == 's') {
            Rod = false;
        }
        else if (simb2 == 'N' || simb2 == 'n') {
            printf("Continuando o programa...\n");
        }
        else {
            printf("Opcao Invalida.\nTente Novamente.\n");
            continue;
        }
        
        if (Rod) {
            printf("Coloque um numero de linhas: ");
                scanf("%d", &linhas);
            printf("Agora coloque um numero de colunas: ");
                scanf("%d", &colunas);
            printf("Agora coloque um simbolo que sera utilizado: ");
                scanf(" %c", &simb1);

            for (int i = 1; i <= linhas; i++) {
                for (int j = 1; j <= colunas; j++) {
                    printf("%c ", simb1);
                }
                printf("\n");
            }
        }
        
    } while (Rod);

    printf("Programa Encerrado.\n");

return 0;
}