#include <stdio.h>
#include <ctype.h>
#include "venv.h"
#include <locale.h>




//criar uma struct
typedef struct {
    char nome[100];
    char idade[4];
    int ingresso;
    int qtdeingresso;
    int lucro;
} Visitante;



//Função de Cadastro do visitante
void Cadastro(Visitante* dados, char* Nome, char* Idade, int Ingresso, int qtde, int Lucro) {
    strcpy(dados->nome, Nome);
    strcpy(dados->idade, Idade);
    dados->ingresso = Ingresso;
    dados->qtdeingresso = qtde;
    dados->lucro = Lucro;
}






int main() {
    setlocale(LC_ALL, "Portuguese");
    int inicio = 1;
    //chama o struct 
    Visitante Dados[10];
    int user = 0;
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_SHOWMAXIMIZED);

    int lucrof = 0, sam = 0, sd = 0, oli = 0, hc = 0;
    do {
        char escolha, nome[100], idade[5], estudante[5], ingresso[5], acesso[200] = "", respostainicio[5];
        int continuar = 1, idadef, ingressof, preco = 0, estudantef = 0, me = 0, verifica = 1, resultadof, numerobilhete, acessoverifica[4] = { 0 }, saida, respostainiciof;




        printf(". -= -= -= -= -= -= -= -= -= -= -= -=  -= -= -= -= -= -= -= -= -= -.\n");
        printf("|                   Bem vindo ao Museu MultiTemático              |\n");
        printf(". -= -= -= -= -= -= -= -= -= -= -= -=  -= -= -= -= -= -= -= -= -= -.\n");


        verifica = 1;

        do {
            printf("Você gostaria de finalizar o dia ou cadastrar um visitante?\n[1]Ingresso\n[2]Finalizar\n");
            scanf("%s", &respostainicio);
            getchar();

            int l = containsNumbers(respostainicio);

            if (l == 1) {
                printf("Você inseriu uma letra inves de uma opção valida.\nPor favor insira novamente\n");
            }
            else {
                verifica = 0;
            }

        } while (verifica);
        respostainiciof = atoi(respostainicio);
        if (respostainiciof == 1) {
            printf("Vamos iniciar seu cadastro para escolher e efetuar a compra de seu ingresso:\n");

            verifica = 1;
            do {
                printf("Digite o nome por favor: ");
                scanf("%s", &nome);
                getchar();
                int r = containsLetters(nome);

                if (r == 0) {
                    printf("Você inseriu um numero em vez de um nome.\nPor favor insira novamente\n");
                }
                else {
                    printf("Nome válido: %s\n", nome); // Aqui você pode processar o nome válido
                    verifica = 0;
                }


            } while (verifica);

            verifica = 1;
            do {
                printf("Sua idade:");
                scanf("%s", &idade);
                getchar();
                int l = containsNumbers(idade);

                if (l == 1) {
                    printf("Você inseriu uma letra inves de sua idade.\nPor favor insira novamente\n");
                }
                else {
                    printf("idade valida: %s\n", idade); // Aqui você pode processar a idade válido
                    verifica = 0;
                }



            } while (verifica);

            idadef = atoi(idade);
            if (idadef >= 60 || idadef <= 12) {
                printf("Você tem direito a gratuidade!\n");
                me = 2;
            }
            else {
                verifica = 1;
                printf("Voce e estudante?\n[1]Sim\n[2]Nao\n");
                do {
                    scanf("%s", &estudante);
                    getchar();
                    int e = containsNumbers(estudante);
                    if (e == 1) {
                        printf("Você inseriu uma letra nas opções.\nPor favor insira novamente\n");
                    }
                    else {
                        estudantef = atoi(estudante);
                        verifica = 1;
                        if (estudantef == 1) {
                            printf("Voce tem direito a meia entrada\n");
                            //Atribuir a variavel ME o valor 1 para que se entenda que o ingresso é meia 
                            me = 1;
                            verifica = 0;

                        }
                        else if (estudantef == 2) {
                            printf("Voce paga normalmente!\n");
                            verifica = 0;
                        }
                        else {
                            printf("por favor insira uma opção valida\n");
                            verifica = 1;
                        }
                    }

                } while (verifica);
            }


            if (me == 1) {
                //Avisa sobre o preço da meia entrada
                printf("\nCada ingresso custa 12 reais\n");
            }
            else if (me == 0) {
                printf("\nCada ingresso custa 24 reais\n");
            }

            verifica = 1; // reseta a variavel de verificação toda vez que ela for usada em uma nova verificação de lettra ou numero
            do {
                printf("Quantos ingressos voce gostaria?\n");
                scanf("%s", &ingresso);
                getchar();

                int l = containsNumbers(ingresso);

                if (l == 1) {
                    printf("Você inseriu uma letra inves de um numero.\nPor favor insira novamente\n");
                }
                else {
                    ingressof = atoi(ingresso); // passa o char do ingresso para int
                    verifica = 0;
                }




            } while (verifica);

            for (int i = 0; i < ingressof; i++) {
                escolha = 0;
                printf("Escolha o ingresso de numero %i", i + 1);
                do {
                    char resultado = menuprincipal(&escolha);



                    if (resultado == '1') {
                        printf("Você escolheu a opção '1': Arte Moderna.\n\n");
                        preco = preco + 12;
                        sam++;
                        continuar = 0;
                        if (acessoverifica[0] == 0) {
                            acessoverifica[0] = 1;
                            strcat(acesso, "Arte Moderna || ");

                        }

                    }
                    else if (resultado == '2') {
                        printf("Você escolheu a opção '2': Santos Dumont.\n\n");
                        preco = preco + 12;
                        sd++;
                        continuar = 0;
                        if (acessoverifica[1] == 0) {
                            acessoverifica[1] = 1;
                            strcat(acesso, "Santos Dumont || ");
                        }
                    }
                    else if (resultado == '3') {

                        printf("Você escolheu a opção '3': Olimpiadas.\n\n");
                        preco = preco + 12;
                        oli++;
                        continuar = 0;
                        if (acessoverifica[2] == 0) {
                            acessoverifica[2] = 1;
                            strcat(acesso, "Olimpiadas || ");
                        }
                    }
                    else if (resultado == '4') {


                        printf("Você escolheu a opção '4': Computação.\n\n");
                        preco = preco + 12;
                        hc++;
                        continuar = 0;
                        if (acessoverifica[3] == 0) {
                            acessoverifica[3] = 1;
                            strcat(acesso, "Computação || ");
                        }
                    }
                    else {
                        printf("Por favor coloque uma opcao valida\n");

                    }




                } while (continuar);


            }

            numerobilhete = rand() % 100;

            printf("Muito bem %s, seu ingresso tem número %i  e tem acesso a %s", nome, numerobilhete, acesso);


            //Aplicar a Meia-Entrada ou a gratuidade
            if (me == 1) {
                preco = preco / 2;
                printf("\nTotal a pagar:R$%d\n", preco);

            }
            else if (me == 2) {
                printf("\nTotal a pagar:R$0\n");
                preco = 0;
            }
            else {
                printf("\nTotal a pagar:R$%d\n", preco);
            }

            //Somar o preço ao faturamento total
            lucrof = lucrof + preco;
            //Cadastrar Usuario e suas informaçoes
            Cadastro(&Dados[user], nome, idade, numerobilhete, ingressof, preco);
            //garantir Acesso

            printf("Escolha qual sessão do museu gostaria de entrar:");

            continuar = 1;
            do {
                char resultado = menuprincipal(&escolha);



                if (resultado == '1') {
                    if (acessoverifica[0] == 1) {
                        //Acesso
                        Obras(1);

                        //Perguntar ao usuario se ele quer continuar a olhar o museu ou terminar sua visita.
                        verifica = 1;
                        do {
                            printf("Gostaria de ver outra area do museu ou sair?\n[1]Continuar\n[2]Sair\n");
                            scanf("%i", &saida);
                            getchar();
                            if (saida == 1) {
                                verifica = 0;
                            }
                            else if (saida == 2) {
                                continuar = 0;
                                verifica = 0;
                            }
                            else {
                                printf("Por favor coloque uma opção valida");
                                verifica = 1;
                            }
                        } while (verifica);

                    }
                    else {
                        printf("Você não tem acesso a essa parte do museu");
                    }

                }
                else if (resultado == '2') {
                    if (acessoverifica[1] == 1) {
                        //Acesso
                        Obras(2);
                        verifica = 1;
                        do {
                            printf("Gostaria de ver outra area do museu ou sair?\n[1]Continuar\n[2]Sair\n");
                            scanf("%i", &saida);
                            getchar();
                            if (saida == 1) {
                                verifica = 0;
                            }
                            else if (saida == 2) {
                                continuar = 0;
                                verifica = 0;
                            }
                            else {
                                printf("Por favor coloque uma opção valida");
                                verifica = 1;
                            }
                        } while (verifica);
                    }
                    else {
                        printf("Você não tem acesso a essa parte do museu");
                    }
                }
                else if (resultado == '3') {
                    if (acessoverifica[2] == 1) {
                        //Acesso
                        Obras(3);
                        verifica = 1;
                        do {
                            printf("Gostaria de ver outra area do museu ou sair?\n[1]Continuar\n[2]Sair\n");
                            scanf("%i", &saida);
                            getchar();
                            if (saida == 1) {
                                verifica = 0;
                            }
                            else if (saida == 2) {
                                continuar = 0;
                                verifica = 0;
                            }
                            else {
                                printf("Por favor coloque uma opção valida");
                                verifica = 1;
                            }
                        } while (verifica);
                    }
                    else {
                        printf("Você não tem acesso a essa parte do museu");
                    }
                }
                else if (resultado == '4') {
                    if (acessoverifica[3] == 1) {
                        //Acesso
                        Obras(4);
                        verifica = 1;
                        do {
                            printf("Gostaria de ver outra area do museu ou sair?\n[1]Continuar\n[2]Sair\n");
                            scanf("%i", &saida);
                            getchar();
                            if (saida == 1) {
                                verifica = 0;
                            }
                            else if (saida == 2) {
                                continuar = 0;
                                verifica = 0;
                            }
                            else {
                                printf("Por favor coloque uma opção valida\n");
                                verifica = 1;
                            }
                        } while (verifica);
                    }
                    else {
                        printf("Você não tem acesso a essa parte do museu");
                    }




                }
                else {
                    printf("Por favor coloque uma opcao valida\n");

                }




            } while (continuar);

            user++;
        }
        else if (respostainiciof == 2) {

            //Cria um arquivo para relatorio
            FILE* relatorioV;
            char filename[] = "relatorios/relatorio_Visitantes.csv";
            relatorioV = fopen(filename, "w");
            if (relatorioV == NULL) {
                perror("Erro ao abrir o arquivo para escrita");
                return 1;
            }
            //Pega a Data para colocar no relatorio
            time_t mytime;
            mytime = time(NULL);
            struct tm tm = *localtime(&mytime);

            //Inicia a escrever o relatorio;
            fputs("Relatorio de Visitantes\n", relatorioV);
            //Formata a data para pegar dia, mes e ano e Coloca no relatorio
            fprintf(relatorioV, "Data: %d/%d/%d\n\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);

            fputs("Nome; Idade; Qtde Ingresso; Valor;\n", relatorioV);
            //Colocar no relatorio de todos os usuarios cadastrados até o funcionamento do sistema
            for (int b = 0; b < user; b++) {

                fprintf(relatorioV, "%s; %s;%i;%i\n", Dados[b].nome, Dados[b].idade, Dados[b].qtdeingresso, Dados[b].lucro);

            };
            //Coloca o faturamento do dia = A soma de os ingressos
            fprintf(relatorioV, "\nFaturamento; %i;\n", lucrof);
            fputs("\nSessao; Qtde de Ingressos;\n", relatorioV);
            fprintf(relatorioV, "\nSemana Da Arte Moderna; %i", sam);
            fprintf(relatorioV, "\nSantos Dumont; %i", sd);
            fprintf(relatorioV, "\nOlimpiadas; %i", oli);
            fprintf(relatorioV, "\nHistoria da Computaçao; %i", hc);
            fclose(relatorioV);
            printf("Obrigado por utilizar o sistema, seu relatorio diário já está feito, até a proxima");
            inicio = 0;
        }
        else {
            printf("por favor uma opção valida\n");
        };
    } while (inicio);
}