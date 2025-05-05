/* Ponteiro = Uma variável que armazena o endereço de memória de outra variável.
              Benefício: Elas ajudam a evitar o desperdício de memória, permitindo que você passe
              o endereço de uma grande estrutura de dados em vez de copiar todos os dados.
*/
// ---------------IMPORTANTE----------------
#include <stdio.h>

void Aniversario(int* idade);

int main(){
int idade = 20;
Aniversario(&idade);

printf("Voce tem %d anos de idade", idade);

return 0;
}

void Aniversario(int* idade){
// Quando você passa uma variável para uma função em C para
// Você na verdade passa uma copia daquela variável
    (*idade)++;
}