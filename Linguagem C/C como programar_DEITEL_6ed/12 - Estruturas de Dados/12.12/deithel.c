/*As pilhas são usadas por compiladores para ajudar no processo de calcular expressões e gerar código em linguagem de máquina. Neste e no próximo exercício, investigamos como os compiladores calculam ex-pressões aritméticas que consistem apenas em constantes, operadores e parênteses.
Os seres humanos geralmente escrevem expressões como 3 + 4 e 7 / 9 nas quais o operador (+ ou / aqui) é escrito entre seus operandos — isso é chamado notação infixada (infix). Os computadores 1 "preferem" a notação posfixada (postfix) na qual o operador é escrito à direita de seus dois operandos. As expressões infixas anteriores apareceriam em notação posfixada como 3 4 + e7 9 /.respectivamente.
Para calcular uma expressão infixada complexa, um compilador deveria
converter inicialmente a expressão para notação posfixada e depois calcular a versão posfixada da expressão. Cada um desses algoritmos exige apenas uma única passada da esquerda para a direita na expressão. Cada algoritmo usa uma pilha em suporte à sua operação e em cada um deles a pilha é usada com um objetivo diferente.
Neste exercício, você escreverá uma versão em C do algoritmo de conversão
infixada-para-posfixada. No exercício seguinte, você escreverá uma versão em C do algoritmo de cálculo da expressão.
Escreva um programa que converta uma expressão aritmética comum infixada
(assuma que foi fornecida uma expressão válida) com dígitos inteiros simples como
        (6+2) *5-8/4
em uma expressão posfixada. A versão posfixada da expressão infixada anterior
é 62 + 5*84/-
O programa deve ler a expressão no array de caracteres infix e usar versões
modificadas das funções de pilhas implementadas neste capítulo para auxiliar a criação da expressão posfixada no array de caracteres postfix. O algoritmo para a criação da expressão posfixada é o seguinte:
    1) Coloque um parêntese esquerdo ' ( ' na pilha. 
    2) Acrescente um parêntese direito ') ' no final de infix. 
    3) Enquanto a pilha não estiver vazia, leia infix da esquerda para a direita e faça o seguinte:
Se o caractere atual em infix for um dígito, copie-o para o próximo elemento de postfix.
Se o caractere atual em infix for um parêntese esquerdo, coloque-o na pilha. 
Se o caractere atual em infix for um operador. 
Remova os operadores (se houver algum) no topo da pilha enquanto eles tiverem precedência maior ou igual à do operador atual e insira os operadores removidos em postfix. Coloque na pilha o caractere atual em infix. 
Se o caractere atual em infix for um parêntese direito 
Remova os operadores do topo da pilha e insira-os em postf ix até que um parêntese esquerdo esteja no topo da pilha. 
Remova (e elimine) da pilha o parêntese esquerdo. Os seguintes operadores aritméticos são permitidos em uma expressão: 
    + adição
    - subtração 
    * multiplicação 
    * / divisão * 
    * A^exponenciação * 
    * % resto (modulus)
A pilha deve ser conservada por meio das seguintes declarações: 
    struct noPilha{ 
        char dados; 
        struct noPilha *proximoPtr; >;
        typedef struct noPilha NOPILHA; typedef NOPILHA *NOPILHAPTR;
O programa deve consistir em main e oito outras funções com os seguintes cabeçalhos: void converteParaPostfix(char infix[], char postfix[]) 
Converte a expressão infixada para a notação posfixada. int seOperador(char c) 
Determina se c é um operador, int precedência(char operadorl, char
operador2) 
Determina se a precedência de operadorl é menor, igual ou maior do que a de operador2. 
A função retorna — 1, 0 e 1, respectivamente, void push(NOPILHAPTR *topoPtr, char valor) 
Coloca um valor na pilha, char pop(NOPILHAPTR *topoPtr) 
Remove um valor da pilha, char topoPilha(NOPlLHAPTR topoPtr) 
Retorna o valor do topo da pilha sem retirá-lo. int estaVazia(NOPILHAPTR topoPtr)
Determina se a pilha está vazia, void imprimePilha(NOPILHAPTR topoPtr) Imprime a pilha.*/