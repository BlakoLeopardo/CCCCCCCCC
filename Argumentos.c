#include <stdio.h>

void aniversario(char x[], int y){
    printf("\nParabens para voce %s!", x);
    printf("\nNessa data querida!");
    printf("\nMuitas Felicidades!");
    printf("\nMuitos anos de vida!");
    printf("\nFeliz %d anos de vida!\n", y);
}

int main(){
char nome[] = "Gugu";
int idade = 20;
    
    aniversario(nome, idade);

return 0;
}