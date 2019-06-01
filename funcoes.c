#include "funcoes.h"

int argumentsError(int argc) {
    // Recebe a quantidade de parametros na chamada do programa
    // Caso seja maior que 3 (a.out, arquivo1, arquivo2) nao executa o programa
    if (argc > 3) {
        printf ("Mais de dois parametros\n");
        return 1; 
    } else return 0;
}

int filesError(FILE *input1, FILE *input2) {
    if (!input1 || !input2) { // Caso ocorra erro na abertura de um dos arquivos
        printf("Parametros inválidos\n");
        return 1;
    } else return 0; 
}

void exFile2 (FILE *input2) {
    char op;
    int qtt;
    char s;

    while ((s = getc(input2)) != EOF) {
        switch (s) {
            case 'a':
                break;
                
        }
        putc(s, stdout);
    }

}


/*
void 
    for(int i=0; i < strlen(myString); i++)
    {
        switch(myString[i])
        {
            case 'à':
            case 'à':
            case 'â':
            case 'ä':
                myString[i] = 'a';
                break;
            ....
        }
    }
*/

/*
OPERAÇÃO a.
Listar as hastags mais citadas em toda rede.
A operação recebe como entrada um número que indica quantas hashtags devem ser listadas e quantidade de citações.
Se o número for zero, todas as hashtags devem ser listadas.
A saída da função é uma lista em ordem decrescente das hastags mais citadas.
Restrições: 
    (i) listar um resultado por linha; 
    (ii) hashtags com a mesma frequência devem ser listadas em ordem alfabética.
*/
void opA(int qttHash, int qttCit) {
    
}

/*
OPERAÇÃO b.
Listar os usuários que mais postam tweets. 
A operação recebe como entrada um número que indica quantos usuários devem ser listados. 
Se o número for zero, todos os usuários devem ser listados. 
A saída da função é uma lista em ordem decrescente de usuários mais ativos e o número de postagens. Restrições: (i) listar um resultado por linha.
*/
void opB(int userQtt) {
}


/*
OPERAÇÃO c.
Listar os tweets com maior número de retweets.
A operação recebe como entrada um número que indica quantos tweets devem ser listados. 
Se o número for zero, todos os tweets devem ser listados. A saída da função é uma lista em ordem decrescente de tweets mais “retuitados” e o número de retweets. Restrições: (i) listar um resultado por linha; (ii) tweets com a mesma frequência devem ser listados em ordem alfabética.
*/
void opC(int tweetsQtt) {
}

/*
OPERAÇÃO d.
Listar os usuários mais mencionados nos tweets.
A operação recebe como entrada um número que indica quantos usuários devem ser listados.
Se o número for zero, todos os usuários devem ser listados.
A saída da função é uma lista em ordem decrescente de usuários mais mencionados.
Restrições:
    (i) listar um resultado por linha; 
    (ii) usuários com a mesma frequência devem ser listados em ordem alfabética.
*/
void opD(int usrQtt) {
}

/*
OPERAÇÃO e.
Listar os usuários mais influentes. Um usuário influente é aquele que possui o maior número de retweets.
A operação recebe como entrada um número que indica quantos usuários devem ser listados.
Se o número for zero, todos os usuários devem ser listados.
A saída da função é uma lista em ordem decrescente pelo número de influência e o total de retweets.
Restrições: 
    (i) listar um resultado por linha; 
    (ii) usuários com a mesma frequência devem ser listados em ordem alfabética.
*/
void opE(int userQtt) {
}

/*
OPERAÇÃO f.
Listar os usuários mais engajados da rede. Engajamento é a interação do público com as postagens do usuário e determina o alcance das postagens. O engajamento é contabilizado pela somatório da quantidade de interações dos tweets de um usuário, que inclui: gostar do tweet (like), quantidade de retweets e quantidade de menções ao usuário.
A operação recebe como entrada um número que indica quantos usuários devem ser listados.
Se o número for zero, todos os usuários devem ser listados. 
A saída da função é uma lista em ordem decrescente de engajamento que deve exibir o usuário e o número de engajamento.
Restrições:
    (i) listar um resultado por linha;
    (ii) usuários com a mesma frequência devem ser listados em ordem alfabética.
*/
void opF(int userQtt) {
}

/*
OPERAÇÃO g.
Listar os termos associados a uma hashtag.
A operação recebe como entrada uma hashtag e um número que indica quantas hashtags associadas devem ser listadas.
Se o número for zero, todos as hashtags associadas devem ser listadas.
A saída da função é uma lista em ordem decrescente do número de vezes que a hashtag aparece associada, seguida do número de vezes. 
Restrições:
    (i) listar um resultado por linha; 
    (ii) hashtags com a mesma frequência devem ser listadas em ordem alfabética.
*/

/*

Tempo.
Deve ser contabilizado o tempo do carregamento da base de dados na estrutura e o tempo da geração do arquivo de saídas.
*/ 
