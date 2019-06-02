#include <stdio.h>
#include <stdlib.h>

// Structs
typedef struct s_Tweet {
    int retweets;
    int likes;
    // hashtag e mencoes = lista/avl  ?
} tweet;

typedef struct s_User {
    char name[20];
    int mentions;
} user;

typedef struct s_HashTag {
    char name[20];
    int mentions;
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
void opA(int qttHash, int qttCit);
void opB(int userQtt);
void opC(int tweetsQtt);
void opD(int usrQtt);
void opE(int userQtt);
void opF(int userQtt);
