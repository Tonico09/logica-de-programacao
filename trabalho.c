#include<stdio.h>


double Soma(double x, double y);
double Subtracao(double x, double y);
double Divisao(double x, double y);
double Multiplicacao(double x, double y);
double Potenciacao(double base, int exp);

int main()
{
	int opcao = 0;
	double result = 1.0;
	double a = 0.0;
	double b = 0.0;
	int expo = 0;
	
	do{
	printf("---------------------------------------\n");
	printf("|Bem vindo a Calculadora 1.0..........|\n");
	printf("|Escolha uma opcao....................|\n");
	printf("---------------------------------------\n");
	printf("| 0 - MDC.............................|\n");
	printf("| 1 - MMC.............................|\n");
	printf("| 2 - Soma............................|\n");
	printf("| 3 - Sair............................|\n");
	printf("| 4 - Divisao.........................|\n");
	printf("| 5 - Subtracao.......................|\n");
	printf("| 6 - Potenciacao.....................|\n");
	printf("| 7 - Multiplicacao...................|\n");
	printf("| 8 - Raiz Quadrada...................|\n");
	printf("| 9 - Fatorial Duplo (N!!)............|\n");
	printf("| 10 - Fatorial Simples (N!)..........|\n");
	printf("| 11 - Equacao do Segundo Grau........|\n");
	printf("---------------------------------------\n");
		
		scanf("%d",&opcao);

		
		switch(opcao)
		{
			case 2:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Soma(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 5:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Subtracao(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 7:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Multiplicacao(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 4:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				if(b ==0)
				{
					printf("Nao e possivel realizar divisao por 0\n");
				}
				else
				{
					result = Divisao(a,b);
					printf("O resultado e: %.2lf\n",result);
				}
			break;
			case 6:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%d",&expo);
				result = Potenciacao(a,expo);
				printf("O resultado e: %.2lf\n",result);
		}
		
	}while(opcao != 3);

	printf("Obrigado por usar a Calculadora 1.0\n");
	return(0);

}


double Soma(double x, double y)
{
	double result = 0.0;
	result = x+y;
	return(result);
}
double Subtracao(double x, double y)
{
	double result = 0.0;
	result = x-y;
	return(result);
}
double Divisao(double x, double y)
{
	double result = 0.0;
	result = x/y;
	return(result);
}
double Multiplicacao(double x, double y)
{
	double result = 0.0;
	result = x*y;
	return(result);
}
double Potenciacao(double base, int exp)
{
	double result = 1.0;
	for(int i = 0; i<exp; i ++)
	{
		result *= base;
	}
	return(result);
}