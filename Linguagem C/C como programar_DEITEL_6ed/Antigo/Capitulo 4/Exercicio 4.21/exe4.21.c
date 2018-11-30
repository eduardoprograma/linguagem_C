#include <stdio.h>
#include <stdlib.h>
main () {
    int grau;
    int aConta = 0, bConta = 0, cConta = 0, dConta = 0, fConta = 0;
    double A = 0, B = 0, C = 0, D = 0, F = 0;
    double mediaNota = 0, media = 0;
    printf("Digite uma nota: ");
    scanf("%d", &grau);
    
    while(grau != -1){
        
        switch (grau)
        {
            case 5:
                aConta++;
                A += grau;
                break;
            case 4:
                bConta++;
                B += grau;
                break;
            case 3:
                cConta++;
                C += grau;
                break;
            case 2:
                dConta++;
                D += grau;
                break;
            case 1:
                fConta++;
                F += grau;
                break;    
            default:
                printf("Digite notas de 1 a 5.\n");
                break;
        }
        printf("Para encerrar digite -1, ou...\n");
        printf("Digite a nota: ");
        scanf("%d", &grau);
    }
    media = (double) (A + B + C + D + F) / (aConta + bConta + cConta + dConta + fConta);
    printf("A media da sala e %.2lf\n", media);
    
    if (media != -1) {
        
        if (media == 5) {
            printf("Turma nota A.\n");
        }
        
        else
        {
            
            if (media < 5 && media >= 4) {
                printf("Turma nota B.\n");
            }
            
            else
            {
                
                if (media < 4 && media >= 3) {
                    printf("Turma nota C.\n");
                }
                
                else
                {
                    
                    if (media < 3 && media >= 2) {
                        printf("Turma nota D.\n");
                    }
                    
                    else
                    {
                        
                        if (media < 2 && media >= 0) {
                            printf("Turma nota F.\n");
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }  
    system("pause");
    return 0;
}