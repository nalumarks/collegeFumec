#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ANNA
int equals(char *string, char *string_aux){
	int count;
	char *aux;
	char *aux_ptr;

	aux = string;
	aux_ptr = string_aux;

	if(length(string) != length(string_aux)){
	return 1; 
	}

	for(count = 0; count < length(string); count++) 
	{
		if((int)*aux != (int)*aux_ptr){
		return 1;  
		}
		aux++;
		aux_ptr++;

	}
	return 0;
}

int equalsIgnoreCase(char *string, char *string_aux){
	int count;
	char *aux;
	char *aux_ptr;

	aux = string;
	aux_ptr = string_aux;

	if(length(string) != length(string_aux)){
	return 0; 
	}

	for(count = 0; count < length(string); count++){
		if (((int)*aux >= 65 && (int)*aux <= 90) || ((int)*aux >= 97 && (int)*aux <= 122)){

			if((int)*aux >= 65 && (int)*aux <= 90){
				if((int)*aux != (int)*aux_ptr ){
					if ((int)*aux  != ((int)*aux_ptr - 32)){
						return 0;
					}
				}
			}

			if((int)*aux >= 97 && (int)*aux <= 122){
				if((int)*aux != (int)*aux_ptr ){
					if ((int)*aux   != ((int)*aux_ptr + 32)){
						return 0;
					}
				}
			}
		} else {
			if((int)*aux != (int)*aux_ptr){
			 return 0;
			}
		}
		aux++;
		aux_ptr++;
	}
	return 1;
}

// CAROL SUBSTRING

char *substring(char *nome, int posInicial, int posFinal){
	int tamanho = (posFinal-posInicial)+1;
	int i;
	int posicao=posInicial;
	char *novaString=(char *)malloc(tamanho);
	for(i = 0;i < tamanho; i++){
		novaString[i] = nome[posicao];
		posicao++;
	}
	printf("\n\nString copiada:\n%s",novaString);
}

int lenght(char *nome){		

	int tamanho;
	for(tamanho=0; *nome!='\0';tamanho++){
		nome++;
	}
	return tamanho;
}

//CAROL 

//louise 
char *replace(char *string, char str1, char str2){
	int count;
	char *aux;

	aux = string;

	for(count = 0; count < length(string); count++){
		if(*aux == str1){
			*aux = str2;
		}
		aux++;
	}
	return string;
}

//gustavo
int firstIndexOf(char *frase,char i){
	int x;
	for( x=0;*frase;x++){
		if(i==*frase){
			break;
		}
		frase++;
	}
	return x;
}

int length( char *frase){
	int tamanho=0;

	
	for(tamanho=0; *frase;tamanho++){
		frase++;
	}
	return tamanho;
}

int lastIndexOf(char *frase,char i){
	int y=length(frase)-1;
	frase = frase + (length(frase)-1);
	for(y;*frase;y--){
		if(i==*frase){
			break;
		}
		frase--;
	}
	return y;
}

// Thaíza

char *toUpperCase(char * string){
	int tamanho, i;
	tamanho = length(string);
	for (i = 0; i < tamanho; i++){
		if ((*string >= 97) && (*string <= 122)){
		*string = *string - 32;
		}
		string++;	
	}
	return string;
}

char *toLowerCase(char * string){
	int tamanho, i;
	tamanho = length(string);
	
	for (i = 0; i < tamanho; i++){
		if ((*string >=65) && (*string <=90)){
		*string = *string + 32;
		}
		string++;		
	}
	return string;	
}
