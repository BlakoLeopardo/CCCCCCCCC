// continue = Pula o resto do codigo e força a proxima iteração do loop
// break = Sai do loop/switch
#include <stdio.h>

int main(){
    for (int i = 0; i <= 20; i++){
        if (i == 13){
            break;
        }
        printf("%d\n", i);
    }
    


return 0;
}