#include <stdio.h>
#include <stdlib.h>

int ex3_realloc() {
    int *ptr; // Declara��o de um ponteiro para armazenar o endere�o do bloco de mem�ria alocado

    int tamanho; // Vari�vel para armazenar o tamanho inicial do array
    printf("Digite o tamanho inicial do array: ");
    scanf("%d", &tamanho); // Solicita ao usu�rio para digitar o tamanho inicial do array

    // Aloca��o din�mica de mem�ria usando malloc
    ptr = (int *)malloc(tamanho * sizeof(int));

    // Verifica se a aloca��o de mem�ria foi bem-sucedida
    if (ptr == NULL) {
        printf("Erro! N�o foi poss�vel alocar mem�ria.\n");
        return 1; // Termina o programa com c�digo de erro
    }

    // Imprime os elementos do array inicial
    printf("Elementos do array inicial:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    int novo_tamanho; // Vari�vel para armazenar o novo tamanho do array
    printf("Digite o novo tamanho do array: ");
    scanf("%d", &novo_tamanho); // Solicita ao usu�rio para digitar o novo tamanho do array

    // Realoca��o din�mica de mem�ria usando realloc
    ptr = (int *)realloc(ptr, novo_tamanho * sizeof(int));

    // Verifica se a realoca��o de mem�ria foi bem-sucedida
    if (ptr == NULL) {
        printf("Erro! N�o foi poss�vel realocar mem�ria.\n");
        return 1; // Termina o programa com c�digo de erro
    }

    // Imprime os elementos do array ap�s a realoca��o
    printf("Elementos do array ap�s a realoca��o:\n");
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Libera a mem�ria alocada dinamicamente
    free(ptr);

    return 0;
}
