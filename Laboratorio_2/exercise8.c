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
    struct Livro livro[5];

    for (int i = 0; i < 5; i++) {
        printf("Título do livro: ");
        fgets(livro[i].titulo, sizeof(livro[i].titulo), stdin);
        livro[i].titulo[strcspn(livro[i].titulo, "\n")] = '\0';

        printf("Ano do livro: ");
        scanf("%d", &livro[i].ano);
        getchar();

        printf("Nome do autor: ");
        fgets(livro[i].autor.nome, sizeof(livro[i].autor.nome), stdin);
        livro[i].autor.nome[strcspn(livro[i].autor.nome, "\n")] = '\0';

        printf("Nacionalidade do autor: ");
        fgets(livro[i].autor.nacionalidade, sizeof(livro[i].autor.nacionalidade), stdin);
        livro[i].autor.nacionalidade[strcspn(livro[i].autor.nacionalidade, "\n")] = '\0';
        
        printf("\n\n");
    }

    printf("\n\n-----------------------\nCatálogo dos livros:\n-----------------------|\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Título: %s\nAno: %d\nAutor: %s\nNacionalidade do autor: %s\n", livro[i].titulo, livro[i].ano, livro[i].autor.nome, livro[i].autor.nacionalidade);
        printf("\n\n");
    }
}