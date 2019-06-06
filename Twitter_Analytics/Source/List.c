#include "../Header/List.h"

//Retorna o en�simo elemento de uma lista
//Caso seja pedido um elemento de posi��o maior que o �ltimo elemento da lista retorna este �ltimo
//Caso seja pedido um elemento menor que o elemento de menor posi��o da lista (negativo) ent�o retorna o primeiro
void* List_Get(List* self, int index) {
	Node* node = self->header;
	int count = 0;
	while (node->next && count < index) {
        node = node->next;
	}
	return node->data;
}

//Adiciona um novo item a uma lista existente
List* List_Add(List* list, void* data) {
	Node* node = malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	//Se a lista estiver vazia adiciona no cabecalho
	if (list->header == NULL) {
		list->header = node;
	}
	else {
		//Caso a lista nao estiver vazia, procura o proximo item vazio e adicionar o novo Node
		Node* listNode = list->header;
		while (listNode->next) {
			listNode = listNode->next;
		}
		listNode->next = node;
	}

	return list;
}

//Inicializa uma nova lista
List* List_New() {
	List* list = malloc(sizeof(List));
	list->header = NULL;
	list->Add = List_Add;
	list->Get = List_Get;
	return list;
}








