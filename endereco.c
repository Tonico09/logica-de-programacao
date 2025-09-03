#include<stdio.h>

struct Pessoa
{
		char nome[20];
		char endereco[20];
		int numero;
};
	
int main()
{
	struct Pessoa p;
	printf("Digite o seu nome\n");
	scanf("%[^\n]", p.nome);
	
	printf("Digite o seu endereco\n");
	scanf(" %[^\n]", p.endereco);
	
	printf("Digite o numero de sua casa\n");
	scanf("%d", &p.numero);
	
	printf("\nCadastro finalizado!\n");
	printf(" Nome: %s\n", p.nome);
	printf(" Endereco: R. %s\n", p.endereco); 
	printf(" Numero da casa: %d\n", p.numero);

	return(0);
}