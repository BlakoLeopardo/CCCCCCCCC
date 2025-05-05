// Criar uma string de arrays, e o usuario ira preenche-la
#include <stdio.h>
#include <string.h>

int main(){
char nomes[4][25] = {0};
int linhas = sizeof(nomes) / sizeof(nomes[0]);
    
    for (int i = 0; i < linhas; i++){
        printf("Coloque um nome: ");
            fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strlen(nomes[i]) - 1] = '\0';
    }
    
    for (int i = 0; i < linhas; i++){
        printf("%s\n", nomes[i]);  
    }
     
return 0;
}