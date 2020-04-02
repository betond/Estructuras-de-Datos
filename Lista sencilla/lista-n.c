#include "lista-n.h"

struct Lista *crear (int valor){
 struct Lista *nuevo = NULL;
 nuevo=(struct Lista *)malloc(sizeof(struct Lista));
 if(nuevo == NULL)
 { return NULL;}
 nuevo->valor = valor;
 nuevo->siguiente = NULL;
return nuevo;
}

struct Lista *insertar(struct Lista*lista , int valor){
struct Lista *nueva=crear(valor);
nueva->siguiente = lista;
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
