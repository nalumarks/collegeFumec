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
	Usuario* user;
	int op; //op = opção
	do{
		system("cls");
		
		printf("+---------------------------------------------+");
		printf("\n|              MENU                         |");
		printf("\n+---------------------------------------------+");
		printf("\n|  [1] - CADASTRAR USUARIO                    |");
		
		scanf("%d", &op);
		
	}while (op !=0);
}
