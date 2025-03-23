#include <stdio.h>
#include <string.h>

// Função para remover todas as ocorrências de um caractere de uma string
void remover_caractere(char *str, char c) {
    int i, j = 0;
    int len = strlen(str);
    int encontrado = 0;
    
    for (i = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        } else {
            encontrado = 1;
        }
    }
    str[j] = '\0'; // Finaliza a string corretamente
    
    if (!encontrado) {
        printf("Erro: O caractere '%c' não foi encontrado na string.\n", c);
    }
}

int main() {
    char str[100], c;
    
    // Teste da função de remoção de caractere
    printf("Digite uma string: ");
    scanf("%99s", str);
    printf("Digite o caractere a ser removido: ");
    scanf(" %c", &c);
    
    remover_caractere(str, c);
    printf("String após remoção: %s\n", str);
    
    return 0;
}
