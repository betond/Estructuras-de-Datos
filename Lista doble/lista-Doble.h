#include <stdio.h>
#include <stdlib.h>

struct Doble{
	int valor;
	struct Lista *anterior;
	struct Lista *siguiente;
};

struct Doble *crear (int valor);

struct Doble *insertar(struct Doble*lista , int valor);

void mostrar (struct Doble *lista);

struct Doble *invertir(struct Doble *lista);
