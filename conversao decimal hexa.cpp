#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	
	int decimal, hexa, result, cont, i, vetor[50], dif;
	
	hexa = 16;
	
	/*
	  A   B  C  D  E  F
	9 10 11 12 13 14 15
	*/
	
	printf("Infome um numero decimal: ");
	scanf("%d", &decimal);
	
	if(decimal >= hexa){
		
		cont = 0;
		
		while(decimal >= hexa){
			
			dif = decimal % hexa;
			result = decimal / hexa;

			vetor[cont] = dif;
			decimal = result;
			cont++;
			
			if(decimal < hexa){
				vetor[cont] = decimal;
			}
		}
		
	}
	
	printf("\n O numero e: ");
	
	for(i = cont; i>=0; i--){
        	
        	if(vetor[i] == 10){
        		printf("A");
			}else if(vetor[i] == 11){
			    printf("B");
			}else if(vetor[i] == 12){
			    printf("C");
			}else if(vetor[i] == 13){
			    printf("D");
			}else if(vetor[i] == 14){
			    printf("E");
			}else if(vetor[i] == 15){
			    printf("F");
			}else{			
			    printf("%d", vetor[i]);
		    }
		
	}
	
	system("PAUSE");
	return 0;
}
