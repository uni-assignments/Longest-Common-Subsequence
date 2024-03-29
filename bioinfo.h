#include<stdio.h>
#include<stdlib.h>
#include <stdio_ext.h>
#include<string.h>

enum direcoes {
    diagonal = 1,  
    horizontal,
    vertical
} dir;

struct tipoCelula {
    int id;
    char *sequencia;
    char *alinhamento1;
    char *alinhamento2;
    int semelhanca;
    int tamanhoSequencia;
};
typedef struct tipoCelula Celula;

struct tipoTabela {
	int qtdSequencias;
    Celula *celulas;
};
typedef struct tipoTabela Tabela;

void imprime_celula(Celula c);
void imprime_tabela(Tabela tabela);
void ordena_tabela(Celula *a, int left, int right);
void imprime_mat(int lin, int col, int **mat);
void libera_matriz(int lin, int col, int **mat);

int **monta_matriz(int lin, int col, int **mat);

Tabela gera_alinhamento(Tabela t, int index, int lin, int col, int **mat, char *str1, char *str2);
Tabela lcs(Tabela t, int index1);
Tabela ler_arquivo(char *nomeArquivo);
