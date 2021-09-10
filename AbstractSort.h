#ifndef ABSTRACTSORT_H
#define ABSTRACTSORT_H

typedef struct Elemento
{
	int _chave;
	void* _dado;
} Elemento;

int getSwapsCount();
void swap(int indiceDeUmElemento, int indiceDeOutroElemento, Elemento** umVetor);
void sort(Elemento** umVetor, int quantidadeDeElmentos);
Elemento** inicializa(int quantidadeDeElementos);
void destroi(Elemento** umVetor, int quantidadeDeElementos);

#endif /* ABSTRACTSORT_H */
