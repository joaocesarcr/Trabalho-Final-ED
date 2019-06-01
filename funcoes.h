#include <stdio.h>
#include <stdlib.h>

// Structs
typedef struct s_Tweet {
    int retweets;
    int likes;

} tweet;

typedef struct s_User {
    int mentions;
} user;

typedef struct s_HashTag {
    int mentions;
} hashtag;

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
