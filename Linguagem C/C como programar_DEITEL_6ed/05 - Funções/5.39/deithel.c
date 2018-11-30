/*(Torres de Hanói) Todo cientista computacional principiante deve lidar com determinados problemas clássicos, e o problema das Torres de Hanói (veja a Fig. 5.18) é um dos mais famosos. Diz a lenda que em um templo do Extremo Oriente os sacerdotes estão tentando mover uma pilha de discos de um pino para outro. A pilha inicial tinha 64 discos colocados em um pino e organizados na ordem decrescente, da base para o topo. Os sacerdotes estão tentando mover a pilha desse pino para um segundo pino com a restrição de que exatamente um disco deve ser movido de cada vez e em nenhum momento um disco maior pode ser colocado sobre um disco menor. Há um terceiro pino disponível para colocação temporária de discos. Teoricamente o mundo terminará quando os sacerdotes completarem sua tarefa, portanto há pouco estímulo para facilitarmos seus esforços.
Vamos assumir que os sacerdotes estão tentando mover os discos do pino 1 para o pino 3. Desejamos desenvolver um algoritmo que imprimirá a seqüência exata de transferências dc discos de um pino para outro. Se fossemos solucionar este problema com os métodos convencionais, rapidamente nos encontraríamos perdidos lidando com os discos. Em vez disso, se solucionarmos o problema com a recursão em mente, ele se torna imediatamente viável. Mover n discos pode ser considerado em termos dc mover apenas n - I discos (daí a recursão) como se segue:
1 Mova n - 1 discos do pino I para o pino 2. usando o pino 3 como área de armazenamento temporário. 
2. Mova o último disco (o maior) do pino 1 para o pino 3. 
3. Mova os n - 1 discos do pino 2 para o pino 3. usando o pino 1 como área dc armazenamento temporário.
O processo termina quando a última tarefa envolver mover n = 1 disco, i.e., o caso básico. Isso é realizado movendo simplesmente o disco para o seu destino final, sem a necessidade de uma área de armazenamento temporário.
Escreva um programa para resolver o problema das Torres de Hanói. Use uma função recursiva com quatro parâmetros:

1. O número de discos a serem movidos 
2. O pino no qual esses discos estão colocados inicialmente 
3. O pino para o qual essa pilha de discos deve ser movida 
4. O pino a ser usado como área de armazenamento temporário 
Seu programa deve imprimir instruções precisas necessárias para mover os discos do pino inicial para o pino de destino. Por exemplo, para mover uma pilha de três discos do pino 1 para o pino 3, seu programa deve imprimir a seguinte seqüência de movimentos: 
1 —> 3 (Isso significa mover o disco do pino 1 para o pino 3.) 
1 => 2 
3=>2 
1 => 3 
2 => 1 
2=>3 
1 -> 3*/