#include <stdio.h>
#include <stdlib.h>

// Lista vs arvores
// Processamento vs memoria
// 

// Estruturas de Dados
//
typedef struct  listaEncadeada { 
        struct listaEncadeada *prox;
        struct listaEncadeada *ant;
}


// Structs
typedef struct s_User {
    char name[20];
    usrInfo info;
    
} user;

typedef struct s_userInfo {
    int tweetsCount;
    int mentionCount;
    int retweetCount;
    int likesCount;
} usrInfo;

typedef struct s_Tweet {
    user *creator;
    int retweets;
    int likes;
    char text[140];
    // lista mencoes
    // lista hashtags
} tweet;

typedef struct s_HashTag { // Arvore de pesquisa por nome
    char name[20];
    int mentionCount; // lista de tweets;
} hashtag;

typedef struct s_argumentsForOp {
    char opChar;
    int n;
    char name[30];
} argumentsOP;

// Funcoes
int argumentsError(int argc); 
int filesError(FILE *input1, FILE *input2); 

// Operacoes
void opA(int qttHash, int qttCit); // Listar as hastags mais citadas em toda rede.
void opB(int userQtt);   // Listar os usuários que mais postam tweets. 
void opC(int tweetsQtt); // Listar os tweets com maior número de retweets.
void opD(int userQtt);   // Listar os usuários mais mencionados nos tweets.
void opE(int userQtt);   // Listar os usuários mais influentes (aquele que possui o maior número de retweets.)
void opF(int userQtt);   // Listar os usuários mais engajados da rede. Engajamento é a interação do público com as postagens do usuário e determina o alcance das postagens. O engajamento é contabilizado pela somatório da quantidade de interações dos tweets de um usuário, que inclui: gostar do tweet (like), quantidade de retweets e quantidade de menções ao usuário.
argumentsOP readLine (FILE *input2);

// Falta
// tempo
// case sensitive
// acentos
//
