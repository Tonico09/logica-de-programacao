#include<stdio.h>

struct Aluno
	{
		char nome[20];
		int idade;
		float nota;
	};
	
int main()
{
	struct Aluno a1[5];
	
	for(int i = 0; i < 5; i++)
	{
		printf("Informe o seu nome\n");
		scanf("%s", a1[i].nome);
		printf("Informe sua idade\n");
		scanf("%d", &a1[i].idade);
		printf("Informe sua nota\n");
		scanf("%f", &a1[i].nota);
		printf("Aluno cadastrado:\n");
		printf(" Nome: %s\n Idade: %d\n Nota: %.2f\n", a1[i].nome, a1[i].idade, a1[i].nota);
	}
	
	printf("\nObrigado, ate mais\n desligando...\n");
	return(0);
}