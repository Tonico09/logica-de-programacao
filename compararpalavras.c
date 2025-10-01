#include <stdio.h>

struct Palavra {
    char texto[100];
    int tamanho;
};

int main() 
{
    struct Palavra p1, p2;
    int i;

    printf("Digite a primeira palavra: ");
    scanf("%s", p1.texto);

    i = 0;
    while (p1.texto[i] != '\0') {
        i++;
    }
    p1.tamanho = i;

    printf("Digite a segunda palavra: ");
    scanf("%s", p2.texto);

    i = 0;
    while (p2.texto[i] != '\0') {
        i++;
    }
    p2.tamanho = i;

    printf("\nPalavra 1: \"%s\" - Tamanho: %d\n", p1.texto, p1.tamanho);
    printf("Palavra 2: \"%s\" - Tamanho: %d\n", p2.texto, p2.tamanho);

    if (p1.tamanho > p2.tamanho) {
        printf("A primeira palavra eh maior.\n");
    } else if (p1.tamanho < p2.tamanho) {
        printf("A segunda palavra eh maior.\n");
    } else {
        printf("As duas palavras tem o mesmo tamanho.\n");
    }

    return 0;
}
