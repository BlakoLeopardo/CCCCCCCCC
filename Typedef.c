/* Typedef = Palavra-chave reservada que dá a um tipo de dados existente um "apelido"
             Ajuda a simplificar tipos complexos e melhora a legibilidade do código
             typedef tipo_existente novo_tipo;"
*/
#include <stdio.h>

typedef int Numero;
typedef char str[50];
typedef char init[3];

int main(){
init user1 = "BC";
init user2 = "SS";
init user3 = "PS";
init user4 = "ST";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

return 0;
}