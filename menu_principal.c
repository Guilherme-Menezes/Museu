#include <stdio.h>
#include <string.h>
#include "venv.h"
#include <stdbool.h>
#include <ctype.h> 


int menuprincipal(char* escolha) {
    char menu[174];
    char opcao[4];
    int verifica = 1;
    
    strcpy(menu, "\nOpções"
        "\n[1] Arte Moderna\n"
        "[2] Santos\n"
        "[3] Olimpiadas\n"
        "[4] Computação\n"
        "Escolha uma opção: ");
    do {
    printf("%s", menu);
    scanf(" %s", &opcao);
    getchar();
    int l = containsNumbers(opcao);
    if (l == 1) {
        printf("Você inseriu uma letra inves de uma opção valida.\nPor favor insira novamente\n");
    }
    else {
        verifica = 0;
    }
    

    int opcaof = atoi(opcao);
    if (opcaof > 4 || opcao < 1) {
        printf("por favor insira uma opção valida");
        verifica = 1;
    }
    
    } while (verifica);

    


    *escolha = opcao[0];
    return *escolha;

}



int containsLetters(const char* nome) {
    int p = 0;
    for (int i = 0; nome[i] != '\0'; i++) {
        if (!(isalpha(nome[i]))   && !(nome[i]== ' ') && !(nome[i] == '\n')) { // Verifica se o caractere é uma letra
           
                p++;
          
        }
       
    }
    if (p == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int containsNumbers(const char* numero) {
    for (int i = 0; numero[i] != '\0'; i++) {
        if (!isdigit(numero[i])) {

            return 1;
        }
    }
    return 0;
}


void removequebralinha(char* str) {
    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; // Substitui a quebra de linha por '\0'
    }
}
