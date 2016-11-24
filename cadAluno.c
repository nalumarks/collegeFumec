#include "cadAluno.h"
int main(){
	int tamanho;
	
	printf("Informe a quantidade de alunos a ser cadastrados:\n");
	scanf("%d", &tamanho);
	
	menuPrincipal(tamanho);
	system("cls");
	
	return 0;
}

void menuPrincipal(int tam){
	Usuario* p_User;
	int op; //op = opção
	do{
		system("cls");
		printf("\n+--------------INFORME UMA OPCAO--------------+");
		printf("\n+---------------------------------------------+");
		printf("\n|  (1) - CADASTRAR USUARIO                     |");
		printf("\n|  (0) - SAIR                                 |");
		printf("\n+---------------------------------------------+");
		
		printf("\n\nESCOLHA UMA OPCAO: ");
		scanf("%d", &op);
		fflush(stdin);
		
		switch(op){
			case 0 : break;
			case 1 : { 
				p_User = cadastroAluno(tam);
				break;
			}//fim case 1
			default:{
				fflush(stdin);
				printf("\n\nOpcao invalida! Por favor, informe outra opcao\n\n ");
				break;
			}
			
		}//fim switch
		system("pause");
	}while (op !=0);
	
}//fim menu principal

Usuario *cadastroAluno(int tam){
	Usuario *user;
	Usuario *auxiliar;
	int i;
	int verdadeiro;	
	
	user = (Usuario*) malloc(tam*sizeof(Usuario));
	if(user==NULL){
		printf("Alocacao nao realizada");
	}
	
	auxiliar = user;
	
	printf("\n\n+-------------- CADASTRO --------------+");
	for (i=0; i<tam; i++){
		
		do{
			verdadeiro = 1;
			
			printf("\nInforme NOME e SOBRENOME do aluno:\n");
			fflush(stdin);
			//gets(user->nome);
			scanf("%s", &user->nome );
			//printf("%s", user->nome );
		
			verdadeiro = !camposVazios(auxiliar->nome);
			
			if(!verdadeiro){
				printf("\nO NOME NAO PODE FICAR EM BRANCO\n");
			}
			
		}while(!verdadeiro);
		
		auxiliar++;
		
	}
	
}

int camposVazios(char *str) {
	int i = 0;
	char *auxiliar;
	
	auxiliar = str;
		for(i = 0; *(auxiliar) != '\0'; i++) {
		if(*(auxiliar) != ' ') {
			return 0;
		}
		auxiliar++;
	}
	return 1;
}

void buscarNumeroCasa() {
	int numeroCasa;
	int numeroBuscar;

	printf("----Buscar pelo número de casa Aluno----\n");
	printf("Digite o numero da casa do aluno: ");
	gets(numeroCasa); //gets ou scanf?

	if(numeroBuscar == numeroCasa){
	printf("O nome do Aluno: \n", 			Usuario.nome); //confirmar como imprimir corretamente
	printf("O endereco do Aluno: \n",		Usuario.endereco);
	printf("A data de nascimento do Aluno: \n", 	Usuario.dtNasc);	
		
	}
}

void buscarSobrenome() {	
	char sobrenome[100];
	char sobrenomeBuscar[100];

	printf("----Buscar pelo sobrenome do Aluno----\n");
	printf("----Digite o sobrenome do aluno: \n");
	gets(sobrenome);
	
	if(){
		
	}
}

void buscarAnoNascimento() {
	int anoNascimento;
	int anoBuscar;

	printf("----Buscar pelo ano de nascimento do Aluno----\n");
	printf("----Digite o ano do nascimento do aluno: ");
	scanf("%d", &anoNascimento);
	
	if(){
		
	}
}

void buscarUsuarioMesNascimento() {
	int mesNascimento;
	int mesBuscar;
	
	printf("----Buscar pelo mes de nascimento do Aluno----\n");
	printf("----Digite o mes do nascimento do aluno: ");
	scanf("%d", &mesNascimento);
	
	if(){
		
	}
}

void buscarMatricula() {
	int matricula;
	int matriculaBuscar;

	printf("----Buscar pela matricula do Aluno----\n");
	printf("----Digite a matricula do aluno: ");
	scanf("%d", &matricula);
	
	if(){
		
	}

