#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./List.h"

#define OP_NAME_MAX_CHAR_LENGTH 30

typedef struct s_ArgumentsForOp {
	char opChar;
	int number;
	char name[OP_NAME_MAX_CHAR_LENGTH];
} ArgumentsForOp;

ArgumentsForOp ArgumentsForOp_New(char opChar, int number, char name[OP_NAME_MAX_CHAR_LENGTH]);

int argumentsError(int argc);

int filesError(FILE *input1, FILE *input2);

List* readArgumentsForOp(FILE *file);

// case sensitive
// acentos
