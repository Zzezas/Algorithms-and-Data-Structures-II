#include <stdio.h>
#include <string.h>

struct Autor {
    char nome[50], nacionalidade[30];
};

struct Livro {
    char titulo[50];
    int ano;
    struct Autor autor;
};

void main() {
    struct Livro livro;

    printf("Título: ");
    fgets(livro.titulo, sizeof(livro.titulo), stdin);

    printf("Ano do livro: ");
    scanf("%d", &livro.ano);
    getchar();

    printf("Autor: ");
    fgets(livro.autor.nome, sizeof(livro.autor.nome), stdin);

    printf("Nacionalidade do autor: ");
    fgets(livro.autor.nacionalidade, sizeof(livro.autor.nacionalidade), stdin);

    printf("\n\nTítulo do livro: %sAno do livro: %d\nAutor: %sNacionalidade do autor: %s", livro.titulo, livro.ano, livro.autor.nome, livro.autor.nacionalidade);
}