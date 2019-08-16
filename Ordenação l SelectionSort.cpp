//Método de ordenação utilizando o SelectionSort

int selectionsort(vec[], int tam)
{
	int i, j, min, qtd = 0;
	for(i = 0; i < (tam - 1); i++)
	{
		min = i;
		for (j = (i+1) j < tam; j++)
		{
			if(vec[j] < vec[min])
			{
				min = j;
			}
			qtd++;
		}
		if(min != i)
		{
			troca(&vec[i], &vec[min]).
		}
		
	}
	
}
