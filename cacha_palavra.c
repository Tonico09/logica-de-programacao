#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void LerPavra(char * palavra);
int TamanhoPalavra(char * palavra);

int main()
{
	char palavra_um[20];
	char palavra_dois[20];
	int t_palavra_um = 0;
	int t_palavra_dois = 0;
	int tam_final = 0;
	
	printf("Bem vindo ao Cacha Palavras\n");
	LerPavra(palavra_um);
	LerPavra(palavra_dois);
	t_palavra_um = TamanhoPalavra(palavra_um);
	t_palavra_dois = TamanhoPalavra(palavra_dois);
	
	if(t_palavra_um >= t_palavra_dois)
	{
		tam_final = t_palavra_um+6;
	}
	else
	{
		tam_final = t_palavra_dois+6;
	}
	
	char tabuleiro[tam_final][tam_final];

void GerarTabuleiro(char *tabuleiro,int tam)
{
	srand(time(NULL));
	for(int i = 0; i < tam; i++)
	{
		for(int k = 0; k < tam; k++)
		{	
			tabuleiro[i] [k] = rand() % 26 + 97;
		}
	}
	
}
void ImprimirTabuleiro(char *tabuleiro, int tam)
{
	for(int i = 0; i < tam; i++)
	{
		for(int k = 0; k < tam; k++)
		{
			printf(" %d ",tabuleiro[i] [k]);
		}
		printf("\n");
	}
}
void Palavra_Horizontal(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra)
{
	int sorteiaColuna = rand()%2;
	int sorteiaLinha = rand()%tam_tabuleiro;
	int j = 0;
	for(int l = sorteiaLinha; l < tam_tabuleiro; l++)
	{
		for(int c = sorteiaColuna; j < tam_palavra ; c++)
		{
			tabuleiro[l] [c] = palavra[j];
			j++;
		}
		break;
	}
	return(0);
}
void Palavra_Vertical(char *tabuleiro, int tam_tabuleiro, char *palavra, int tam_palavra)
{
	int sorteiaColuna = rand()%2;
	int sorteiaLinha = rand()%tam_tabuleiro;
	int j = 0;
	int c = 0;
	for(int l = 0; l < tam_tabuleiro; l++)
	{
		if(c < tam_tabuleiro && j < tam_palavra)
		{
			tabuleiro[(sorteiaLinha+l)*tam_tabuleiro+(c+sorteiaColuna)] = palavra[j];
			j++;
			c++;
		}
		c = 0;
	}
}
	
	return(0);
}
void LerPavra(char * palavra)
{
	printf("Informe a palavra que quer esconder\n");
	scanf("%s",palavra);
}
int TamanhoPalavra(char * palavra)
{
	int i = 0;
	int tam = 0;
	while(palavra[i] != '\0')
	{
		tam++;
		i++;
	}
	
	return(tam);
}
