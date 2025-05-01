#include <stdio.h>
#include <string.h>

int main(){
char string1[] = "Gugu";
char string2[] = "Cabeça";

//   strlwr(string1);                     // converte uma string em minúsculas
//   strupr(string1);                    // converte uma string em maiúsculas
//   strcat(string1, string2);          // Anexa a string1 ao final da string2
//   strncat(string1, string2, 1);     // Acrescentar n caracteres da string2 a string1
//   strcpy(string1, string2);        // Copiar string2 para a string1
//   strncpy(string1, string2, 4);  // Copie n caracteres da String2 para String1

// strset(string1, '?');      // define todos os caracteres de uma string para um determinado caractere
// strnset(string1, 'x', 2); // define os primeiros n caracteres de uma string para um determinado caractere
// strrev(string1);         // inverte a string

// int result = strlen(string1);                      // returns string length as int
// int result = strcmp(string1, string2);         // comparara todos os caracteres da string
// int result = strncmp(string1, string2, 1);    // comparara n caracteres da string
// int result = strcmpi(string1, string2);      // compara toda a string (ignorar maiúsculas)
// int result = strnicmp(string1, string1, 1); // comparara n caracteres da string (ignorar maiúsculas)

printf("%d\n", result);

if(result == 0){
    printf("Essas Strings sao as mesmas!\n");
}
else{
    printf("Essas strings nao sao as mesmas!\n");
}


return 0;
}