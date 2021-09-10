#include "AbstractSort.h"

//Implemente o Algoritmo Selection Sort para ordenar em ordem não decrescente um vetor de Elemento.

//implemente AQUI a funcao sort do SelectionSort
//você DEVE utilizar a função swap para trocar dois elementos de posição

void sort(Elemento** umVetor, int quantidadeDeElmentos)
{
	if (quantidadeDeElmentos <= 0)
	{
		return;
	}

	int j = 1;

	while(j < quantidadeDeElmentos-1)
	{
		int minimo = umVetor[j]->_chave;
		int k = j+1;
		
		while(k < quantidadeDeElmentos)
		{
			if (umVetor[minimo]->_chave >= umVetor[k]->_chave)
			{
				minimo = k;
			}
			
			k++;
		}
		
		if (minimo != j)
		{
			swap(minimo, j, umVetor);
		}

		j++;
	}
}