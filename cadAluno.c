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
	//String str = new;
	
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
			gets(auxiliar->nome);
			//scanf("%s", &user->nome );
			//printf("%s", user->nome );
		
			verdadeiro = !camposVazios(auxiliar->nome);
			
			if(!verdadeiro){
				printf("\nO NOME NAO PODE FICAR EM BRANCO\n");
			}
			
		}while(!verdadeiro);
		
		do {
			verdadeiro = 1;
			printf("\nInforme o endereco (separando o numero por virgula(,))\n");
			gets(user->endereco);
			
			
			
			
			
		}while(!verdadeiro);
	
		auxiliar++;
		
	}
	 return user;
}

int camposVazios(char *str) {
	int i = 0;
	char *auxiliar1;
	
	auxiliar1 = str;
		for(i = 0; *(auxiliar1) != '\0'; i++) {
		if(*(auxiliar1) != ' ') {
			//printf("%c", *auxiliar1);
			return 0;
		}
		auxiliar1++;
	}
	return 1;
}

