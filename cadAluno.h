#include "myString.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// colocar o restante dos includes

typedef struct {
	char nome [200];
  	char endereco [200];
  	char dtNasc [11];
  	int sequencial;
  	char matricula[8];
}Usuario;

typedef struct {
	int dia;
	int mes;
	int ano;
}Data;

void menuPrincipal(int tam);

Usuario *cadastroAluno(int tam);
int camposVazios(char *str);
int validarData (char *data);
void pesquisarSobreNome (Usuario *user, int tam);
char gerarCod(Usuario *user, int tam);
//preencher depois que a pesquisa estiver pronta
void buscarNumeroCasa();
void buscarSobrenome();
void buscarAnoNascimento();
void buscarUsuarioMesNascimento();
void buscarMatricula();

#ifndef WINDOWS
	#define WINDOWS
#endif
