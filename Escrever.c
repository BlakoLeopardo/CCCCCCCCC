/* Como escrever arquivos em C */
#include <stdio.h>

int main(){
FILE *pArq = fopen("output.txt", "w");

char texto[] = "Escalada, na esplanada\nOHHHHH YEAHHHHHH!";

if (pArq == NULL){
    printf("Erro ao tentar abrir arquivo\n");
return 1;
}

fprintf(pArq, "%s", texto);

    printf("O arquivo foi salvo com sucesso!");

fclose(pArq);

return 0;
}