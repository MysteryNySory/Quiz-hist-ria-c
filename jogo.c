#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<windows.h> //necessario para Beep(frequencia da nota musical ("identifica a nota, duracao do tom")) e Sleep(tempo da nota)
#include<conio.h>
#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
int main()
{
    system("chcp 65001");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int opcDificul, resposta, acertos = 0, erros = 0, pontuacao = 0;
    char continuar;
    while (1) {
        system("cls");
        printf(WHITE"                                                                    ....                                                                    \n");
        printf("                                                      ..................................                                                    \n");
        printf("                                                ..............................................                                              \n");
        printf("                                          ........................................................                                          \n");
        printf("                                      ........................mmmmmmmmmmmmmm++........................                                      \n");
        printf("                                  ++mmmm....................mmmmmmmmmmmmmmmmmmmmmmmmmm....................                                  \n");
        printf("                                mmmmmmmm::............mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm........................                              \n");
        printf("                            ++mmmmmmmmmmmm....++mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm............................                            \n");
        printf("                          mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..........mmmm......................                        \n");
        printf("                        mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm............mmmmmm......................                      \n");
        printf("                      mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..............mmmmmmmm......................                    \n");
        printf("                    mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..............mmmmmmmm........................                  \n");
        printf("                  mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..............mmmmmmmmmm........................                \n");
        printf("                mmmmmm..mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm........mmmmmmmmmmmmmmmmmm......................              \n");
        printf("              ..mm--......mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm....................              \n");
        printf("              ..............mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm....................            \n");
        printf("            ................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm....................          \n");
        printf("            ................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..........................          \n");
        printf("          ..................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..............................        \n");
        printf("        ....................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..............................        \n");
        printf("        ..................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm................................      \n");
        printf("      ....................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm....++mmmmmmmm................................      \n");
        printf("      ......................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm--................................................    \n");
        printf("      ......................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..................................................    \n");
        printf("    ..........................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm......................................................  \n");
        printf("    ............................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm++......................................................  \n");
        printf("    ............................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm........................................................  \n");
        printf("  ................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..........................................................  \n");
        printf("  ......................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm............................................................\n");
        printf("  ..........................................mmmmmmmmmmmmmmmmmmmmmmmm--....::mm..............................................................\n");
        printf("  ............................................mmmmmmmmmmmmmmmmmm............mm..............................................................\n");
        printf("  ............................................mmmmmmmmmmmmmmmmmm............mm..............................................................\n");
        printf("  ..............................................mmmmmmmmmmmmmmmm............++..............................................................\n");
        printf("  ................................................mmmmmmmmmmmmmm............................................................................\n");
        printf("....................................................mmmmmmmmmmmm............................................................................\n");
        printf("........................................................mmmmmmmm............................................................................\n");
        printf("..........................................................mmmmmmmmmmmmmmmm--................................................................\n");
        printf("  ..........................................................mmmmmmmmmmmmmmmm................................................................\n");
        printf("  ................................................................mmmmmm................--mmmmmm............................................\n");
        printf("  ..................................................................mmmm............mmmmmmmmmmmmmm..........................................\n");
        printf("  ....................................................................mmmm........mmmmmmmmmmmmmmmmmmmmmmmmmm................................\n");
        printf("  ......................................................................++mmmm--++mmmmmmmmmmmmmmmmmmmmmmmmmmmm..............................\n");
        printf("  ..........................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm............................\n");
        printf("  ............................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..........................  \n");
        printf("    ........................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm........................  \n");
        printf("    ......................................................................--mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm........................  \n");
        printf("    ......................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm....................  \n");
        printf("      ..................................................................--mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..............    \n");
        printf("      ..................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..............    \n");
        printf("        ..................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm::..............      \n");
        printf("        ..................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..................      \n");
        printf("          ..................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..................        \n");
        printf("          ....................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm....................        \n");
        printf("            ......................................................................mmmmmmmmmmmmmmmmmmmmmmmmmmmmmm..................          \n");
        printf("            ........................................................................mmmmmmmmmmmmmmmmmmmmmmmmmm--..................          \n");
        printf("              ........................................................................mmmmmmmmmmmmmmmmmmmmmmmm..................            \n");
        printf("                ......................................................................mmmmmmmmmmmmmmmmmmmmmmmm................              \n");
        printf("                ......................................................................mmmmmmmmmmmmmmmmmmmmmm..................              \n");
        printf("                  ..................................................................--mmmmmmmmmmmmmmmmmmmm..................                \n");
        printf("                    ................................................................mmmmmmmmmmmmmmmmmmmm..................                  \n");
        printf("                      ..............................................................mmmmmmmmmmmmmmmm....................                    \n");
        printf("                        ............................................................mmmmmmmmmmmmmm....................                      \n");
        printf("                          ........................................................mmmmmmmmmmmm--....................                        \n");
        printf("                              ....................................................mmmmmmmmmm....................                            \n");
        printf("                                ................................................mmmmmmmmmm....................                              \n");
        printf("                                    ............................................mmmmmmmm..................                                  \n");
        printf("                                        ......................................mmmmmmmm................                                      \n");
        printf("                                            ..................................mmmm++..............                                          \n");
        printf("                                                ..............................................                                              \n");
        printf("                                                        ..............................                                                      \n" RESET);
        printf(CYAN"\t|==========================================|");
        printf("\n\t|=== "RESET WHITE"JOGO DE PERGUNTAS - HISTÓRIA GERAL"RESET CYAN" ===|");
        printf("\n\t|==========================================|\n");
        printf("\t|\t"WHITE"Escolha o nível de dificuldade:"RESET CYAN"    |\n");
        printf("\t|\t\t"GREEN"1 - Fácil"RESET CYAN"                  |\n\t|\t\t"YELLOW"2 - Médio"RESET CYAN"                  |\n\t|\t\t"RED"3 - Difícil\t\t" RESET CYAN"               |\t");
        printf("\n\t|==========================================|");
        printf("\n\t|"               WHITE"\t\t4 - Créditos"RESET CYAN"               |");
        printf(CYAN"\n\t|==========================================|"RESET);
        printf("\n\n\t"GREEN"Opção: ");
        do {
            scanf("%d", &opcDificul);
            if (opcDificul < 1 || opcDificul > 4)
                printf(RESET RED"\tOpção inválida."RESET" Tente novamente (1, 2, 3 ou 4): ");
        } while (opcDificul < 1 || opcDificul > 4);
        pontuacao = 0;
        acertos = 0;
        erros = 0;

        switch (opcDificul) {
            case 1:
            system("cls");
            printf(RESET"\n|=======================================|");
            printf("\n|  1) Em que ano caiu o Império Romano? |\n");
            printf("|=======================================|\n");
            printf("         __\n");
            printf("      ,-'-,  `---._\n");
            printf("     (,-.   -.__-,\n");
            printf("      \\  \\     (-\n");
            printf("       `-.'._,--'\n");
            printf("          ||||\n");
            printf("     _   ||||   _\n");
            printf("    |--||||||--|\n");
            printf("    ||--------||\n");
            printf("    |--|  ROMA  |--|\n");
            printf("    ||||\n");
            printf("    |--| IMPERIO |--|\n");
            printf("    ||_||\n\n");
            printf("|========================|");
            printf("\n|\t1 - 476 d.C\t |\n|\t2 - 1492 d.C \t |\t\t\n|\t3 - 1066 d.C \t |\t\t\n|\t4 - 395 d.C\t |\n");
            printf("|========================|\n");
            printf(WHITE"\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: "); }
                while (resposta < 1 || resposta > 4);
                if (resposta == 1){
                    printf(GREEN"Correta!\n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 1\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|=======================================|");
                printf("\n| 2) Quem liderou a Revolução Francesa? |\n");
                printf("|=======================================|\n");
                printf("\n|=========================|");
                printf("\n|\t1 - Napoleão \t  |\n|\t2 - Robespierre   |\t\t\n|\t3 - Luís XVI\t  |\t\t\n|\t4 - Voltaire\t  |\n");
                printf("|=========================|\n");
                printf(RESET WHITE"\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: "); }
                while (resposta < 1 || resposta > 4);
                if (resposta == 2) {
                    printf(GREEN"Correta!\n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf("Errada! \nResposta correta: 2\n");
                    erros++; }
           getch();
           system("cls");
                printf(WHITE"\n|=============================|");
                printf("\n| 3) Quem descobriu o Brasil? |\n");
                printf("|=============================|\n");
                printf("\n|=========================================|");
                printf("\n|\t1 - Cristóvão Colombo\t\t  |\n|\t2 - Dom Pedro I \t\t  |\t\t\n|\t3 - Pedro Álvares Cabral\t  |\t\t\n|\t4 - Vasco da Gama\t\t  |\n");
                printf("|=========================================|\n");
                printf("\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: "); }
                while (resposta < 1 || resposta > 4);
                if (resposta == 3) {
                    printf(GREEN"Correta!\n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 3\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|============================================|");
                printf("\n| 4) O que marcou o início da Idade Moderna? |\n");
                printf("|============================================|\n");
                printf("\n|=========================================|");
                printf("\n|\t1 - Queda de Roma\t\t  |\t\t\n|\t2 - Descobrimento da América\t  |\t\t\n|\t3 - Revolução Francesa\t\t  |\t\t\n|\t4 - Revolução Industrial\t  |\n");
                printf("|=========================================|");
                printf("\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: "); }
                while (resposta < 1 || resposta > 4);
                if (resposta == 2) {
                    printf(GREEN"Correta!\n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 2\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|=============================================|");
                printf("\n| 5) Quem foi o primeiro imperador do Brasil? |\n");
                printf("|=============================================|\n\n");
                printf(RESET YELLOW"⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⣠⣤⣾⣷⣦⣄⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf(".⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⣠⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣄⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣀⣠⣶⣿⡿⠟⠋⠉⠉⠄⠄⠈⠉⠙⠻⢿⣿⣶⣤⣀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣀⣤⣶⣿⣿⣿⠏⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠙⣿⣿⣿⣶⣦⣄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⣠⣴⣾⣿⣿⣿⣿⣿⣯⠖⠶⠖⠖⢦⣠⡤⣄⣀⡀⠄⠄⠄⠄⠈⣿⣿⣿⣿⣿⣷⣦⣄⡀⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⢀⣠⣴⣿⣿⣿⣿⣿⣿⣿⣿⡟⠄⠂⠄⠄⠄⠄⠄⠉⠉⠘⠋⠷⣦⣄⡀⠄⢹⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣀⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠄⢀⡀⠄⠈⠄⠄⠠⠄⠄⠄⠄⠄⠑⠫⢶⣼⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠈⠙⠻⢿⣿⣿⣿⣿⣿⣄⠈⠄⠐⠄⠄⠄⢁⠄⠄⠄⠄⠄⠐⠄⢀⣿⣿⣿⣿⣿⣿⠟⠋⠁⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠙⠻⢿⣿⣿⣿⣄⡀⠄⠄⠄⠄⠄⠄⠄⠄⠂⠄⢈⣠⣿⣿⣿⡿⠟⠋⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠉⠛⠿⣿⣷⣦⣄⣀⠄⠄⠄⠄⣀⣠⣥⣾⣿⠿⠛⠉⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠙⠿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠋⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠙⠻⢿⡿⠟⠋⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n");
                printf("⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄\n"RESET);
                printf("\n|=========================================|");
                printf("\n|\t1 - Dom Pedro II\t\t  |\t\t\n|\t2 - Tiradentes\t\t\t  |\t\t\n|\t3 - Dom Pedro I\t\t\t  |\t\t\n|\t4 - Getulio Vargas\t\t  |\n");
                printf("|=========================================|"RESET);
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opcao invalida!"RESET WHITE" Tente novamente: "); }
                while (resposta < 1 || resposta > 4);
                if (resposta == 3) {
                    printf(GREEN"Correta!\n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 3\n");
                    erros++; }
            getch();
            system("cls");
            if (pontuacao >= 40)
            printf(GREEN"\nParabéns! Você ê um grande historiador 😎\n"RESET);
            else { if (pontuacao == 30)
                    printf(YELLOW"\nBom trabalho, mas pode melhorar \n"RESET);
                    else {
                        if (pontuacao < 30)
                        printf(RED"\nEstude mais da próxima vez 🫤\n"RESET);
                        }
                }
                printf(WHITE"\n=== RESULTADOS ===\n"RESET);
                printf(GREEN"Acertos: %d\n", acertos);
                printf(RED"Erros: %d\n"RESET, erros);
                printf("\n");
                    break;

            case 2:
                system("cls");
                printf(WHITE"\n|=====================================|");
                printf("\n| 1) Quem criou o Código de Hamurábi? |\n");
                printf("|=====================================|\n");
                printf("\n|================================|");
                printf("\n|\t1 - Egípcios\t\t |\t\n|\t2 - Gregos\t\t |\t\n|\t3 - Babilônios \t\t |\t\n|\t4 - Romanos\t\t |\n");
                printf("|================================|");
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: ");
                }
                while (resposta < 1 || resposta > 4);
                if (resposta == 3) {
                    printf(GREEN"Correta!  \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 3\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|========================================================|");
                printf("\n| 2) Imperador romano na época da crucificação de Jesus? |\n");
                printf("|========================================================|\n");
                printf("\n|========================|");
                printf("\n|\t1 - Nero\t |\n|\t2 - Augusto\t |\n|\t3 - Trajano\t |\n|\t4 - Tibério\t |\n");
                printf("|========================|");
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do { scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: ");
                }
                while (resposta < 1 || resposta > 4);
                if (resposta == 4) {
                    printf(GREEN"Correta!  \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 4\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|=========================================|");
                printf("\n| 3) Onde começou a Revolução Industrial? |\n");
                printf("|=========================================|\n");
                printf("\n|=========================|");
                printf("\n|\t1 - Alemanha\t  |\t\n|\t2 - França\t  |\t\n|\t3 - Inglaterra\t  |\t\n|\t4 - EUA\t\t  |\n");
                printf("|=========================|");
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: ");
                }
                while (resposta < 1 || resposta > 4);
                if (resposta == 3) {
                    printf(GREEN"Correta! \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 3\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|=================================================|");
                printf("\n| 4) Qual muro dividiu a Alemanha na Guerra Fria? |\n");
                printf("|=================================================|\n");
                printf("\n|=================================|");
                printf("\n|\t1 - Muro de Londres\t  |\t\t\n|\t2 - Muro de Roma\t  |\t\t\n|\t3 - Muro de Berlim\t  |\t\t\n|\t4 - Muro de Moscou\t  |\n");
                printf("|=================================|");
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                        printf(RED"Opção inválida!"RESET WHITE" Tente novamente: "); }
                while (resposta < 1 || resposta > 4);
                if (resposta == 3){
                    printf(GREEN"Correta!  \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                    }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 3\n");
                    erros++;
                }
            getch();
            system("cls");
                printf(WHITE"\n|========================================================|");
                printf("\n| 5) Líder da Alemanha durante a Segunda Guerra Mundial? |\n");
                printf("|========================================================|\n");
                printf("\n|=================================|");
                printf("\n|\t1 - Adolf Hitler\t  |\n|\t2 - Josef Stalin\t  |\n|\t3 - Winston Churchill\t  |\n|\t4 - Benito Mussolini\t  |\n");
                printf("|=================================|");
                printf(WHITE"\n\nSelecione sua alternativa: "RESET);
                do { scanf("%d", &resposta);
                if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: ");
                }
                while (resposta < 1 || resposta > 4);
                if (resposta == 1) {
                    printf(GREEN"Correta! \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 1\n");
                    erros++; }
            getch();
            system("cls");
            if (pontuacao >= 40)
            printf(GREEN"\nParabéns! Você ê um grande historiador 😎\n");
            else { if (pontuacao == 30)
                    printf(YELLOW"\nBom trabalho, mas pode melhorar \n");
                    else {
                        if (pontuacao < 30)
                        printf(RED"\nEstude mais da próxima vez 🫤\n"RESET);
                        }
                }
                printf(WHITE"\n=== RESULTADOS ===\n"RESET);
                printf(GREEN"Acertos: %d\n", acertos);
                printf(RED"Erros: %d\n"RESET, erros);
                printf("\n");
                    break;

            case 3:
                system("cls");
                printf(WHITE"\n|=====================================================|");
                printf("\n| 1) Qual tratado encerrou a Primeira Guerra Mundial? |\n");
                printf("|=====================================================|\n\n");
                printf("|=========================================|");
                printf("\n|\t1 - Tratado de Paris\t\t  |\n|\t2 - Tratado de Tordesilhas\t  |\n|\t3 - Tratado de Versalhes\t  |\n|\t4 - Tratado de Utrecht\t\t  |\n");
                printf("|=========================================|");
                printf("\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: ");
                }
                while (resposta < 1 || resposta > 4);
                if (resposta == 3) {
                    printf(GREEN"Correta!  \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 3\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"|==========================================|");
                printf("\n| 2) Em que ano ocorreu a Revolução Russa? |\n");
                printf("|==========================================|\n");
                printf("\n|=========================|");
                printf("\n|\t1 - 1917\t  |\t\t\n|\t2 - 1939\t  |\t\t\n|\t3 - 1905\t  |\t\t\n|\t4 - 1945\t  |\n");
                printf("|=========================|");
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do { scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: ");
                }
                while (resposta < 1 || resposta > 4);
                if (resposta == 1) {
                    printf(GREEN"Correta!  \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 1\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|=====================================|");
                printf("\n| 3) Líder da independência do Haiti? |\n");
                printf("|=====================================|\n");
                printf("\n|========================================|");
                printf("\n|\t1 - Toussaint Louverture\t |\n|\t2 - Simón Bolívar\t\t |\n|\t3 - José Martí\t\t\t |\n|\t4 - San Martín\t\t\t |\n");
                printf("|========================================|");
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: ");
                }
                while (resposta < 1 || resposta > 4);
                if (resposta == 1) {
                    printf(GREEN"Correta!  \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 1\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|===============================================|");
                printf("\n| 4) Machu Picchu pertenceu a qual civilização? |\n");
                printf("|===============================================|\n");
                printf("\n|=========================|");
                printf("\n|\t1 - Maia\t  |\t\t\n|\t2 - Asteca\t  |\t\t\n|\t3 - Inca\t  |\t\t\n|\t4 - Egípcia\t  |\n");
                printf("|=========================|");
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do {
                    scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: ");
                }
                while (resposta < 1 || resposta > 4);
                if (resposta == 3) {
                    printf(GREEN"Correta!  \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 3\n");
                    erros++; }
            getch();
            system("cls");
                printf(WHITE"\n|==================================|");
                printf("\n| 5) O que foi a Paz de Vestfália? |\n");
                printf("|==================================|\n");
                printf("\n|=========================================|");
                printf("\n|\t1 - Acordo EUA-URSS\t\t  |\t\t\n|\t2 - Fim da Guerra dos Cem Anos\t  |\t\t\n|\t3 - Fim da Guerra dos 30 Anos\t  |\t\t\n|\t4 - Fim da Segunda Guerra\t  |\n");
                printf("|=========================================|");
                printf(WHITE"\n\nSelecione sua alternativa: ");
                do { scanf("%d", &resposta);
                    if (resposta < 1 || resposta > 4)
                    printf(RED"Opção inválida!"RESET WHITE" Tente novamente: "); }
                while (resposta < 1 || resposta > 4);
                if (resposta == 3) {
                    printf(GREEN"Correta!  \n");
                    acertos++;
                    pontuacao=pontuacao + 10;
                }
                else {
                    printf(RED"Errada!"RESET WHITE"\nResposta correta: 3\n");
                    erros++; }
            getch();
            system("cls");
            if (pontuacao >= 40)
            printf(GREEN"\nParabéns! Você ê um grande historiador 😎\n"RESET);
            else { if (pontuacao == 30)
                    printf(YELLOW"\nBom trabalho, mas pode melhorar \n"RESET);
                    else {
                        if (pontuacao < 30)
                        printf(RED"\nEstude mais da próxima vez 🫤\n"RESET);
                        }
                }
        printf("\n=== RESULTADOS ===\n");
        printf("Acertos: %d\n", acertos);
        printf("Erros: %d\n", erros);
        printf("\n");
            break;

            case 4:
                system("cls");
                printf("\t----------------------------");
                printf("\n\t| Aluno : <Arthur Pozzeti> |");
                printf("\n\t| Professor : <Dr. Enir>   |");
                printf("\n\t----------------------------");
                printf(YELLOW"\t\n    '.=====.'");
                printf("\t\n  .-\\:      /-.");
                printf("\t\n | (|:.     |) |");
                printf("\t\n  '-|:.     |-'");
                printf("\t\n    \\::.    /");
                printf("\t\n     '::. .'");
                printf("\t\n       ) (");
                printf("\t\n      .' '.");
                printf("\t\t\n     \"\"\"\"\"\"\""RESET);
                getch();
            break;
        }
        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &continuar);
        if (continuar != 's' && continuar != 'S')
            break;
    }
    printf("\nObrigado por jogar! 🥇\n");
    return 0;
}