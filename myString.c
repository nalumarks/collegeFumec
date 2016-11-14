#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char nome[100];
	
	printf("Digite o nome teste: ");
	gets(nome);
	
	printf("\n\n%s tem %d caracteres", nome, tamanho);
	return 0;
}

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

char *substring(char *string, int primeiro, int ultimo){
	int count;
	char caracter[(ultimo - primeiro)+1];
	char *aux;

	aux = string;

	if (length(string) == (ultimo - primeiro)+1){ 
	return aux;
	}
	if ((ultimo + 1) > length(string) && (ultimo - primeiro) > 1){
	return NULL;
	}
	if (ultimo < primeiro) {
	return (aux + primeiro); 
	}
	if ((ultimo - primeiro) == 1) {
		aux = (string + (primeiro));
		if (ultimo < length(string)){
			aux++;
			*aux = '\0';
		}
		aux = (string + (primeiro));
		return aux;
	}
	aux = (string + (primeiro - 1));

	for(count = primeiro; count < ultimo; count++){
		aux++;
	}

	if (ultimo < length(string)){
		aux++;
		*aux = '\0';
	}
	aux = (string + (primeiro));
	return aux;
}

int length(char *nome){
	int tamanho=0;
	
	for(tamanho=0; *nome != '\0'; tamanho++){ 
		nome++;
	}
	return tamanho;
}

char *toUpperCase(char *string){
	int count;
	char *aux;

	aux = string;

	for(count = 0; count < length(string); count++){
		if((int)*aux >= 97 && (int)*aux <= 122){
			*aux = (char)((int)*aux - 32);
		}
		aux++;
	}
	return string;
}

char *toLowerCase(char *string){
	int count;
	char *aux;

	aux = string;

	for(count = 0; count < length(string); count++){
		if((int)*aux >= 65 && (int)*aux <= 90){
			*aux = (char)((int)*aux + BASE_ANSI);
		}
		aux++;
	}
	return string;
}

char *replace(char *string, char str_old, char str_new){
	int count;
	char *aux;

	aux = string;

	for(count = 0; count < length(string); count++){
		if(*aux == str_old){
			*aux = str_new;
		}
		aux++;
	}
	return string;
}

int lastIndexOf(char *string, char str_at){
	int count;
	char *aux;

	aux = string;

	for(; *aux != '\0'; aux++);

	for(count = length(string); count >= -1 ; count--){
		if(count == -1){
		 return -1; 
		}
		if(*aux == str_at){
		 return count; 
		}
		aux--;
	}
}

int firstIndexOf(char *string, char str_at){
	int count;
	char *aux;

	aux = string;
	
	for(count = 0; count <= length(string); count++){
		if(count == length(string)) {
		 return -1;
		}
		if(*aux == str_at){
      return count; 
    		}
		aux++;
	}
}
