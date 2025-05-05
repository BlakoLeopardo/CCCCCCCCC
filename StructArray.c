/* array de structs = Matriz onde cada elemento contém uma struct {}
                      Ajuda a organizar e agrupa dados relacionados
*/
#include <stdio.h>
 
typedef struct{
char modelo[25];
int ano;
float preco;
} Carros;

int main(){
    Carros carros[] = {{"Mustang", 2025, 529491.25},
                       {"Corvete", 2026, 724600.45},
                       {"Challegenger", 2023, 999900.99}};
int num = sizeof(carros) / sizeof(carros[0]);

    printf("-----Carros a venda-----\n");
    for (int i = 0; i < num; i++){
        printf("Modelo: %s\nAno de Lancamento: %d\nPreco: %.2f\n", carros[i].modelo, carros[i].ano, carros[i].preco);
        printf("------------------------\n");
    }
    

return 0;
}