#include <stdio.h>
#include <string.h>

// Exercício 2: Ordenar três strings lexicograficamente
void ordenarStrings(char str1[], char str2[], char str3[]) {
    char temp[100];
    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    printf("Strings em ordem lexicográfica: %s, %s, %s\n", str1, str2, str3);
}

int main() {
    char str1[100], str2[100], str3[100];
    printf("Digite três strings: \n");
    scanf("%s %s %s", str1, str2, str3);
    ordenarStrings(str1, str2, str3);
    return 0;
}
