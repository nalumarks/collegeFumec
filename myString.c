#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define NOTFOUND -1
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

int length(char *nome){		

	int tamanho;
	for(tamanho=0; *nome!='\0';tamanho++){
		nome++;
	}
	return tamanho;
}

int equalsIgnoreCase(char* str1, char* str2){
    if (length(str1) != length(str2)){
        return FALSE;
    }
    while(*str1 != '\0'){
        if (tolower(*str1) != tolower(*str2)){
            return FALSE;
        }
        str1++;
        str2++;
    }
    return TRUE;
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
	
	return novaString;
	
}

//CAROL 

//louise 
void replace(char* str, char o, char c){
    while(*str != '\0'){
        if (*str == o){
            *str = c;
        }
        str++;
    }
}

//gustavo
int firstIndexOf(char *frase,char i){
	char *aux = frase;
    int index = 0;
    while(*aux != '\0'){
        if(*aux == i){
            return index;
        }
        index++;
        aux++;
    }
    return -1;
}
/*
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
*/

int lastIndexOf(char *frase, char i){
    char* pch = strrchr(frase, i);
    if (pch == NULL) {
        return NOTFOUND;
    }
    return pch - frase;
}
// Thaíza

void toUpperCase(char * string){
	int tamanho, i;
	tamanho = length(string);
	for (i = 0; i < tamanho; i++){
		if ((*string >= 97) && (*string <= 122)){
		*string = *string - 32;
		}
		string++;	
	}	
}

void toLowerCase(char * string){
	int tamanho, i;
	tamanho = length(string);
	
	for (i = 0; i < tamanho; i++){
		if ((*string >=65) && (*string <=90)){
		*string = *string + 32;
		string++;
		}		
	}	
}
