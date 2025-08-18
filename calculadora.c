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
		printf("Escolha uma opcao abaixo\n");
		printf("------------------------\n");
		printf("|1 - Soma               |\n");
		printf("|2 - Subtracao          |\n");
		printf("|3 - Multiplicacao      |\n");
		printf("|4 - Divisao            |\n");
		printf("|5 - Potenciacao        |\n");
		printf("|6 -    sair            |\n");
		printf("------------------------\n");
		
		scanf("%d",&opcao);

		
		switch(opcao)
		{
			case 1:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Soma(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 2:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%lf",&b);
				result = Subtracao(a,b);
				printf("O resultado e: %.2lf\n",result);
			break;
			case 3:
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
			case 5:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf",&a);
				printf("Informe outro numero\n");
				scanf("%d",&expo);
				result = Potenciacao(a,expo);
				printf("O resultado e: %.2lf\n",result);
		}
		
	}while(opcao != 6);

	printf("Obrigado por usar minha calculadora\n");
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