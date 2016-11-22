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
		
		switch(op){
			case 0 : break;
			case 1 : { 
				p_User = cadastroAluno(tam);
				break;
			}//fim case 1
			default:{
				printf("Opcao invalida! Por favor, informe outra opcao :) ");
				break;
			}
			
		}//fim switch
		
	}while (op !=0);
	
}//fim menu principal

Usuario *cadastroAluno(int tam){
	Usuario *user;
	Usuario *auxiliar;
	
	
	user = (Usuario*) malloc(tam*sizeof(Usuario));
	if(user=NULL){
		printf("Alocacao nao realizada");
	}
	
}
