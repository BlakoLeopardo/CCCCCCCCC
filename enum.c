/* enum = Um tipo de dados definido pelo usuário que consiste em
          de um conjunto de constantes inteiras nomeadas
          Beneficio: Substitui o número por nomes legíveis
*/
#include <stdio.h>
typedef enum{
    SUCESSO, FRACASSO, PENDENTE
} status;

void connectcut(status st);

int main(){
status st = PENDENTE;
connectcut(st);

return 0;
}

void connectcut(status st){
    switch(st){
        case SUCESSO:
            printf("Sua conexao foi estabelecida com Sucesso!\n");
            break;
        case FRACASSO:
            printf("Nao foi possivel estabelecer a conexao!\n");
            break;
        case PENDENTE:
            printf("Conectando...\n");
    }       
}