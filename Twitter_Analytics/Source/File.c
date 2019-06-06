#include "../Header/File.h"

ArgumentsForOp ArgumentsForOp_New()
{
	ArgumentsForOp argumentsForOp;
	argumentsForOp.opChar = ' ';
	argumentsForOp.number = 0;
	argumentsForOp.name[0] = '\0'; //Inicializa a string vazia

	return argumentsForOp;
}

int argumentsError(int argc) {
	// Recebe a quantidade de parametros na chamada do programa
	// Caso seja maior que 3 (a.out, arquivo1, arquivo2) nao executa o programa
	if (argc > 3) {
		printf("Mais de dois parametros\n");
		return 1;
	}
	else return 0;
}

int filesError(FILE *input1, FILE *input2) {
	if (!input1 || !input2) { // Caso ocorra erro na abertura de um dos arquivos
		printf("Parametros inválidos\n");
		return 1;
	}
	else return 0;
}

void exFile2(FILE *input2) {
	/*
	ArgumentsForOp arguments;
	char op;
	int qtt;
	char s;

	while ((s = getc(input2)) != EOF) { // Até o final do arquivo
		arguments = readLine(input2);

		switch (arguments.opChar) {
			case 'a':

				break;

			case 'b':

				break;

			case 'c':

				break;

			case 'd':

				break;

			case 'e':

				break;

			case 'f':

				break;

			case 'g':

				break;
		}
	}
	*/
}

List* readArgumentsForOp(FILE *file) {
	List* argumentsList = List_New();

	char command, letter;
	int count, number;

	while ((command = getc(file)) != EOF) {
		ArgumentsForOp* arguments = malloc(sizeof(ArgumentsForOp));
		*arguments = ArgumentsForOp_New();

		arguments->opChar = command; // char comando
		getc(file); // pula o ;

		if (arguments->opChar == 'g') { // Caso especial = operação G recebe uma hashtag (string)
			arguments->number = 0;
			count = 0;
			letter = getc(file);

			while (letter == ' ') { //Elimina espaço em branco
				letter = getc(file);
			}

			while (letter != '\n' && letter != ' ') { //Lê até achar o final
				arguments->name[count] = letter;
				letter = getc(file);
				count++;
			}

			//Finaliza a string
			arguments->name[count] = '\0';
		} else {
			strcpy(arguments->name, "");
			number = getc(file);
			arguments->number = number;
		}
		
		argumentsList->Add(argumentsList, arguments);
	}

	return argumentsList;
}

/* Por alguma razão mesmo com "atoi" ou getw a variável está sendo imprimida corretamente apenas com
* o %c ao invés de %d
*/



/*
*
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


