#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int decimal, binario, result, cont, i, vetor[50];
	
	int result2, dif;

	
	binario = 2;
	
	//recebendo numero decimal
    printf("informe um numero decimal: ");
    scanf("%d", &decimal);
	
	//descobrindo o resto da divisão
	if((decimal / binario) > 0){
	
	cont = 0;
	
	    while(decimal > 0){
	    	
	    	printf("\n dividir numero: %d", decimal);
	
	        dif = decimal % binario;
	        result = decimal / binario;
	        
	        vetor[cont] = dif;
	
	        printf("\n resto da divisao = %d", dif);
		
		    
		    decimal = result;
		    cont++;
	    }
	
    }
    
    printf("\n \n O numero e: ");
    for(i = (cont-1); i >= 0; i--){
    	printf("%d", vetor[i]);
	}
	
	printf(" \n %d", decimal); 
	
	
	system("PAUSE");
	return 0;
}
