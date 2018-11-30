/*Passando arrays e elementos isolados de arrays para funções*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAMANHO 5
void modificaArray(int [], int); //parece estranho
void modificaElemento(int);
main(){
    setlocale(LC_ALL, "Portuguese");
    int a[TAMANHO] = {0, 1, 2, 3, 4};
    int i;
    printf("Efeito de passar o array inteiro por meio de chamada por referencia :\n\nOs valores do array original são:\n");
    for(i = 0; i <= TAMANHO - 1; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
    modificaArray(a, TAMANHO); //arra a passado por meio de chamada por referencia
    printf("Os valores do array modificado são:\n");
    for(i = 0; i <= TAMANHO - 1; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n\nEfeitos de passar elementos do array por meio de uma chamada por valor:\n\nO valor de a[3] e %d\n", a[3]);
    modificaElemento(a[3]);
    system("pause");
    return 0;
}
void modificaArray(int b[], int tamanho){
    for(int j = 0; j <= tamanho -1; j++)
    {
        b[j] *= 2;
    }
}
void modificaElemento(int e){
    printf("Valor em modificaElemento e %d\n", e *= 2);
}