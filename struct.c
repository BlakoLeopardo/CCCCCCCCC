/* struct = Um contêiner personalizado que contém 
            várias informações relacionadas.
            Similitar a Objetos em outras linguagens
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Pense nisso como uma tabela. Todos os estudandes tem um nome, etc...
typedef struct{
char nome[50]; // As funções viram membros
int idade;
float nota;
bool ativo;
} est;

void printest(est Estudante);

int main(){
est estudante1 = {"Bob Esponja", 20, 2.5, true};
est estudante2 = {"Patrick Estrela", 34, 0.5, false};
est estudante3 = {"Lula Molusco", 47, 9.0, false};
est estudante4 = {0};

    strcpy(estudante4.nome, "Sandy");
    estudante4.idade = 27;
    estudante4.nota = 10.0;
    estudante4.ativo = false;
    // Para acessar os membros ou funções integrantes da Struct utiliza-se o operdador . ;

    printest(estudante1);
    printest(estudante2);
    printest(estudante3);
    printest(estudante4);

return 0;
}

void printest(est Estudante){
    printf("\n-----ESTUDANTE-----\n");
    printf("Nome: %s\n", Estudante.nome);
    printf("Idade: %d\n", Estudante.idade);
    printf("Nota: %.2f\n", Estudante.nota);
    printf("%s %s\n\n", Estudante.nome, (Estudante.ativo) ? "atualmente estuda nesta escola.\n" : "atualmente nao e estudante nesta escola.\n");
}