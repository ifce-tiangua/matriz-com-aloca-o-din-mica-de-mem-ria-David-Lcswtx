#include<stdio.h>
#include<stdlib.h>

int main()

{
	
	int **m; 
	int a, b; // a = linha - b = coluna
	int i, k; // elementos para os loops no for
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a <= 0 || b <= 0){
		
		printf("[matriz vazia]\n");
		
		return 0;
	}
	else{
	
	//alocar memoria p matriz
	m = (int **)malloc(a * sizeof(int *));
	
	for(i = 0; i < a; i++){
		m[i] = malloc(b * sizeof(int));
	}
	
	//acima alocacao - abaixo scan elementos
	
	for(i = 0; i < a; i++){
		for(k = 0; k < b; k++){
			scanf("%d", &m[i][k]);
		}
	}
	
	//impressao dos elemnetos da matriz
	for(i = 0; i < a; i++){
		for(k = 0; k < b; k++){
			printf("%d", m[i][k]);
			if(k < b-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	//desacolar memoria
	for(i = 0; i < a; i++){
		free(m[i]);
	}
	free (m);
	
	return 0;
	
	}
	
}
