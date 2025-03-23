#include <stdio.h>
#include <string.h>

// Exercício 1: Encontrar a maior string lexicograficamente
void maiorString(char str1[], char str2[], char str3[]) {
    char *maior = str1;
    if (strcmp(str2, maior) > 0) {
        maior = str2;
    }
    if (strcmp(str3, maior) > 0) {
        maior = str3;
    }
    printf("A maior string lexicograficamente é: %s\n", maior);
}

int main() {
    char str1[100], str2[100], str3[100];
    printf("Digite três strings: \n");
    scanf("%s %s %s", str1, str2, str3);
    maiorString(str1, str2, str3);
    return 0;
}
