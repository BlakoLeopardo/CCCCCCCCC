/* 2D Array = Uma matriz, em que cada elemento é uma matriz inteira
              útil se você precisar de uma matriz, grade ou tabela de dados
*/
#include <stdio.h>

int main(){
/*int numeros[2][3] = {{1, 2, 3}, 
                     {4, 5, 6}
                    };
*/
int numeros[3][3];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[0][2] = 3;
    numeros[1][0] = 4;
    numeros[1][1] = 5;
    numeros[1][2] = 6;
    numeros[2][0] = 7;
    numeros[2][1] = 8;
    numeros[2][2] = 9;

int linhas = sizeof(numeros)/sizeof(numeros[0]);
int colunas = sizeof(numeros[0])/sizeof(numeros[0][0]);

for (int i = 0; i < linhas; i++){
    for (int j = 0; j < colunas; j++){
        printf("%d ", numeros[i][j]);
    }
    printf("\n");
}


return 0;
}