/*Escreva uma instrução ou um conjunto de instruções para realizar cada um dos pedidos a seguir. Admita que todas as manipulações acontecem em main (portanto, não há necessidade de endereços de variáveis ponteiros) e admita as seguintes definições:
        struct noGrau { 
            char sobrenome[20]; 
            float grau; 
            struct noGrau *proximoPtr; 
        };
        typedef struct noGrau NOGRAU; typedef NOGRAU *NOGRAUPTR;
    a) Crie um ponteiro para o início da lista chamado inicioPtr. A lista está vazia.
    b) Crie um novo nó do tipo NOGRAU que esteja apontado pelo ponteiro novoPtr do tipo NOGRAUPTR. Atribua a string " Jarbas" ao membro sobrenome e o valor 91. 5 ao membro grau (use strcpy ). Forneça quaisquer declarações e instruções necessárias. 
    c) Assuma que a lista para a qual inicioPtr aponta consiste atualmente em 2 nós — um contendo " Jarbas" e um contendo "Si 1 va". Os nós estão em ordem alfabética. Forneça as instruções necessárias para inserir nós em ordem alfabética que contenham os seguintes dados para sobrenome e grau:
    "Alves" 85.0 "Torres" 73.5 "Pereira" 66.5
    Use os ponteiros anteriorPtr, atualPtr e novoPtr para realizar as inserções. Declare para o que anteriorPtr e atualPtr apontam antes de cada inserção. Assuma que novoPtr aponta sempre para um novo nó e que os dados já foram atribuídos ao novo nó.
    d) Escreva um loop while que imprima os dados em cada nó da lista. Use o ponteiroatualPtr para se mover ao longo da lista. 
    e) Escreva um loop whi le que remova todos os nós da lista e libere a memória associada acada nó. Use os ponteiros atualPtr e tempPtr para percorrer a lista e liberar memória, respectivamente.*/