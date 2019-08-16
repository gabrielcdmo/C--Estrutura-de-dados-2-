//Método de ordenação utilizando técnica do InsertionSort

int insertiorsort(int vec[], int tam)
{
	int i, j, qtd = 0;
	for(i = 1; i < tam; i++)
	{
		j = i;
		while (vec[j] < vec[j - 1] && (j != 0))
		{
			troca(&vec[j], &vec[j-1])
			j--;
			qtd++;
		}
	}
	
	return(qtd);
	
}
