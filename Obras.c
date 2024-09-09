#include <stdio.h>
#include <windows.h>
#include "venv.h"
#include <locale.h>


char ch[150], f;
int verifica = 1;
//Vetor que ficará todas as notas das obras;
int notaSAM[10] = { 0,0,0,0,0,0,0,0,0 };
int notaSD[10] = { 0,0,0,0,0,0,0,0,0 };
int notaOL[10] = { 0,0,0,0,0,0,0,0,0 };
int notaHC[10] = { 0,0,0,0,0,0,0,0,0 };
char nomeobras[][50] = {
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
};
char caminhos[][25] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
};


int Obras(int n) {
    //maximiza a tela e faz a formatação para caracteres especiais
    int notaf[10] = { 0,0,0,0,0,0,0,0,0 };
    setlocale(LC_ALL, "portuguese");
    setlocale(LC_ALL, "");
    system("chcp 65001");

    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_SHOWMAXIMIZED);

    int sessao = n;
    if (sessao == 1) {
        strcpy(caminhos[0], "Obras/SAM/1.txt");
        strcpy(caminhos[1], "Obras/SAM/2.txt");
        strcpy(caminhos[2], "Obras/SAM/3.txt");
        strcpy(caminhos[3], "Obras/SAM/4.txt");
        strcpy(caminhos[4], "Obras/SAM/5.txt");
        strcpy(caminhos[5], "Obras/SAM/6.txt");
        strcpy(caminhos[6], "Obras/SAM/7.txt");
        strcpy(caminhos[7], "Obras/SAM/8.txt");
        strcpy(caminhos[8], "Obras/SAM/9.txt");
        strcpy(caminhos[9], "Obras/SAM/10.txt");

        strcpy(nomeobras[1], "Mario de Andrade");
        strcpy(nomeobras[2], "Di Cavalcanti");
        strcpy(nomeobras[3], "Pierrete - Di Calvacanti");
        strcpy(nomeobras[4], "Anita Malfatti");
        strcpy(nomeobras[5], "O Homem Amarelo - Anita Malfatti");
        strcpy(nomeobras[6], "Vicente de Rego Monteiro");
        strcpy(nomeobras[7], "O Nascimento de Mani - Vicente de Rego Monteiro");
        strcpy(nomeobras[8], "Tarsila do Amaral");
        strcpy(nomeobras[9], "Abaporu - Tarsila do Amaral");

    }
    else if (sessao == 2) {
        strcpy(caminhos[0], "Obras/SD/1.txt");
        strcpy(caminhos[1], "Obras/SD/2.txt");
        strcpy(caminhos[2], "Obras/SD/3.txt");
        strcpy(caminhos[3], "Obras/SD/4.txt");
        strcpy(caminhos[4], "Obras/SD/5.txt");
        strcpy(caminhos[5], "Obras/SD/6.txt");
        strcpy(caminhos[6], "Obras/SD/7.txt");
        strcpy(caminhos[7], "Obras/SD/8.txt");
        strcpy(caminhos[8], "Obras/SD/9.txt");
        strcpy(caminhos[9], "Obras/SD/10.txt");

        strcpy(nomeobras[1], "Santos Dumont");
        strcpy(nomeobras[2], "O Dirigivel");
        strcpy(nomeobras[3], "O Primeiro Prototipo");
        strcpy(nomeobras[4], "O Dirigivel Motorizado");
        strcpy(nomeobras[5], "O Passeio na Torre Eiffel");
        strcpy(nomeobras[6], "A 14-BIS");
        strcpy(nomeobras[7], "Os prototipos anteriores");
        strcpy(nomeobras[8], "O Dirigivel em Paris");
        strcpy(nomeobras[9], "Santos Dumont");

    }
    else if (sessao == 3) {
        strcpy(caminhos[0], "Obras/OLP/1.txt");
        strcpy(caminhos[1], "Obras/OLP/2.txt");
        strcpy(caminhos[2], "Obras/OLP/3.txt");
        strcpy(caminhos[3], "Obras/OLP/4.txt");
        strcpy(caminhos[4], "Obras/OLP/5.txt");
        strcpy(caminhos[5], "Obras/OLP/6.txt");
        strcpy(caminhos[6], "Obras/OLP/7.txt");
        strcpy(caminhos[7], "Obras/OLP/8.txt");
        strcpy(caminhos[8], "Obras/OLP/9.txt");
        strcpy(caminhos[9], "Obras/OLP/10.txt");

        strcpy(nomeobras[1], "Os Aneis Olimpicos");
        strcpy(nomeobras[2], "A Grande Torre Eiffel- Sede dos Jogos");
        strcpy(nomeobras[3], "O simbolo das Olimpiadas em Paris 2024");
        strcpy(nomeobras[4], "A Arte em Paris - O Filho do Homem");
        strcpy(nomeobras[5], "A Arte em Paris - A Persistencia da Memoria");
        strcpy(nomeobras[6], "O Estadio Sede dos jogos");
        strcpy(nomeobras[7], "A Grande torre");
        strcpy(nomeobras[8], "A chama olimpica e a força de vontade");
        strcpy(nomeobras[9], "Paris e o  Poder Olimpico ");
    }
    else if (sessao == 4) {
        strcpy(caminhos[0], "Obras/HC/1.txt");
        strcpy(caminhos[1], "Obras/HC/2.txt");
        strcpy(caminhos[2], "Obras/HC/3.txt");
        strcpy(caminhos[3], "Obras/HC/4.txt");
        strcpy(caminhos[4], "Obras/HC/5.txt");
        strcpy(caminhos[5], "Obras/HC/6.txt");
        strcpy(caminhos[6], "Obras/HC/7.txt");
        strcpy(caminhos[7], "Obras/HC/8.txt");
        strcpy(caminhos[8], "Obras/HC/9.txt");
        strcpy(caminhos[9], "Obras/HC/10.txt");

        strcpy(nomeobras[1], "Z1 - O primeiro computador");
        strcpy(nomeobras[2], "Maquina de perfurar de Herman Hollerith");
        strcpy(nomeobras[3], "Pai da computação");
        strcpy(nomeobras[4], "Von Neumann");
        strcpy(nomeobras[5], "Kenbak-1 - Primeiro Computador Pessoal");
        strcpy(nomeobras[6], "Apple II");
        strcpy(nomeobras[7], "Macintosh");
        strcpy(nomeobras[8], "IBM-PC");
        strcpy(nomeobras[9], "Alan Turing");
    }

    char menu[450];
    if (sessao == 1) {
        strcpy(menu, "\n\nQual obra ou autor vc gostaria de ver?\n"
            "*Recomendamos seguir nossa ordem de exibição*\n"
            "[1]Mario de Andrade\n"
            "[2]Di Cavalcanti\n"
            "[3]Pierrete - Di Calvacanti\n"
            "[4]Anita Malfatti\n"
            "[5]O Homem Amarelo - Anita Malfatti\n"
            "[6]Vicente de Rego Monteiro\n"
            "[7]O Nascimento de Mani - Vicente de Rego Monteiro\n"
            "[8]Tarsila do Amaral\n"
            "[9]Abaporu - Tarsila do Amaral\n"
            "[10]Sair da Sessão\n");

    }
    else if (sessao == 2) {
        strcpy(menu, "\n\nQual obra ou autor vc gostaria de ver?\n"
            "*Recomendamos seguir nossa ordem de exibição*\n"
            "[1]Santos Dumont\n"
            "[2]O Dirigivel\n"
            "[3]O Primeiro Prototipo\n"
            "[4]O Dirigivel Motorizado\n"
            "[5]O Passeio na Torre Eiffel\n"
            "[6]A 14-BIS\n"
            "[7]Os prototipos anteriores\n"
            "[8]O dirigivel em Paris\n"
            "[9]Santos Dumont\n"
            "[10]Sair da Sessão\n");
    }
    else if (sessao == 3) {
        strcpy(menu, "\n\nQual obra ou autor vc gostaria de ver?\n"
            "*Recomendamos seguir nossa ordem de exibição*\n"
            "[1]Os Aneis Olimpicos\n"
            "[2]A Grande Torre Eiffel- Sede dos Jogos\n"
            "[3]O Simbolo das Olimpiadas em Paris 2024\n"
            "[4]A Arte em Paris - O Filho do Homem\n"
            "[5]A Arte em Paris - A Persistencia da Memoria\n"
            "[6]O Estadio Sede dos jogos\n"
            "[7]A Grande torre\n"
            "[8]A chama olimpica e a força de vontade\n"
            "[9]Paris e o  poder olimpico\n"
            "[10]Sair da Sessão\n");
    }
    else if (sessao == 4) {
        strcpy(menu, "\n\nQual obra ou autor vc gostaria de ver?\n"
            "*Recomendamos seguir nossa ordem de exibição*\n"
            "[1]Z1 - O primeiro computador\n"
            "[2]Maquina de perfurar de Herman Hollerith\n"
            "[3]Pai da computação\n"
            "[4]Von Neumann\n"
            "[5]Kenbak-1 - Primeiro Computador Pessoal\n"
            "[6]Apple II\n"
            "[7]Macintosh\n"
            "[8]IBM-PC\n"
            "[9]Alan Turing\n"
            "[10]Sair da Sessão\n");

    
    }

    char opcao[5];

    //Apresentar o banner 
    FILE* fp = fopen(caminhos[0], "r");
    f = fgetc(fp);
    while (f != EOF) {
        printf("%c", f);
        f = fgetc(fp);
    }
    fclose(fp);

 
    char estrelas[5], opcaoObra[5];
    int parada = 0, opcaoObraf, estrelasf = 0, of = 0;
    do {
        switch (of) {
            //Caso 0 = Menu de opções
        case 0:

            verifica = 1;
            do {
                printf(menu);
                scanf("%s", &opcao);
                getchar();
                int l = containsNumbers(opcao);

                if (l == 1) {
                    printf("Você inseriu uma letra inves de um numero.\nPor favor insira novamente\n");
                }
                else {

                    verifica = 0;
                }
            } while (verifica);
            of = atoi(opcao);
            break;


        case 1:

            //Chama a Obra
            printf("\n\n");
            fp = fopen(caminhos[1], "r");
            f = fgetc(fp);
            while (f != EOF) {
                printf("%c", f);
                f = fgetc(fp);
            }
            fclose(fp);
            printf("%s", nomeobras[1]);


            //Pegar a Nota da Obra;
            int verificaestrelas = 1;
            do {

                verifica = 1;
                do {
                    printf("\nQuantas estrelas você daria para essa obra?\n");
                    printf("* * * * *\n");

                    scanf("%s", &estrelas);
                    int l = containsNumbers(estrelas);

                    if (l == 1) {
                        printf("Você inseriu uma letra inves de um numero.\nPor favor insira novamente\n");
                    }
                    else {
                       
                        verifica = 0;
                    }
                } while (verifica);
                estrelasf = atoi(estrelas);
                if (estrelasf == 1) {
                    printf("Obrigado pela opinião, você votou: 1 estrela - *");
                    verificaestrelas = 0;
                   

                }
                else if (estrelasf == 2) {
                    printf("Obrigado pela opinião, você votou: 2 estrelas - * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 3) {
                    printf("Obrigado pela opinião, você votou: 3 estrelas - * * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 4) {
                    printf("Obrigado pela opinião, você votou: 4 estrelas - * * * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 5) {
                    printf("Obrigado pela opinião, você votou: 5 estrelas - * * * * *");
                    verificaestrelas = 0;
                }
                else {
                    printf("por favor, coloque uma opção valida entre 1 a 5 estrelas!");

                };

            } while (verificaestrelas);
            notaf[0] = notaf[0] + estrelasf;
          

            verifica = 1;
            do{
            printf("\n[1]Proximo\n");
            printf("[2]Menu\n");
            scanf("%s", &opcaoObra);
            getchar();
            int l = containsNumbers(opcaoObra);

            if (l == 1) {
                printf("Você inseriu uma letra inves de um numero.\nPor favor insira novamente\n");
            }
            else {

                verifica = 0;
            }
            } while (verifica);
            opcaoObraf = atoi(opcaoObra);
            if (opcaoObraf == 1) {
                of = 2;
                break;

            }
            else if (opcaoObraf == 2) {
                of = 0;
                break;
            }

            else if (opcaoObraf > 2) {
                printf("por favor uma opcao valida");
                break;
            }

        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            printf("\n\n");
            fp = fopen(caminhos[of], "r");
            f = fgetc(fp);

            while (f != EOF) {
                printf("%c", f);
                f = fgetc(fp);
            }
            fclose(fp);
            printf("%s", nomeobras[of]);

            verificaestrelas = 1;
            do {
                verifica = 1;
                do {
                    printf("\nQuantas estrelas você daria para essa obra?\n");
                    printf("* * * * *\n");

                    scanf("%s", &estrelas);
                    int l = containsNumbers(estrelas);

                    if (l == 1) {
                        printf("Você inseriu uma letra inves de um numero.\nPor favor insira novamente\n");
                    }
                    else {
                       
                        verifica = 0;
                    }
                } while (verifica);
                estrelasf = atoi(estrelas);
                if (estrelasf == 1) {
                    printf("Obrigado pela opinião, você votou: 1 estrela - *");
                    verificaestrelas = 0;

                }
                else if (estrelasf == 2) {
                    printf("Obrigado pela opinião, você votou: 2 estrelas - * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 3) {
                    printf("Obrigado pela opinião, você votou: 3 estrelas - * * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 4) {
                    printf("Obrigado pela opinião, você votou: 4 estrelas - * * * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 5) {
                    printf("Obrigado pela opinião, você votou: 5 estrelas - * * * * *");
                    verificaestrelas = 0;
                }
                else {
                    printf("por favor, coloque uma opção valida entre 1 a 5 estrelas!");

                };

            } while (verificaestrelas);
            notaf[of-1] = notaf[of-1] + estrelasf;
         
            verifica = 1;
            do {
                printf("\n[1]Proximo\n");
                printf("[2]Anterior\n");
                printf("[3]Menu\n");
                scanf("%s", &opcaoObra);
                getchar();
                int l = containsNumbers(opcaoObra);

                if (l == 1) {
                    printf("Você inseriu uma letra inves de um numero.\nPor favor insira novamente\n");
                }
                else {

                    verifica = 0;
                }
            } while (verifica);
            opcaoObraf = atoi(opcaoObra);
            if (opcaoObraf == 2) {
                of = of - 1;
                break;

            }
            else if (opcaoObraf == 1) {
                of = of + 1;
                break;


            }
            else if (opcaoObraf == 3) {
                of = 0;
                break;

            }
            else if (opcaoObraf > 3) {
                printf("por favor uma opcao valida");
                break;
            }
        case 9:
            printf("\n\n");
            fp = fopen(caminhos[9], "r");
            f = fgetc(fp);
            while (f != EOF) {
                printf("%c", f);
                f = fgetc(fp);
            }
            fclose(fp);
            printf("%s", nomeobras[9]);


            verificaestrelas = 1;
            do {
                verifica = 1;
                do {
                    printf("\nQuantas estrelas você daria para essa obra?\n");
                    printf("* * * * *\n");

                    scanf("%s", &estrelas);
                    int l = containsNumbers(estrelas);

                    if (l == 1) {
                        printf("Você inseriu uma letra inves de um numero.\nPor favor insira novamente\n");
                    }
                    else {
                        verifica = 0;
                     
                    }
                } while (verifica);
                estrelasf = atoi(estrelas);
                if (estrelasf == 1) {
                    printf("Obrigado pela opinião, você votou: 1 estrela - *");
                    verificaestrelas = 0;

                }
                else if (estrelasf == 2) {
                    printf("Obrigado pela opinião, você votou: 2 estrelas - * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 3) {
                    printf("Obrigado pela opinião, você votou: 3 estrelas - * * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 4) {
                    printf("Obrigado pela opinião, você votou: 4 estrelas - * * * *");
                    verificaestrelas = 0;
                }
                else if (estrelasf == 5) {
                    printf("Obrigado pela opinião, você votou: 5 estrelas - * * * * *");
                    verificaestrelas = 0;
                }
                else {
                    printf("por favor, coloque uma opção valida entre 1 a 5 estrelas!");

                };

            } while (verificaestrelas);
            notaf[8] = notaf[8] + estrelasf;

            verifica = 1;
            do {
                printf("\n[1]Anterior\n");
                printf("[2]Menu\n");
                scanf("%s", &opcaoObra);
                getchar();
                int l = containsNumbers(opcaoObra);

                if (l == 1) {
                    printf("Você inseriu uma letra inves de um numero.\nPor favor insira novamente\n");
                }
                else {

                    verifica = 0;
                }
            } while (verifica);
            opcaoObraf = atoi(opcaoObra);
            if (opcaoObraf == 1) {
                of = 8;
                break;

            }
            else if (opcaoObraf == 2) {
                of = 0;
                break;

            }

            else if (opcaoObraf > 2) {
                printf("por favor uma opcao valida");
                break;
            }
        case 10:
            parada = 1;
            break;
        default:
            printf("por favor uma opcao valida");
            of = 0;

            break;
        };
    } while (parada == 0);
    


    //Cria um arquivo para relatorio de obras
    FILE* relatorioObra;
    char filename[100];
    if (sessao == 1) {
        strcpy(filename, "relatorios/relatorio_Semana_Da_Arte.csv");
        for (int s = 0; s < 10; s++) {
            notaSAM[s] = notaSAM[s] + notaf[s];
        }
    }
    else if (sessao == 2) {
        strcpy(filename, "relatorios/relatorio_Santos_Dumont.csv");
        for (int s = 0; s < 10; s++) {
            notaSD[s] = notaSD[s] + notaf[s];
        }
        
    }
    else if (sessao == 3) {
        strcpy(filename, "relatorios/relatorio_Olimpiadas.csv");
        for (int s = 0; s < 10; s++) {
            notaOL[s] = notaOL[s] + notaf[s];
        }
       
    }
    else if (sessao == 4) {
        strcpy(filename, "relatorios/relatorio_Computação.csv");
        for (int s = 0; s < 10; s++) {
            notaHC[s] = notaHC[s] + notaf[s];
        }
       
    }
    
    
   
   
    relatorioObra = fopen(filename, "w");
    if (relatorioObra == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return 1;
    }
    //Pega a Data para colocar no relatorio
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    //Inicia a escrever o relatorio;
    fputs("Relatorio de Obras\n", relatorioObra);
    //Formata a data para pegar dia, mes e ano e Coloca no relatorio
    fprintf(relatorioObra, "Data: %d/%d/%d\n\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

    fputs("Nome;Estrelas;\n", relatorioObra);
    //Colocar no relatorio as notas da nota com base na sessão especificada
     for (int b = 1; b <= 9; b++) {
         if (sessao == 1) {
             fprintf(relatorioObra, "%s; %i\n", nomeobras[b], notaSAM[b - 1]);
         }
         else if (sessao == 2) {
             fprintf(relatorioObra, "%s; %i\n", nomeobras[b], notaSD[b - 1]);
        }
         else if (sessao == 3) {
             fprintf(relatorioObra, "%s; %i\n", nomeobras[b], notaOL[b - 1]);
         }
         else if (sessao == 4) {
             fprintf(relatorioObra, "%s; %i\n", nomeobras[b], notaHC[b - 1]);
         }
        

    };
    
    fclose(relatorioObra);
   
    return 0;


}