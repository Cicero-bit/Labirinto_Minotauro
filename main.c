#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <math.h>



/*void desenhar(int i, int j, int l, int c){
    char matr[l][c];
    for(i = 0 ;i < l; i++){
    for(j = 0;j < c; j++){
        fscanf(arq,"%c ", &matr[i][j]);
            if(matr[i][j] = 49) printf("%c", 124); // igual a 1
            if(matr[i][j] = 48) printf("%c", 250); // igual a 0
            if(matr[i][j] = 80) printf("%c", 80); // igual a P
            if(matr[i][j] = 77) printf("%c", 77); // igual a M
            if(matr[i][j] = 79) printf("%c", 79); // igual a O
        }
    printf("\n");
    }
}
*/

void leiturfacil (){
    FILE  *arq;
    int i = 0, j = 0, l = 20, c = 20;
    char matr[l][c];
    int posicaolinha = 2;
    int posicaocoluna = 1;
    int posicaolinham = 1;
    int posicaocolunam = 18;
    char controle;
    int controle2;
    srand(time(0));

    arq = fopen("facil.txt", "r");
    while(1){
        for(i = 0 ;i < l; i++){
            for(j = 0;j < c; j++){
                fscanf(arq,"%c ", &matr[i][j]);
                if(matr[i][j] == 49) printf("%c", 124); // igual a 1
                if(matr[i][j] == 48) printf("%c", 250); // igual a 0 = ponto
                if(matr[i][j] == 80) printf("%c", 80); // igual a P
                if(matr[i][j] == 77) printf("%c", 77); // igual a M
                if(matr[i][j] == 79) printf("%c", 79); // igual a O
            }
            printf("\n");
        }             
        printf("Movimento:\n");

        controle = getch();
        system("cls");
        if(controle == 'a' || controle == 'd' || controle == 's' || controle == 'w'){
            if(controle == 'a' ){              
                if(matr[posicaolinha][posicaocoluna - 1] == 48){
                    matr[posicaolinha][posicaocoluna] = 48;
                    posicaocoluna = posicaocoluna - 1;               
                    matr[posicaolinha][posicaocoluna] = 80;
                if(matr[posicaolinha][posicaocoluna - 1] == 79){
                    printf("Parabens!, voce escapou!");
                    exit(0);
                if(matr[posicaolinha][posicaocoluna - 1] == 77){
                    printf("Voce foi pego");
                    exit(0);
                }       
                }
            }
            }
            if(controle == 'd' ){
                if(matr[posicaolinha][posicaocoluna + 1] == 48){
                    matr[posicaolinha][posicaocoluna] = 48;
                    posicaocoluna = posicaocoluna + 1;               
                    matr[posicaolinha][posicaocoluna] = 80;
                if(matr[posicaolinha][posicaocoluna - 1] == 79){
                    printf("Parabens!, voce escapou!");
                    exit(0);
                if(matr[posicaolinha][posicaocoluna + 1] == 77){
                    printf("Voce foi pego");
                    exit(0);
                }            
                } 
            }
            }
            if(controle == 'w' ){
                if(matr[posicaolinha - 1][posicaocoluna] == 48){
                    matr[posicaolinha][posicaocoluna] = 48;
                    posicaolinha = posicaolinha - 1;              
                    matr[posicaolinha][posicaocoluna] = 80;
                if(matr[posicaolinha][posicaocoluna - 1] == 79){
                    printf("Parabens!, voce escapou!");
                    exit(0);
                if(matr[posicaolinha - 1][posicaocoluna] == 77){
                    printf("Voce foi pego");
                    exit(0);
                }              
                }
            }
            }
            if(controle == 's' ){              
                if(matr[posicaolinha + 1][posicaocoluna] == 48){
                    matr[posicaolinha][posicaocoluna] = 48;
                    posicaolinha = posicaolinha + 1;               
                    matr[posicaolinha][posicaocoluna] = 80;
                if(matr[posicaolinha][posicaocoluna - 1] == 79){
                    printf("Parabens!, voce escapou!");
                    exit(0);
                if(matr[posicaolinha + 1][posicaocoluna] == 77){
                    printf("Voce foi pego");
                    exit(0);
                }
                }      
                }             
            }
        controle2 = rand() % 5;
        if(controle2 == 1){              
            if(matr[posicaolinham][posicaocolunam - 1] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaocolunam = posicaocolunam - 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }       
        }
        if(controle2 == 2){
            if(matr[posicaolinham][posicaocolunam + 1] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaocolunam = posicaocolunam + 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }            
        } 
        if(controle2 == 3){
            if(matr[posicaolinham - 1][posicaocolunam] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaolinham = posicaolinham - 1;              
                matr[posicaolinham][posicaocolunam] = 77;
            }
        }              
        if(controle2 == 4){              
            if(matr[posicaolinham + 1][posicaocolunam] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaolinham = posicaolinham + 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }        
            }
    }
}
}

void leiturmedio (){
    FILE  *arq;
    int i = 0, j = 0, l = 30, c = 30;
    char matr[l][c];
    int posicaolinha = 1;
    int posicaocoluna = 1;
    int posicaolinham = 20;
    int posicaocolunam = 10;
    char controle;
    int controle2;
    srand(time(0));

    arq = fopen("medio.txt", "r");

    while(1){
    for(i = 0 ;i < l; i++){
        for(j = 0;j < c; j++){
            fscanf(arq,"%c ", &matr[i][j]);
            if(matr[i][j] == 49) printf("%c", 124); // igual a 1
            if(matr[i][j] ==48) printf("%c", 250); // igual a 0 = ponto
            if(matr[i][j] == 80) printf("%c", 80); // igual a P
            if(matr[i][j] == 77) printf("%c", 77); // igual a M
            if(matr[i][j] == 79) printf("%c", 79); // igual a O
        }
    printf("\n");
    }
    printf("Movimento:\n");
    
    controle = getch();
    system("cls");
    if(controle == 'a' || controle == 'd' || controle == 's' || controle == 'w'){
    if(controle == 'a' ){              
        if(matr[posicaolinha][posicaocoluna - 1] == 48){
            matr[posicaolinha][posicaocoluna] = 48;
            posicaocoluna = posicaocoluna - 1;               
            matr[posicaolinha][posicaocoluna] = 80;
        if(matr[posicaolinha][posicaocoluna - 1] == 79){
            printf("Parabens!, voce escapou!");
            exit(0);
        if(matr[posicaolinha][posicaocoluna - 1] == 77){
                printf("Voce foi pego");
                exit(0);
        }
        }       
        }
    }
    if(controle == 'd' ){
        if(matr[posicaolinha][posicaocoluna + 1] == 48){
            matr[posicaolinha][posicaocoluna] = 48;
            posicaocoluna = posicaocoluna + 1;               
            matr[posicaolinha][posicaocoluna] = 80;
        if(matr[posicaolinha][posicaocoluna - 1] == 79){
            printf("Parabens!, voce escapou!");
            exit(0);
        if(matr[posicaolinha][posicaocoluna + 1] == 77){
            printf("Voce foi pego");
            exit(0);
            }
        }            
        } 
    }
    if(controle == 'w' ){
        if(matr[posicaolinha - 1][posicaocoluna] == 48){
            matr[posicaolinha][posicaocoluna] = 48;
            posicaolinha = posicaolinha - 1;              
            matr[posicaolinha][posicaocoluna] = 80;
        if(matr[posicaolinha][posicaocoluna - 1] == 79){
            printf("Parabens!, voce escapou!");
            exit(0);
        if(matr[posicaolinha - 1][posicaocoluna] == 77){
            printf("Voce foi pego");
            exit(0);
        }
        }              
        } 
    }
    if(controle == 's' ){              
        if(matr[posicaolinha + 1][posicaocoluna] == 48){
            matr[posicaolinha][posicaocoluna] = 48;
            posicaolinha = posicaolinha + 1;               
            matr[posicaolinha][posicaocoluna] = 80;
        if(matr[posicaolinha][posicaocoluna - 1] == 79){
            printf("Parabens!, voce escapou!");
            exit(0);
        if(matr[posicaolinha + 1][posicaocoluna] == 77){
            printf("Voce foi pego");
            exit(0);
        }
        }        
        }            
    }
    }
    for(int i = 0; i < 2; i++){
    controle2 = rand() % 5;
        if(controle2 == 1){              
            if(matr[posicaolinham][posicaocolunam - 1] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaocolunam = posicaocolunam - 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }       
        }
        if(controle2 == 2){
            if(matr[posicaolinham][posicaocolunam + 1] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaocolunam = posicaocolunam + 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }            
        } 
        if(controle2 == 3){
            if(matr[posicaolinham - 1][posicaocolunam] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaolinham = posicaolinham - 1;              
                matr[posicaolinham][posicaocolunam] = 77;
            }
        }              
        if(controle2 == 4){              
            if(matr[posicaolinham + 1][posicaocolunam] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaolinham = posicaolinham + 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }        
            }
    }
    }
}
  




void leiturdificil (){
    FILE  *arq;
    int i = 0, j = 0, l = 50, c = 50;
    char matr[l][c];
    int posicaolinha = 48;
    int posicaocoluna = 22;
    char controle;
    int calculo;
    int controle2;
    int posicaolinham = 15, posicaocolunam = 49;

    arq = fopen("dificil.txt", "r");

    while(1){
    for(i = 0 ;i < l; i++){
        for(j = 0;j < c; j++){
            fscanf(arq,"%c ", &matr[i][j]);
            if(matr[i][j] == 49) printf("%c", 124); // igual a 1 = |
            if(matr[i][j] == 48) printf("%c", 250); // igual a 0 = ponto
            if(matr[i][j] == 80) printf("%c", 80); // igual a P = P
            if(matr[i][j] == 77) printf("%c", 77); // igual a M = m
            if(matr[i][j] == 79) printf("%c", 79); // igual a O = O
        }
    printf("\n");
    }
    printf("%c", matr[24][49]);
    printf("Movimento:\n");

    controle = getch();

    system("cls");
    if(controle == 'a' || controle == 'd' || controle == 's' || controle == 'w'){
    if(controle == 'a' ){              
        if(matr[posicaolinha][posicaocoluna - 1] == 48){
            matr[posicaolinha][posicaocoluna] = 48;
            posicaocoluna = posicaocoluna - 1;               
            matr[posicaolinha][posicaocoluna] = 80;
        if(matr[posicaolinha][posicaocoluna - 1] == 79){
            printf("Parabens!, voce escapou!");
            exit(0);
        if(matr[posicaolinha][posicaocoluna] == 77){
            printf("Voce foi pego");
            exit(0);
        }
        }       
        }
    }
    if(controle == 'd' ){
        if(matr[posicaolinha][posicaocoluna + 1] == 48){
            matr[posicaolinha][posicaocoluna] = 48;
            posicaocoluna = posicaocoluna + 1;               
            matr[posicaolinha][posicaocoluna] = 80;
        if(matr[posicaolinha][posicaocoluna - 1] == 79){
            printf("Parabens!, voce escapou!");
            exit(0);
        if(matr[posicaolinha][posicaocoluna] == 77){
            printf("Voce foi pego");
            exit(0);
        }
        }            
        } 
    }
    if(controle == 'w' ){
        if(matr[posicaolinha - 1][posicaocoluna] == 48){
            matr[posicaolinha][posicaocoluna] = 48;
            posicaolinha = posicaolinha - 1;              
            matr[posicaolinha][posicaocoluna] = 80;
        if(matr[posicaolinha][posicaocoluna - 1] == 79){
            printf("Parabens!, voce escapou!");
            exit(0);
        if(matr[posicaolinha][posicaocoluna] == 77){
            printf("Voce foi pego");
            exit(0);
        }
        }              
        } 
    }
    if(controle == 's' ){              
        if(matr[posicaolinha + 1][posicaocoluna] == 48){
            matr[posicaolinha][posicaocoluna] = 48;
            posicaolinha = posicaolinha + 1;               
            matr[posicaolinha][posicaocoluna] = 80;
        if(matr[posicaolinha][posicaocoluna - 1] == 79){
            printf("Parabens!, voce escapou!");
            exit(0);
        if(matr[posicaolinha][posicaocoluna] == 77){
            printf("Voce foi pego");
            exit(0);
        }
        }        
        }              
    }
    }
    // calcular a distancia entre dois pontos com sqrt(pow(X-x,2) + pow(Y-y,2))
    // verificas as 4 direções e ver qual a menos em relação a distancia entre dos pontos
    // segunda verificação para que o minotauro n tente andar na parede e pego o menor numero acessivel
    // fazer com que o minotauro ande em direção ao player
    controle2 = rand() % 5;
        if(controle2 == 1){              
            if(matr[posicaolinham][posicaocolunam - 1] == 48 ){ 
                matr[posicaolinham][posicaocolunam] = 48;
                posicaocolunam = posicaocolunam - 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }       
        }
        if(controle2 == 2){
            if(matr[posicaolinham][posicaocolunam + 1] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaocolunam = posicaocolunam + 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }            
        } 
        if(controle2 == 3){
            if(matr[posicaolinham - 1][posicaocolunam] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaolinham = posicaolinham - 1;              
                matr[posicaolinham][posicaocolunam] = 77;
            }
        }              
        if(controle2 == 4){              
            if(matr[posicaolinham + 1][posicaocolunam] == 48){
                matr[posicaolinham][posicaocolunam] = 48;
                posicaolinham = posicaolinham + 1;               
                matr[posicaolinham][posicaocolunam] = 77;
            }        
            }   
    
}
}

void entrada (){
    printf("Escolha a dificuldade entre facil, media e dificil: \n");
    char escolha[10];
    int a, b, c;
    char f[10] = "facil";
    char m[10] = "media";
    char d[10] = "dificil";

    fgets(escolha, 10, stdin);
    escolha[strlen(escolha) - 1] = '\0';

    a = strcmp(escolha, f);
    b = strcmp(escolha, m);
    c = strcmp(escolha, d);

    if (a == 0){
        leiturfacil();
    }
    if (b == 0){
        leiturmedio();
    }
    if (c == 0){
        leiturdificil();
    }
    if (a != 0 && b != 0 && c != 0){
    printf("Entrada invalida!");
    exit(0);
    }
}

int main (){
    char controle;
    entrada();
}

