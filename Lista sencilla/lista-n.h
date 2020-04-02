#include <stdio.h>
#include <stdlib.h>

struct Lista{
	int valor;
	struct Lista *siguiente;
};

struct Lista *crear (int valor);

struct Lista *insertar(struct Lista*lista , int valor);

void mostrar (struct Lista *lista);

struct Lista *invertir(struct Lista *lista);
