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
	double valor = 0.0;
	int escolha = 0;
	int pagamento = 0;
	FILE *estoque;
	struct produto p[1000];
	int codigo = 0;
	int quant = 0;
	int i = 0;
	do{
	
	printf("____________________________\n");
	printf("|1- Ver estoque............|\n");
	printf("|2- Cadastrar Produto......|\n");
	printf("|3- Escolhe Produto........|\n");
	printf("|4- Valor Total de estoque.|\n");
	printf("|5- Adicionar quantidade...|\n");
	printf("|6- Sair...................|\n");
	printf("|__________________________|\n");
	
	scanf("%d", &escolha);
	switch(escolha)
	{
		case 1:
			estoque = fopen("estoque.txt", "r");
			if (estoque == NULL)
			{
				printf("Erro!!! O arquivo nao foi aberto\n");
			}
			else 
			{
				printf("___________________________________\n");
				printf("|Produto| Codigo| Quantidade|Preco|\n");
				while(fscanf(estoque,"%[^\n]\n%d\n%d\n%lf\n", p[i].nome, &p[i].codigo, &p[i].quant, &p[i].preco) != EOF)
				{
					printf("|%s| %d| %d| %.2lf|\n", p[i].nome, p[i].codigo, p[i].quant, p[i].preco);
					i++;
				}
				printf("|_________________________________|\n");
			}
			fclose(estoque);
		break;
		
		case 2:
			printf("Quantos produtos deseja cadastrar?\n");
			scanf("%d", &quant);
			estoque = fopen("estoque.txt", "a");
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
				
				fprintf(estoque, "%s\n%d\n%d\n%.2lf\n", p[i].nome, p[i].codigo, p[i].quant, p[i].preco);
			}
			fclose(estoque);
			
			printf("Deseja cadastrar mais algum produto?\n");
			printf("Se deseja digite o codigo para cadastrar, se nao digite outro\n");
			printf("Abaixo vai estar a tabela para relembrar os codigos\n");
		break;
		
		case 3:
			estoque = fopen("estoque.txt", "r");
				printf("Digite o codigo do produto desejado\n");
				scanf("%d",&codigo);
				int i = 0;
				valor = 0.0;
				while(fscanf(estoque, " %[^\n]\n%d\n%d\n%lf", p[i].nome, &p[i].codigo, &p[i].quant, &p[i].preco) != EOF)
				{
					if(codigo == p[i].codigo)
					{
						valor += (double) p[i].preco * p[i].quant;
						printf("O produto pesquisado foi (%s), a quantidade dele eh (%d) o preco dele eh (%.2lf)\n", p[i].nome, p[i].quant, p[i].preco);
						printf("O valor total deu %.2lf\n", valor);
					}
					i++;
				}
				
			fclose(estoque);
		break;
			
		case 4:
			estoque = fopen("estoque.txt", "r");
			if(estoque != NULL)
			{
				i = 0;
				valor = 0.0;
				while(fscanf(estoque, "%s\n%d\n%d\n%lf", p[i].nome, &p[i].codigo, &p[i].quant, &p[i].preco) != EOF)
				{
					valor += (double) p[i].preco * p[i].quant;
					i++;
				}
				printf("O valor total deu %.2lf\n", valor);
				fclose(estoque);
			}
			else
			{
				printf("erro!!!\n");
			}
			
		break;
		
		case 5:
			i = 0;
			estoque = fopen("estoque.txt", "r");
			printf("Qual produto deseja alterar a quantidade?, digite o codigo do produto\n");
			scanf("%d", &codigo);
			printf("Digite a quantidade desejada\n");
			scanf("%d", &quant);
				while(fscanf(estoque, "%s\n%d\n%d\n%lf", p[i].nome, &p[i].codigo, &p[i].quant, &p[i].preco) != EOF)
				{	
					if(codigo == p[i].codigo)
					{
						p[i].quant = quant  ;
					}
					i++;
				}
			printf("Quantidade atualizada com sucesso!\n");
			fclose(estoque);
			estoque = fopen("estoque.txt", "w");
			for( int h = 0; h < i; h++)
			{
				fprintf(estoque, "%s\n%d\n%d\n%.2lf\n", p[h].nome, p[h].codigo, p[h].quant, p[h].preco);
			}
			fclose(estoque);
		break;
		
		case 6:
			printf("Saindo...\n");
		break;
		
		default:
			printf("O codigo digitado nao existe, tente outro codigo que esta na tabela\n");
	}
	}while(escolha != 6);
	
	printf("O valor total deu %.2lf, qual sera a forma de pagamento?\n", valor);
	printf("Opcoes\n");
	printf("1- Pix\n");
	printf("2- Debito\n");
	printf("3- Credito\n");
	printf("4- Dinhero\n");
	printf("5- Sair\n");
	
	do
	{
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
				printf("Cartao recusado, tem que pagar a fatura do cartao!!! KKKKKKKKK\n");
			break;
			case 4:
				printf("Processando cedulas e moedas...\n");
				printf("Pagamento realizado com sucesso, obrigado!\n");
			break;
			case 5:
				printf("Saindo...\n");
			break;
			default:
			printf("O numero digitado nao corresponde a nenhuma das opcoes, selecione a correta!\n");
		}
	}while(pagamento != 5);

	printf("Obrigado pela preferencia!\nVolte sempre!\n");
	
	return(0);
}
