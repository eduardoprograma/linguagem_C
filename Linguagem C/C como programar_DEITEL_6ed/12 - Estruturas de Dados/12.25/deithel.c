/*(Imprimindo árvores) Escreva uma função recursiva saidaArvore para exibir uma árvore binaria na tela. A função deve exibir a árvore, linha após linha, com o topo da árvore na esquerda da tela e o final da árvore no lado direito da tela. Cada linha é exibida verticalmente. Por exemplo, a árvore binaria ilustrada na Fig. 12.22 é exibida da seguinte maneira:

FIGURA 592.

Observe que o nó da extremidade direita aparece no topo da saída, na coluna da extremidade direita, e que o nó raiz aparece no lado esquerdo da saída. Cada coluna da saída inicia cinco espaços à direita da coluna anterior. A função saidaArvore deve receber como argumentos um ponteiro para o nó raiz da árvore e um inteiro totalEspacos representando o número de espaços que antecedem o valor a ser exibido (essa variável deve iniciar com zero para que a exibição do nó raiz seja no lado esquerdo da tela). A função usa um percurso inorder modificado para exibir a árvore — ele inicia com o nó da extremidade direita da tela e segue em direção à esquerda. O algoritmo é o seguinte:
Enquanto o ponteiro para o nó atual não for NULL 
Chame recursivamente saidaArvore com a subárvore direita do nó atual e totalEspacos +5 
Use uma estrutura for para contar de 1 a totalEspacos e exiba os espaços 
Exiba o valor no nó atual 
Defina o ponteiro para o nó atual para apontar para a subárvore esquerda do nó atual Incremente totalEspacos de 5.*/