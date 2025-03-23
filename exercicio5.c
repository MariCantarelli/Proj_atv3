#include <stdio.h>
#include <string.h>

// Função para contar as ocorrências de cada caractere em uma string
void contar_ocorrencias(const char *str) {
    int contagem[256] = {0}; // Tabela ASCII tem 256 caracteres possíveis
    
    for (int i = 0; str[i] != '\0'; i++) {
        contagem[(unsigned char)str[i]]++;
    }
    
    printf("Tabela de ocorrências:\n");
    for (int i = 0; i < 256; i++) {
        if (contagem[i] > 0) {
            printf("Caractere '%c' (ASCII %d): %d vezes\n", i, i, contagem[i]);
        }
    }
}

int main() {
    char str[100];
    
    // Teste da função de contagem de ocorrências
    printf("Digite uma string para contar as ocorrências dos caracteres: ");
    scanf("%99s", str);
    
    contar_ocorrencias(str);
    
    return 0;
}