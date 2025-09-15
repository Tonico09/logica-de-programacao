#include<stdio.h>

 int main()
{
	FILE *arq;
	char palavra[20];
	int idade = 0;
	
	arq = fopen("arquivo.txt", "a");

	if (arq == NULL)
	{
		printf("Erro!!! O arquivo nao foi aberto\n");
	}
	else 
	{
		printf("O arquivo foi aberto\n");
		
	}
	for(int i = 0; i < 10; i++)
	{
		printf("Informe o seu nome\n");
		scanf("%s",palavra);
		printf("Informe sua idade\n");
		scanf("%d",&idade);
	}
	
	while(fscanf(arq,"%s\n%d\n", palavra, &idade) != EOF)
	{
		printf("%s\n%d\n", palavra, &idade);
	}
	
	fclose(arq);
	return(0);
}
