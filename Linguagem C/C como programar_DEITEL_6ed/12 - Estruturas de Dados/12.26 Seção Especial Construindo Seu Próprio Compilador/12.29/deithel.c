/*(Modificações no Compilador da Linguagem Simples) Realize as seguintes modificações no compilador da linguagem Simples. Algumas dessas modificações também podem exigir modificações no programa do Simulador Simpletron escrito no Exercício 7.19.
    a) Permita que o operador resto (ou modulus, %) seja usado em instruções let. A Linguagem de Máquina Simpletron deve ser modificada para incluir uma instrução com o operador resto. 
    b) Permita a exponenciação em uma instrução let usando A como operador de exponenciação. A Linguagem de Máquina Simpletron deve ser modificada para incluir uma instrução com o operador exponenciação. 
    c) Permita que o compilador reconheça letras maiúsculas e minúsculas em instruções da linguagem Simples (e.g., ' A' é equivalente a ' a 1). Não são exigidas modificações no Simulador Simpletron. 
    d) Permita que as instruções input leiam valores de muitas variáveis como input x, y. Não são exigidas modificações no Simulador Simpletron.
    
    Figura 12.31 
    Pagina 605
    
    e) Permita que o compilador imprima vários valores em uma única instrução print como print a, b, c. Não são exigidas modificações no Simulador Simpletron. 
    f) Adicione recursos de verificação de sintaxe ao compilador para que sejam exibidas mensagens de erro quando erros de sintaxe forem encontrados em um programa Simples. Não são exigidas modificações no Simulador Simpletron. 
    g) Permita arrays de inteiros. Não são exigidas modificações no Simulador Simpletron. 
    h) Permita sub-rotinas especificadas pelos comandos gosub e return na linguagem Simples. O comando gosub passa o controle do programa para uma sub-rotina e o comando return passa o controle de volta para a instrução, após o gosub. Isso é similar à função call em C. A mesma sub-rotina pode ser chamada de muitos gosubs distribuídos ao longo de um programa. Não são exigidas modificações no Simulador Simpletron. 
    i) Permita estruturas de repetição da forma
        for x = 2 to 10 step 2 Instruções em Simples
        next
        Essa instrução for faz um loop de 2 a 10 com incrementos 2. A linha next marca o final do corpo da estrutura for. Não são exigidas modificações no Simulador Simpletron.
    j) Permita estruturas de repetição da forma
        for x = 2 to 10 
        Instruções em Simples
        next
        Essa instrução for faz um loop de 2 a 10 com incremento default 1. Não são exigidas modificações no Simulador Simpletron.
    k) Permita que o compilador processe entrada e saída de strings. Isso exige que o Simulador Simpletron seja modificado para processar e armazenar valores de strings. Sugestão: Cada palavra do Simpletron pode ser dividida em dois grupos, cada um deles contendo um inteiro de dois dígitos. Cada inteiro de dois dígitos representa o equivalente decimal ASCII de um caractere. Adicione uma instrução em linguagem de máquina que imprimirá uma string começando em um determinado local da memória do Simpletron. A primeira metade da palavra naquele local é o total de caracteres na string (i.e., o comprimento da string). Cada meia palavra seguinte contém um caractere ASCII expresso em dois dígitos decimais. A instrução em linguagem de máquina verifica o comprimento e imprime a string traduzindo cada número de dois dígitos em seu caractere equivalente.
    l) Permita que o compilador processe a adição de números de ponto flutuante a inteiros. O Simulador Simpletron também deve ser modificado para processar valores de ponto flutuante*/