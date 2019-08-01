//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*3.14 Escreva uma única instrução em pseudocódigo que indique cada um dos seguintes comandos:
	a) Apresente a mensagem 'Digite dois números'. 
	b) Atribua a soma das variáveis x, y e z à variável p. 
	c) A seguinte condição deve ser testada em uma estrutura de seleção if…else: o valor atual da variável m é maior que o dobro do valor atual da variável v.
	d) Obtenha valores para as variáveis s, r e t pelo teclado. */

#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

/* Maquina Estado
    1 -> Começo do jogo
    2 -> Novo movimento
    3 -> Desistir
*/

int inicializar(Pilha * pino1, int * discos);  
void terminar(Pilha * pino1, Pilha * pino2, Pilha * pino3);
int movimentar(Pilha * pino1, Pilha * pino2, Pilha * pino3);
void mover(Pilha * origem, Pilha * destino);
void mostrarPinos(Pilha * pino1, Pilha * pino2, Pilha * pino3, int discos);

int main() {
    int estado = 1;    
    int discos = 0; 
    Pilha * A = criar();
    Pilha * B = criar();
    Pilha * C = criar();    
    while(estado){   
        system("cls");     
        switch(estado){
            case 1 :
                estado = inicializar(A, &discos);        
                break;   
            case 2 :
                mostrarPinos(A,B,C, discos); 
            case 3 :
                estado = movimentar(A, B, C);
                break;                     
            case 4 :
                printf("Resolver automaticamente.");
                terminar(A, B, C);
                break;     
            case 5 :
                terminar(A, B, C);
                break;   
        }
        
    }
}



int inicializar(Pilha * pino1, int * discos){  
    printf("Torre de Hanoi, desenvolvido em C por Ryan Sampaio Filho.\n");      
    printf("Voce quer jogar com quantos discos?\n");
    scanf("%d", discos);    
    if(*discos < 0){
        return 1;
    }
    int aux = *discos;
    while(aux > 0){
        empilhar(pino1, aux);    
        aux = aux - 1;    
    }
    return 2;
}
void terminar(Pilha * pino1, Pilha * pino2, Pilha * pino3){
    destruir(pino1);
    destruir(pino2);
    destruir(pino3);
}

int movimentar(Pilha * pino1, Pilha * pino2, Pilha * pino3){    
    char movimento[3] = {0,0,'\0'};
    printf("Digite o proximo movimento (Exemplo 'AB' ou 'BA'):\n");
    printf("Digite -1 para desistir.\n");
    fflush(stdin);
    
    scanf("%c%c", movimento, movimento + 1);
    if(movimento == "-1")
        return 4;
        
    switch(movimento[0]){
        case 'A':
            switch(movimento[1]){
                case 'B':
                    mover(pino1, pino2);
                    break;
                case 'C':
                    mover(pino1, pino3);
                    break;
                default:
                    printf("Movimento invalido!\n");
            }
            break;
        case 'B':
            switch(movimento[1]){
                case 'A':
                    mover(pino2, pino1);
                    break;
                case 'C':
                    mover(pino2, pino3);
                    break;
                default:
                    printf("Movimento invalido!\n");
            }
            break;
        case 'C':
            switch(movimento[1]){
                    case 'A':
                        mover(pino3, pino1);
                        break;
                    case 'B':
                        mover(pino3, pino2);
                        break;
                    default:
                        printf("Movimento invalido!\n");
                }
                break;
        default:
            printf("Movimento invalido!\n");
            return 5;
    }
}

void mover(Pilha * origem, Pilha * destino){    
    if(tamanho(origem) > 0 && (tamanho(destino) <= 0 || topo(origem) < topo(destino)))
        empilhar(destino,desempilhar(origem));
    else {
        printf("Nao e possivel fazer este movimento.\n");
    }
}


void mostrarPinos(Pilha * pino1, Pilha * pino2, Pilha * pino3, int discos){
    Pilha * aux1 = criar();
    Pilha * aux2 = criar();
    Pilha * aux3 = criar();
    int i = 0;
    
    while(i < discos){
       
        int aux = 0;
        if(tamanho(pino1) > 0){
            aux = desempilhar(pino1);
            printf("            %d", aux);
            empilhar(aux1, aux);
        }
        else{
            printf("             ");
        }       
        
        if(tamanho(pino2) > 0){
            aux = desempilhar(pino2);
            printf("        %d", aux);
            empilhar(aux2, aux);
        }
        else{
            printf("         ");
        }        
        
        if(tamanho(pino3) > 0){
            aux = desempilhar(pino3);
            printf("        %d\n", aux);
            empilhar(aux3, aux); 
        }
        else{
            printf("         \n");
        }            
        i++;
    }
    while(tamanho(aux1) > 0){
        empilhar(pino1, desempilhar(aux1));
    }
    while(tamanho(aux2) > 0){
        empilhar(pino2, desempilhar(aux2));
    }
    while(tamanho(aux3) > 0){
        empilhar(pino3, desempilhar(aux3));
    }
}

/*
void mostrarPinos(Pilha * pino1, Pilha * pino2, Pilha * pino3){
    imprimir(pino1);
    imprimir(pino2);
    imprimir(pino3);
}
*/