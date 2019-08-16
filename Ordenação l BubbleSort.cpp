//Método de ordenação utilizando BubbleSort

int bolha(int vec[])
{
	int qtd, i, j, tmp;
	qtd = 0;
	for (i = 0; i < tamanho - 1; i++)
	{
		for (j = i + 1; j < tamanho; j++)
		{
			if (vec[i] > vec[j])
			{
				troca(&vec[i], &vec[j]);
			}
		}
	
	}
}


void troca(in* a, int *b)
{
	int tmp;
	tmp = a*; 
	*a = *b;
	*b = tmp;
}


