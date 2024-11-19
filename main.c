#include<stdio.h>
#include<stdlib.h>

int main()

{
	
	int **m; 
	int a, b;
	int i, j; 
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a == 0 || b == 0){
		
		printf("[matriz vazia]\n");
		
		return 0;
	}
	else{
	
	//alocar memoria p matriz
	m = (int **)malloc(a * sizeof(int *));
	
	for(i = 0; i < a; i++){
		m[i] = (int *)malloc(b * sizeof(int));
	}
	
	//acima alocacao - abaixo scan elementos
	
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			scanf("%d", &m[i][j]);
		}
	}
	
	//impressao dos elemnetos da matriz
	for(i = 0; i < a; i++){
		
		for(j = 0; j < b; j++){
			
			printf("%d", m[i][j]);
			
			if(j < b - 1){
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
}
	
	return 0;
	
}
