#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 2

int CharParaNum(char c) {
    return c - 'A';
}

int NumParaChar(int num) {
    return 'A' + num;
}

void MultiplicarMatriz(int A[MAX][MAX], int B[MAX], int C[MAX]) {
    for (int i = 0; i < MAX; i++) {
        C[i] = 0;
        for (int j = 0; j < MAX; j++) {
            C[i] = (C[i] + A[i][j] * B[j]) % 26;
        }
    }
}

int Alfabetico(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int Espaco(char c) {
    return (c == ' ');
}

char ConverterMaiusculo(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

int main() {
    char texto[100];
    int chave[MAX][MAX] = {{6, 24}, {1, 16}};
    int textoNum[MAX];
    int resultado[MAX];

    printf("Digite a mensagem a ser criptografada: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = 0;

    int n = strlen(texto);

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (Alfabetico(texto[i])) {
            texto[index++] = ConverterMaiusculo(texto[i]);
        }
    }
    texto[index] = '\0';
    n = index;

    if (n % MAX != 0) {
        int padrao = MAX - (n % MAX);
        for (int i = 0; i < padrao; i++) {
            texto[n + i] = 'X';
        }
        texto[n + padrao] = '\0';
        n = strlen(texto);
    }

    for (int i = 0; i < n; i++) {
        textoNum[i % MAX] = CharParaNum(texto[i]);

        if ((i + 1) % MAX == 0 || i == n - 1) {
            MultiplicarMatriz(chave, textoNum, resultado);
            for (int j = 0; j < MAX; j++) {
                printf("%c", NumParaChar(resultado[j]));
            }
        }
    }

    printf("\n");
    return 0;
}
