// String de Arrays
#include <stdio.h>

int main(){
char frutas[][10] = {"Maca", 
                    "Banana", 
                    "Coco", 
                    "Abacaxi", 
                    "Limao"};
int tamanho = sizeof(frutas) / sizeof(frutas[0]);

frutas[0][0] = 'e';
frutas[0][4] = 'A';

frutas[1][0] = 'a';
frutas[1][5] = 'B';

frutas[2][0] = 'o';
frutas[2][3]= 'C';

for (int i = 0; i < tamanho; i++){
    printf("%s\n", frutas[i]);
}


return 0;
}