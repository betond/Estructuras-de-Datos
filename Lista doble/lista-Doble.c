#include "lista-Doble.h"

struct Doble *crear (int valor){
	struct Doble *nuevo = NULL;
		nuevo=(struct Doble *)malloc(sizeof(struct Doble));
	if(nuevo == NULL){
		return NULL;
	}

	nuevo->valor = valor;
	nuevo->anterior = NULL;
	nuevo->siguiente = NULL;
	return nuevo;
}

struct Lista *insertar(struct Lista*lista , int valor){
struct Lista *nueva=crear(valor);

lllllllllllllllllllllllllllllllllllllllll


nueva->siguiente = lista;
nueva->anterior = 
return nueva;
}


void mostrar (struct Lista *lista){
while(lista != NULL)
{
 printf(" %d ",lista->valor);
 lista=lista->siguiente;
 }
printf("\n");
}

struct Lista *invertir(struct Lista *lista){
   struct Lista *nueva = NULL;
   
   while(lista != NULL)
   {
   
      nueva=insertar(nueva,lista->valor);
     lista=lista->siguiente;
    
   }
  mostrar(nueva);
    
    return nueva;
}

int main(void){
 struct Lista *nlista=crear(0);
 
 if(nlista == NULL)
 {
 printf("\n\tNo se pudo crear la Lista\n");
 return 0;
 }
nlista=insertar(nlista,1);
nlista=insertar(nlista,2);
nlista=insertar(nlista,3);
nlista=insertar(nlista,4);
nlista=insertar(nlista,5);
nlista=insertar(nlista,6);
nlista=insertar(nlista,7);
nlista=insertar(nlista,8);
nlista=insertar(nlista,9);

mostrar(nlista);

invertir(nlista);

return 0;
}
