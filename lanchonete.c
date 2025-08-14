#include<stdio.h>

int main()
{
	char nome[20];
	int prod = 0;
	int quant = 0;
	int codigo = 0;
	double valor = 0;
	double pagar = 0;
	
	printf("Seja-Bem Vindo a Lanchonete do Senai!\n Digite o seu nome para que possa anotar seu pedido\n");
	scanf("%s",&nome);
	
	do{
	printf("%s o que gostaria de pedir hoje?\n",nome);
	printf(" ________________________________________\n");
	printf("|Produto 	 Codigo 	 Valor   |\n");
	printf("| Misto Quente	   1		R$ 3.50	 |\n");
	printf("| Dogao Simples    2 		R$ 8.50  |\n");
	printf("| Dogao Duplo	   3 		R$ 10.00 |\n");
	printf("| Dogao Triplo 	   4 		R$ 12.50 |\n");
	printf("| Agua c/gas 	   5 		R$ 2.50	 |\n");
	printf("| Coca Cola 	   6 		R$ 3.60  |\n");
	printf("| Coca Zero 	   7 		R$ 4.00  |\n");
	printf("| Sair		   8    	    	 |\n");
	printf("|________________________________________|\n");
	
	printf("%s digite o numero do seu produto, por favor\n", nome);
	scanf("%d",&codigo);
	switch(codigo)
	{
		case 1:
		printf("%s agora digite a quantidade\n", nome);
		scanf("%d", &quant);
		valor += (3.50 * quant);
		break;
		case 2:
		printf("%s agora digite a quantidade\n", nome);
		scanf("%d", &quant);
		valor += (8.50 * quant);
		break;
		case 3:
		printf("%s agora digite a quantidade\n", nome);
		scanf("%d", &quant);
		valor += (10.00 * quant);;
		break;
		case 4:
		printf("%s agora digite a quantidade\n", nome);
		scanf("%d", &quant);
		valor += (12.50 * quant);
		break;
		case 5:
		printf("%s agora digite a quantidade\n", nome);
		scanf("%d", &quant);
		valor += (2.50 * quant);
		break;
		case 6:
		printf("%s agora digite a quantidade\n", nome);
		scanf("%d", &quant);
		valor += (3.60 * quant);
		break;
		case 7:
		printf("%s agora digite a quantidade\n", nome);
		scanf("%d", &quant);
		valor += (4.00 * quant);
		break;
		case 8:
			printf("Pedido encerrado\n");
		break;
		default:
		printf("%s o numero digitado nao existe\n Digite outro numero existente do cardapio\n", nome);
	
	}
	}while(codigo != 8);

	printf("%s esse e o valor do seu pedido %.2lf, obrigado por comprar na Lanchonete do Senai!\n", nome, valor);
	printf("Volte sempre para nossa Lanchonete!\n");
	
	
	return(0);
}