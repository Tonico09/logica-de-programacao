#include<stdio.h>

struct Livro
{
		char titulo[20];
		char autor[20];
		float preco;
};
	
int main()
{
	struct Livro n1;
	printf("Digite o titulo do livro\n");
	scanf("%[^\n]", n1.titulo);
	
	printf("Digite o autor do livro\n");
	scanf(" %[^\n]", n1.autor);
	
	printf("Digite o preco do livro\n");
	scanf("%f", &n1.preco);
	
	printf("\nCadastro do livro finalizado!\n");
	printf(" Titulo: %s\n", n1.titulo);
	printf(" Autor: %s\n", n1.autor); 
	printf(" Valor: R$%.2f\n", n1.preco);

	return(0);
}