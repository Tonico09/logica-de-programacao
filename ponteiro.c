#include<stdio.h>

int main()
{
	int * ptr;
	int numero = 50;
	ptr = &numero;
	
	printf("Valor da var = %x\n", *ptr);
	printf("Endereco do var = %x\n", ptr);
	printf("Valor armazenado no prt = %d\n", &numero);
	printf("Conteudo apontado = %d\n", *ptr);
	
	return 0;
}
