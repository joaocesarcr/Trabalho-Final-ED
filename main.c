#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[ ]) {
    if (argumentsError(argc)) return 0;

    FILE *input1, *input2, *OUTPUT;

    input1 = fopen(argv[1],"r");
    input2 = fopen(argv[2],"r");

   if (filesError(input1,input2)) return 0;


  // Printa o que estiver no inputN 
    char s; // auxilia na impressao dos arquivos
    while ((s = getc(input2)) != EOF) {
        putc(s, stdout);
    }


    /* Teste os parametros recebidos
    int cont;
    for (cont = 0; cont < argc; cont++) {
        printf("\n%d Parametro: %s\n", cont,argv[cont]);
    }
    */
  
    return 0;
}
