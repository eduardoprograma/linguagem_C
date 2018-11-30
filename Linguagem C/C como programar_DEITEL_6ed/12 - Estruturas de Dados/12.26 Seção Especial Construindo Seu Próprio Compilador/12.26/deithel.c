/*(A Linguagem Simples) Antes de começar a construir o compilador, analisaremos uma linguagem de alto nível simples, porém poderosa, similar às primeiras versões da popular linguagem BASIC. Chamamos a linguagem Simples. Toda sentença da linguagem Simples consiste em um número de Unha e uma instrução. Os números de linhas devem aparecer na ordem ascendente. Cada instrução começa com um dos seguintes comandos: rem, input, let, print, goto, if/goto ou end (veja a Fig. 12.23). Todos os comandos, exceto end, podem ser usados repetidamente. A linguagem Simples calcula apenas expressões inteiras usando os operadores +, -, * e /. Esses operadores possuem a mesma precedência que na linguagem C. Os parênteses podem ser usados para modificar a ordem de cálculo de uma expressão.

Nosso compilador Simples reconhece apenas letras minúsculas. Todos os caracteres em um
arquivo Simples devem constar de letras minúsculas (letras maiúsculas resultam em um erro de sintaxe, a menos que apareçam em uma sentença iniciada com rem, caso em que são ignoradas). Um nome de variável é uma única letra. A linguagem Simples não permite nomes de variáveis descritivos, portanto, essas devem ser explicadas em comentários que indiquem seu uso no programa. A linguagem Simples usa apenas variáveis inteiras e não possui declaração de variáveis — a simples menção de um nome de variável em um programa faz com que ela seja declarada e inicializada automaticamente com o valor zero. A sintaxe da linguagem Simples não permite manipulação de strings (ler uma string, escrever uma string, comparar strings etc). Se for encontrada uma string em um programa Simples (depois de um comando diferente de rem), o compilador gera um erro de sintaxe. Nosso compilador assumirá que os programas em Simples foram digitados corretamente. O Exercício 12.29 pede ao aluno que modifique o compilador para realizar a verificação de erros de sintaxe

FIGURA 594.

10  rem determina e imprime a soma de dois inteiros 
15  rem 
20  rem recebe os dois inteiros 
30  input a 
40  input b 
45  rem
50  rem soma os inteiros e armazena o resultado em c 
60  let c = a + b 
65  rem 
70  rem imprime o resultado 
80  print c 
90  rem termina a execução do programa 
99  end

A linguagem Simples usa a instrução condicional if/gotoea instrução incondicional goto para alterar o fluxo de controle durante a execução de um programa. Se a condição na instrução if/goto for verdeira, o controle é transferido para uma linha específica do programa. Os seguintes operadores relacionais e de igualdade são válidos em uma instrução if/goto: <, >, <=, >=, == ou ! =. A precedência desses operadores é a mesma do C
Vamos examinar vários exemplos de programas na linguagem Simples que demonstram seus recursos. O primeiro programa (Fig. 12.24) lê dois inteiros do teclado, armazena os valores nas variáveis a e b e calcula e imprime sua soma (armazenada na variável c).
O programa da Fig. 12.25 determina e imprime o maior de dois inteiros. Os inteiros são fornecidos por meio do teclado e armazenados em s e t. A instrução if/goto verifica a condição s >= t. Se a condição for verdadeira, o controle é transferido para a linha 90 e s é impresso; caso contrário, t é impresso e o controle é transferido para a instrução end na linha 99, onde o programa termina.
A linguagem Simples não fornece uma estrutura de repetição (como as estruturas for, whi le ou do/while). Entretanto, a linguagem Simples pode simular cada uma das estruturas de repetição do C usando as instruções if/goto e goto. A Fig. 12.26 usa um loop controlado por sentinela para calcular o quadrado de vários inteiros. Cada inteiro é fornecido por meio do teclado e armazenado na variável j. Se o valor fornecido for o sentinela -9999, o controle é transferido para a linha 99 quando o programa termina. Caso contrário, o quadrado de j é atribuído a k, k é impresso na tela e o controle é passado para a linha 20, onde o próximo inteiro é recebido.
Usando os programas das Figs. 12.24, 12.25 e 12.26 como guia, escreva um programa na linguagens Simples que realize cada uma das seguintes tarefas:
10  rem determina o maior entre dois inteiros
20  input s 
30  input t ^ 
32  rem 
35  rem verifica se s >= t
40  if s >= t goto 90
45  rem
50  rem t e maior que s, portanto imprime t
60  print t 
70  goto 99 
75  em 
80  rem s e maior ou igual a t, portanto imprime s
90  print s 
99  end
Encontrar o maior de dois inteiros

10  rem calcula o quadrado de vários inteiros
20  input j 
23  rem 
25  rem verifica o valor sentinela
30  if j == -9999 goto 99 
33  rem 
35  rem calcula o quadrado de j e atribui o resultado a k
40  let k = j * j 
50  print k ^ 
53  rem 
55  rem loop para obter o próximo j 
60  goto 2 0 
99  end
Calcula o quadrado de vários inteiros.
    a) Receba três números inteiros, calcule sua média e imprima o resultado. 
    b) Use um loop controlado por sentinela para receber 10 inteiros e calcule e imprima sua soma. 
    c) Use um loop controlado por contador para receber 7 inteiros, alguns positivos e outros negativos, e calcule e imprima sua média. 
    d) Receba uma série de inteiros e determine e imprima o maior. O primeiro inteiro recebido indica quantos números devem ser processados. 
    e) Receba 10 inteiros e imprima o menor. 
    f) Calcule e imprima a soma dos inteiros pares de 2 a 30. 
    g) Calcule e imprima o produto dos inteiros ímpares de 1 a 9.*/