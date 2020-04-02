#include <stdio.h>
#include <stdlib.h>

struct Vector {
    int capacidad;
    int cuantos_hay;
    int *datos;
};
/*
-0 - todo bien.
-1 - el parametro nulo.
-2 - no hay memoria.
*/
int agranda( struct Vector *vector) {
    int *otro = NULL;
    int i=0;
    
    if(vector == NULL){
        return -1;
    }
    otro = (int *) malloc (sizeof(int) * 2 * vector->capacidad );
    
    if( otro == NULL ){
        return -2;
    }
    for( i=0; i<vector->cuantos_hay; i++){
        *(otro + i) = *(vector->datos + i);
    }
    free( vector->datos );
    vector->capacidad = vector->capacidad * 2;
    vector->datos = otro;
    return 0;
}

void mostrar ( struct Vector *vector) {
    int i=0;
    if(vector == NULL) {
        return;
    }
    for( i = 0; i < vector->cuantos_hay; i++) {
    printf("%d", *(vector->datos + i) );
    }
    puts("");
}
/*
1 - no hay espacio.
0 - si hay espacio:
*/
int hay_espacio( struct Vector *vector) {
    if( vector == NULL) {
        return 1;
    }
    if(vector->cuantos_hay < vector->capacidad) {
        return 0;
    }
    return 1;
}

/*
 0 - todo bien.
-1 - el parametro es nulo.
-2 - no se puedo agrandar.
*/
int agregar( struct Vector *vector, int dato) {
    if(vector == NULL){
    return -1;
    }
    if( ! hay_espacio(vector) ) {  // ó (hay_espacio(vector) == 1)
        if( agranda ( vector ) != 0) {
            return 2;
        }
    }
    *(vector->datos + vector->cuantos_hay + 1) = dato;
    vector->cuantos_hay = vector->cuantos_hay + 1;
    return 0;
}
/*
-1 - parametro nulo.
 0 - todo bien.
 -2 - No hay memoria.
*/
int inicializar(struct Vector *vector) {
    if( vector == NULL) {
        return -1;
    }
    vector->datos = (int *) malloc( sizeof(int) );
    if (vector->datos == NULL) {
        return -2;
    }
    vector->cuantos_hay = 0;
    vector->capacidad = 1;
    
    return 0;
}

int main(void) {
    int n = 0;
    int i = 0;
    
    struct Vector vector;
    
    inicializar( &vector );
    printf("Dame el valor de n: \n");
    scanf("%d", &n);
    for( i = 1; i <= n; i++) {
        agregar( &vector, i);
        mostrar( &vector);
    
    }

    return 0;
}
