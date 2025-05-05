// Como ler arquivos em C
#include <stdio.h>

int main(){
FILE *pArq = fopen("C:\\Users\\gustavo.reis\\Documents\\CCCCCCCCC-main\\output.txt", "r");
char buffer[1024] = {0};

if (pArq == NULL){
    printf("Nao foi possivel abrir o arquivo!");
    return 1;
}

while (fgets(buffer, sizeof(buffer), pArq) != NULL){
    printf("%s", buffer);
}

fclose(pArq);

return 0;
}