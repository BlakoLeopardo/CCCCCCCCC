// Criar uma string de arrays, e o usuario ira preenche-la
#include <stdio.h>
#include <string.h>

char Nomu(char messi){
char nomes[3][25] = {0};
int tam = sizeof(nomes) / sizeof(nomes[0]);
    
    for (int i = 0; i < tam; i++){
        /* code */
    }
    
    printf("Coloque um nome: ");
        fgets(nomes[0], sizeof(nomes[0]), stdin);
    nomes[0][strlen(nomes[0]) - 1] = '\0';

return messi;
}

int main(){

    printf("%s\n");

return 0;
}