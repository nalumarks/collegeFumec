#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define NOTFOUND -1
//ANNA

int length(char *nome){		

	int tamanho;
	for(tamanho=0; *nome!='\0';tamanho++){
		nome++;
	}
	return tamanho;
}

int equals(char* str1, char* str2){
    return TRUE ? !strcmp(str1, str2) : FALSE;
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
char* substring(char* str1, int ini, int fim){
    char* sub = (char*)malloc(sizeof((fim - ini) + 1));
    int i,j;
    for (i = ini,j=0; i < fim; ++i, j++) {
        sub[j] = str1[i];
    }
    sub[fim - ini] = '\0';
    return sub;
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
