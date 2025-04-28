/*Operador Ternario = Atalho para if/else ao atribuir/retornar um valor
  (Condição) ? valor se verdadeiro : valor se falso*/
#include <stdio.h>

int achMax(int x, int y){
return (x > y) ? x :  y;
}

int main(){
int max = achMax(19, 54);
    printf("%d", max);

return 0;
}