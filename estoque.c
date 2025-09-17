#include<stdio.h>

struct produto
{
	char nome[25];
	int codigo;
	int quant;
	double preco;
};
	

int main()
{
	double pagar = 0.0;
	double valor = 0.0;
	int escolha = 0;
	int pagamento = 0;
	FILE *estoq;
	struct produto p[1000];
	int codigo = 0;
	int quant = 0;
	int cod = 0;
	int i = 0;
	
	printf("_________________________\n");
	printf("|1- Ver estoque.........|\n");
	printf("|2- Cadastrar Produto...|\n");
	printf("|3- Escolhe Produto.....|\n");
	printf("|4- Sair................|\n");
	printf("|_______________________|\n");

	scanf("%d", &escolha);
	switch(escolha)
	{
		case 1:
			estoq = fopen("estoque.txt", "r");
			if (estoq == NULL)
			{
				printf("Erro!!! O arquivo nao foi aberto\n");
			}
			else 
			{
				printf("___________________________________\n");
				printf("|Produto| Codigo| Quantidade|Preco|\n");
				while(fscanf(estoq,"%s\n%d\n%d\n%lf\n", p[i].nome, &p[i].codigo, &p[i].quant, &p[i].preco) != EOF)
				{
					printf("|%s| %d| %d| %.2lf|\n", p[i].nome, p[i].codigo, p[i].quant, p[i].preco);
					i++;
				}
				printf("|Sair|   08		|\n");
				printf("|_________________________________|\n");
			}
			fclose(estoq);
		break;
		
		case 2:
			printf("Quantos produtos deseja cadastrar?\n");
			scanf("%d", &quant);
			estoq = fopen("estoque.txt", "a");
			for(int i = 0; i < quant; i++)
			{
				printf("Escreva o nome do produto que quer cadastrar\n");
				scanf(" %[^\n]", p[i].nome);
				printf("Agora escreva o codigo do produto\n");
				scanf("%d", &p[i].codigo);
				printf("Agora a quantidade\n");
				scanf("%d", &p[i].quant);
				printf("Agora o preco\n");
				scanf("%lf", &p[i].preco);
				
				fprintf(estoq, "%s\n%d\n%d\n%.2lf\n", p[i].nome, p[i].codigo, p[i].quant, p[i].preco);
			}
			fclose(estoq);
		break;
		
		case 3:
		printf("Digite o codigo do produto desejado\n");
		scanf("%d",&codigo);
	switch(codigo)
	{
		case 1:
			printf("agora digite a quantidade\n");
			scanf("%d", &quant);
			valor += (2.00 * quant);
		break;
		case 2:
			printf("agora digite a quantidade\n");
			scanf("%d", &quant);
			valor += (2.75 * quant);
		break;
		case 3:
			printf("agora digite a quantidade\n");
			scanf("%d", &quant);
			valor += (3.25 * quant);;
		break;
		case 4:
			printf("agora digite a quantidade\n");
			scanf("%d", &quant);
			valor += (9.00 * quant);
		break;
		case 5:
			printf("agora digite a quantidade\n");
			scanf("%d", &quant);
			valor += (4.50 * quant);
		break;
		case 6:
			printf("agora digite a quantidade\n");
			scanf("%d", &quant);
			valor += (5.00 * quant);
		break;
		case 7:
			printf("agora digite a quantidade\n");
			scanf("%d", &quant);
			valor += (1.50 * quant);
		break;
		case 10:
			printf("Saindo...\n");
		break;
		default:
			printf("O codigo digitado nao existe, tente outro codigo que esta na tabela\n");
	}while(codigo != 10);
	}while(codigo != 4);

	printf("O valor total deu %.2lf, qual sera a forma de pagamento?\n");
	printf("Opcoes\n");
	printf("1- Pix\n");
	printf("2- Debito\n");
	printf("3- Credito\n");
	printf("4- Dinhero\n");
	
	scanf("%d", &pagamento);
	
	switch(pagamento)
	{
		case 1: 
			printf("Mire a camera do seu celular para perto do QR code\n");
			printf("Processando...\n");
			printf("Pagamento realizado com sucesso, obrigado!\n");
		break;
		case 2:
			printf("Aproxime seu cartao ou insira na maquininha\n");
			printf("Processando...\n");
			printf("Pagamento realizado com sucesso, obrigado!\n");
		break;
		case 3:
			printf("Aproxime seu cartao ou insira na maquininha\n");
			printf("Processando...\n");
			printf("Cartao recusado, tem que pagar a fatura do cartao! KKK\n");
		break;
		case 4:
			printf("Processando cedulas e moedas...\n");
			printf("Pagamento realizado com sucesso, obrigado!\n");
		break;
		
		printf("Obrigado pela preferencia!\nVolte sempre!\n");
	}
	
	return(0);
}
