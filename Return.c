// Return = Retorna um valor de volta para uma função de chamada
#include <stdio.h>

double quadrado(double x){
return x * x;
}

int main(){
double x = quadrado(3.14);
    printf("%lf", x);

return 0;
}