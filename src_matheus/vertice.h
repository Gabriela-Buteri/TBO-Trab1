#ifndef _VERTICE_H
#define _VERTICE_H

#include "aresta.h"
#include "vector.h"

typedef struct Vertice
{
    int id;
    int id_pai;
    float distancia_origem;
    Vector *arestas;
} Vertice;

Vertice *vertice_construct(int id);
int vertice_get_id(Vertice *v);
int vertice_get_id_pai(Vertice *v);
void vertice_set_id_pai(Vertice *v, int id_pai);
float vertice_get_distancia_origem(Vertice *v);
void vertice_set_distancia_origem(Vertice *v, float distancia_origem);
Vector *vertice_get_arestas(Vertice *v);
void vertice_add_aresta(Vertice *v, Aresta *a);
void vertice_destroy(Vertice *v);

#endif