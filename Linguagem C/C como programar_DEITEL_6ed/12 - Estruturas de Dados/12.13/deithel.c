/*Escreva um programa que calcule uma expressão posfixada (admita que ela é válida) como 62 + 5*84/-
O programa deve ler em um array de caracteres uma expressão posfixada consistindo em dígitos e operadores. Usando versões modificadas das funções de pilhas implementadas anteriormente neste capítulo, o programa deve examinar a expressão e calculá-la. O algoritmo é o seguinte: 
    1) Coloque o caractere NULL (' \ 0 ') no final da expressão posfixada. Quando o caractere NULL for encontrado, não se faz necessário mais nenhum processamento. 
    2) Enquanto ' \ 0 ' não for encontrado, leia a expressão da esquerda para a direita. Se o caractere atual for um dígito. coloque seu valor inteiro na pilha (o valor inteiro de um caractere é seu valor no conjunto de caracteres menos o valor de ' 0 ' no conjunto de caracteres do computador). Caso contrário, se o caractere atual for um operador. Retire os dois elementos do topo da pilha e coloque-os nas variáveis x e y. Calcule y operador x. Coloque o resultado do cálculo na pilha. 
    3) Quando o caractere NULL for encontrado na expressão, retire o valor do topo da pilha. Esse é o resultado da expressão posfixada. 
Nota: Em 2), se o operador for ' / ', o topo da pilha for 2 e o próximo elemento na pilha for 8, então coloque 2 em x, 8 em y, calcule 8 / 2 e coloque o resultado, 4, de volta na pilha. Essa nota também se aplica ao operador ' - '. São as seguintes as operações aritméticas permitidas em uma expressão: 
    + adição 
    - subtração 
    * multiplicação / divisão ^ exponenciação % resto (modulus)
A manutenção da pilha deve ser realizada por meio das seguintes declarações:
    struct noPilha { int dados
    struct noPilha *proximoPtr; };
    typedef struct noPilha NOPILHA; typedef NOPILHA *NOPILHAPTR;
O programa deve consistir em main e seis outras funções com os seguintes
cabeçalhos:
    int calculaExpressaoPosfixada(char *expr) 
    Calcula a expressão posfixada. 
    int calcula(int opl, int op2, char operador) 
    Calcula a expressão opl operador op2. 
    void push(NOPILHAPTR *topoPtr, int valor)
    Coloca um valor na pilha, 
    int pop(NOPILHAPTR *topoPtr) 
    Retira um valor da pilha, 
    int estaVazia(NOPILHAPTR topoPtr) 
    Determina se a pilha está vazia, 
    void imprimePilha(NOPILHAPTR topoPtr) 
    Imprime a pilha.*/