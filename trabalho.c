#include<stdio.h>


double Soma(double x, double y);
double Subtracao(double x, double y);
double Divisao(double x, double y);
double Multiplicacao(double x, double y);
double Potenciacao(double base, int exp);
int Mdc( int x, int y);
int Mmc(int x, int y);
double RaizQuadrada(double x);
int FatorialDuplo(int x);
unsigned long long FatorialSimples(int x);
void EquacaoSgrau(double x, double y, double z);

int main()
{
	int opcao = 0;
	double result = 1.0;
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	int expo = 0;
	int A = 0; 
	int B = 0; 
	int result1 = 0;
	int resultLong = 0;
	double raiz = 0.0;
	

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
		
		if (scanf("%d",&opcao) != 1)
		{
			printf("Numero digitado é invalido\n");
			continue;
		}

		
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
			break;
			case 0:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%d",&A);
				printf("Informe outro numero\n");
				scanf("%d",&B);
				result1 = Mdc(A, B);
				printf("O resultado e: %d\n",result1);
				break;
			case 1:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%d",&A);
				printf("Informe outro numero\n");
				scanf("%d",&B);
				result1 = Mmc(A, B);
				printf("O resultado e: %d\n",result1);
			break;
			case 8:
				printf("Informe o numero que deseja realizar a operacao:\n");
				scanf("%d",&A);
				raiz = RaizQuadrada(A);
				if (raiz != -1)
				printf("O resultado e: %.5lf\n",raiz);
			break;
			case 9:
				printf("Informe o numero que deseja realizar a operacao:\n");
				scanf("%d",&A);
				if(A < 0)
				{
					printf("Nao existe Fatorial Duplo para numeros negativos\n");
					break;
				}
				resultLong = FatorialDuplo(A);
				printf("O resultado e: %d\n",resultLong);
			break;
			case 10:
				printf("Informe o numero que deseja realizar a operacao:\n");
				scanf("%d",&A);
				if(A < 0)
				{
					printf("Fatorial nao existe para numeros negativos\n");
				}
				else 
				{
				unsigned long long fat = FatorialSimples(A);
				printf("O resultado e: %llu\n",fat);
				}
			break;
			case 11:
				printf("Informe os numeros que deseja realizar a operacao:\n");
				scanf("%lf %lf %lf", &a, &b, &c);
				EquacaoSgrau(a, b, c);
			break;
			case 3:
			printf("Saindo da Calculadora. . .\n");
			break;
			
			default:
			printf("Nao eh possivel fazer essa operacao\n");
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
int Mdc(int x, int y)
{
	int resto;
	while (y != 0)
	{
		resto = x % y;
		x = y;
		y = resto;
	}
	return(x);
}
int Mmc(int x, int y)
{
	return (x * y) / Mdc(x, y);
}
double RaizQuadrada(double x)
{
	double raiz1 = x;
	double novo_x = x / 2.0;
	if (x < 0)
	{
		printf("Nao existe raiz quadrada de numero negativo\n");
		return (-1);
	}
	
	raiz1 = 0.5 * ( novo_x + x / novo_x);
	novo_x = raiz1;
	
	return(raiz1);
}
int FatorialDuplo(int x) 
{
  int result = 1;
  {
    for (int i = x; i > 0; i -= 2) 
	{
      result *= i;
    }
  }
  return(result);
}
unsigned long long FatorialSimples(int x)
 {
    if (x < 0) return 0;

    unsigned long long result = 1;

    for (int i = 1; i <= x; i++) 
	{
        result *= i;
    }
    return(result);
}
void EquacaoSgrau(double x, double y, double z)
{
	if(x == 0)
	{
		printf("Isso nao eh uma equacao do segundo grau\n");
		return;
	}
	double delta = Potenciacao(y, 2) - 4 * x * z;
	if(delta < 0)
	{
		printf("Nao existem raizes reais\n");
	}
	else if
		(delta == 0) 
		{
        double raiz = -y / (2*x);
        printf("Raiz unica: %.5lf\n", raiz);
		}
	else
	{
	double raizum = ((-1*y) + RaizQuadrada(delta)) / (2*x);
	double raizdois = ((-1*y) - RaizQuadrada(delta)) / (2*x);
	printf("Raizes reais:\n raizum = %.5lf\n raizdois = %.5lf\n",raizum, raizdois);
	}

}
