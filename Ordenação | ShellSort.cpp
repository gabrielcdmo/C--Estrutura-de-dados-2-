//Dentre todas as opções aqui apresentadas o ShellSort é uma técnica refinada do método de ordenação por inserção, 
//ou seja é o que vai apresentar mais desempenho.

int shellSort(int vec[], int tam) {
 	int i , j , valor, qtd=0;
 	int gap = 1;
 	do {
 		gap = 3*gap+1;
	} while(gap < tam);
 	do {
 		gap /= 3;
 		for(i = gap; i < tam; i++) {
 			valor = vec[i];
 			j = i - gap;
 			while (j >= 0 && valor < vec[j]) {
 				vec[j + gap] = vec[j];
 				j -= gap;
 				qtd++;
 			}
 		vec[j + gap] = valor;
 		}
 	} while ( gap > 1);
 	return (qtd);
 }
