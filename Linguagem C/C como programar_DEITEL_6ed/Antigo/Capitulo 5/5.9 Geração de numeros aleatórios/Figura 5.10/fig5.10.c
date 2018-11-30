/*Craps*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rollDice(void);
main () {
    int gameStatus, sum, myPoint;
    srand(time(NULL));
    sum = rollDice(); /*Primeira jogada dos dados*/
    
    switch (sum)
    {
        case 7:
        case 11: /*vence na primeira jogada*/
            gameStatus = 1;
            break;
        case 2:
        case 3:
        case 12: /*perde na primeira jogada*/
            gameStatus = 2;
            break;
        default: /*Armazena os pontos*/
            gameStatus = 0;
            myPoint = sum;
            printf("O ponto e %d\n", myPoint);
            break;
    }
    
    while(gameStatus == 0){ /*continua o jogando*/
        sum = rollDice();
        
        if (sum == myPoint) { /*Vence fazendo pontos*/
            gameStatus = 1;
        }
        
        else
        {
            
            if (sum == 7) { /*Perde obtendo o valor 7*/
                gameStatus = 2;
            }
            
        }      
    }
    if (gameStatus == 1) {
            printf("Jogador vence.\n");
    }
        
    else
    {
        printf("Jogador perde.\n");
    }
}
int rollDice(void) {
    int diel, diel2, workSum;
    diel = 1 + (rand()%6);
    diel2 = 1 + (rand()%6);
    workSum = diel + diel2;
    printf("Jogador obteve %d + %d = %d\n", diel, diel2, workSum);
    return workSum;
}