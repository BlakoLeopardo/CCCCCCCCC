/* Prototipo de função = Declaração de função, sem um corpo, antes de mai()
                         Garante que as chamadas para uma função sejam feitas com os argumentos corretos
     Notas importantes = Muitos compiladores C não verificam a correspondência de parâmetros
                         Argumentos ausentes resultarão em comportamento inesperado
                         Um protótipo de função faz com que o compilador sinalize um erro se os argumentos estiverem ausentes
             Vantagens = 
             1. Mais fácil de navegar em um programa com main() no topo
             2. Ajuda no debbuging
             3. Comumente usado em arquivos de cabeçalho

*/
#include <stdio.h>

void ola(char[], int); // Prototipo da função

int main(){
char nome[] = "Gugu";
int idade = 20;
    ola(nome, idade);
return 0;
}

void ola(char nome[], int idade){
    printf("\nOla %s", nome);
    printf("\nVoce tem %d anos de idade", idade);
}
