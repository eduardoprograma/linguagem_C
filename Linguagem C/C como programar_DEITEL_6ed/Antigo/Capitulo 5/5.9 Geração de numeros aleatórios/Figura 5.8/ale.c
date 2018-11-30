/*6000 lançamentos de um dado de seis faces*/
#include <stdio.h>
#include <stdlib.h>
main () {
    int face = 0, jogada, frequencia1 = 0, frequencia2 = 0, frequencia3 = 0,        frequencia4 = 0, frequencia5 = 0, frequencia6 = 0;
    int face1, face2, face3, face4, face5, face6, frequencia;
    
    for(jogada = 1; jogada <= 6000; jogada++)
    {
        face += 1;
        frequencia = 1 + rand()%25;
        
        switch (face)
        {
            case 1:
                ++frequencia;
                frequencia1 = frequencia;
                face1 = 1;
                break;
            case 2:
                ++frequencia;
                frequencia2 = frequencia;
                face2 = 2;
                break;
            case 3:
                ++frequencia;
                frequencia3 = frequencia;
                face3 = 3;
                break;
            case 4:
                ++frequencia;
                frequencia4 = frequencia;
                face4 = 4;
                break;
            case 5:
                ++frequencia;
                frequencia5 = frequencia;
                face5 = 5;
                break;
            case 6:
                ++frequencia;
                frequencia6 = frequencia;
                face6 = 6;
                break;
        }
    }
    printf("%s%13s\n", "Face", "Frequencia");
    printf("%d%13d\n", face1, frequencia1);
    printf("%d%13d\n", face2, frequencia2);
    printf("%d%13d\n", face3, frequencia3);
    printf("%d%13d\n", face4, frequencia4);
    printf("%d%13d\n", face5, frequencia5);
    printf("%d%13d\n", face6, frequencia6);
    //system("pause");
}