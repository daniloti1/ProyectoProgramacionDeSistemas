#include <stdio.h>
#include "miLista.h"

extern ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
	if(lista->numeroElementos==0){
		return NULL;
	}else{
		ElementoLista *elemento;
		elemento=lista->ancla.anterior;
		return elemento;
	}
}
