#include <stdio.h>

// Função para verificar o padrão (001 | 00101)
int match_part1(const char *str, int *pos) {
    int i = *pos;
    if (str[i] == '0' && str[i + 1] == '0' && str[i + 2] == '1' && str[i + 3] == '0' && str[i + 4] == '1' && str[i + 5] != '1') {
        *pos = i + 5;
        return 1;
    }
    if (str[i] == '0' && str[i + 1] == '0' && str[i + 2] == '1') {
        *pos = i + 3;
        return 1;
    }
    return 0;
}

// Função para verificar o padrão (01 | 0110)
int match_part2(const char *str, int *pos) {
    int i = *pos;
    if (str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '1' && str[i + 3] == '0') {
        *pos = i + 4;
        return 1;
    }
    if (str[i] == '0' && str[i + 1] == '1') {
        *pos = i + 2;
        return 1;
    }
    return 0;
}

// Função para verificar a expressão regular completa
int match_pattern(const char *str) {
    int pos = 0;
    int matched = 1;    // Para incluir a string vazia

    while (str[pos] != '\0') {
        if (match_part1(str, &pos)) {
            matched = 1;            // Match encontrado para a parte 1
            //printf("Achou no 1\n");
            continue;
        } else {
            while (str[pos] != '\0') {
                if (match_part2(str, &pos)) {
                    matched = 1;    // Match encontrado para a parte 2
                    //printf("Achou no 2\n");
                    continue;
                }
                else {
                    //printf("Fora\n");
                    return 0;       // Se não, a string é inválida
                }
            }
        }
    }

    return matched;
    
}

int main() {
    char input[52]; // 50 caracteres + '\n' + '\0'
    int i = 0;
    char c;

    // Ler a entrada do usuário caractere por caractere
    while (i < 51 && (c = getchar()) != '\n' && c != EOF) {
        input[i++] = c;
    }
    input[i] = '\0'; // Adiciona o terminador nulo para a string

    if (match_pattern(input)) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }

    return 0;
}
