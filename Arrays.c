// Array = Uma estrutura de dados que pode armazenar muitos valores do mesmo tipo de dados
#include <stdio.h>

int main(){
double precos[4];
int n = sizeof(precos)/sizeof(precos[0]); // Retorna o tamanho do operador em bytes

    for (int j = 0; j < n; j++){
        printf("Digite o %d# preco: ", j + 1);
            scanf(" %lf", &precos[j]);
    }
    
    for (int i = 0; i < n; i++){
    printf("R$%.2lf\t", precos[i]);
    } 

return 0;
}