/* Contando os conceitos */ 
#include <stdio.h>
#include <stdlib.h>
main() { 
    int grau;
    int aConta = 0, 
        bConta = 0, 
        cConta = 0, 
        dConta = 0, 
        fConta = 0; 
        
        printf("Entre com os conceitos. \n");
        printf("Entre com o caractere EOF (fim) para finalizar as entradas.\n");
        while ( ( grau = getchar () ) != EOF) {
            switch (grau) { /* switch aninhado em um while */
                    case 'A': /* o grau foi A maiúsculo */
                    case 'a': /* ou a minúsculo */
                            ++aConta; 
                            break;
                    case 'B': /* o grau foi B maiúsculo */
                    case 'b':  /* ou b minúsculo */
                            ++bConta; 
                            break;
                    case 'C': /* o grau foi C maiúsculo */
                    case 'c': /* ou c minúsculo */
                            ++cConta; 
                            break;
                    case 'D': /* o grau foi D maiúsculo */ 
                    case 'd': /* ou d minúsculo */
                            ++dConta; 
                            break;
                    case 'F': /* o grau foi F maiúsculo */
                    case 'f': /* ou f minúsculo */ 
                            ++fConta;
                            break;
                    case '\n': /* ignore isto na entrada */ 
                    case ' ':
                            break;
                    default:    /* obtenha todos outros caracteres */
                            printf ("Fornecido um conceito incorreto."); 
                            printf (" Entre com um novo conceito.\n");
                            break;
            }
        }
        printf("\nOs totais de cada conceito sao:\n"); 
        printf("A: %d\n", aConta); 
        printf("B: %d\n", bConta); 
        printf("C: %d\n", cConta); 
        printf("D: %d\n", dConta); 
        printf("F: %d\n", fConta);
        system("pause"); 
        return 0;
}