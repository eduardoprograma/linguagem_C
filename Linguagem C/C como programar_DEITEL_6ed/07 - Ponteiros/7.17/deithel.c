/*(Simulação: A Lebre e a Tartaruga) Neste problema você recriará um dos momentos verdadeiramente grandiosos da história, que é a clássica corrida entre a lebre e a tartaruga. Você usará a geração aleatória de números para desenvolver uma simulação desse memorável evento. 
Nossos competidores começam a corrida no "quadrado 1" de setenta quadrados. Cada quadrado representa uma posição possível ao longo do trajeto da corrida. A linha de chegada está no quadrado 70. O primeiro competidor a alcançar ou passar do quadrado 70 ganha uma cesta de cenouras e alfaces. O trajeto da corrida inclui uma subida pela encosta de uma montanha escorregadia, portanto, ocasionalmente, os competidores perdem terreno. 
Há um relógio que emite um tique por segundo. A cada tique do relógio, seu programa deve ajustar a posição dos animais de acordo com as seguintes regras:

Figura pagina 355.

Use variáveis para controlar as posições dos animais (i.e., os números das posições vão de 1 a 70). Cada animal inicia na posição 1 (i.e., a "linha de partida"). Se um animal escorregar para antes do quadrado 1, leve o animal de volta para o quadrado 1. Gere as porcentagens da tabela anterior produzindo um inteiro aleatório, i, no intervalo
1 < i < 10. Para a tartaruga, realize um "movimento rápido" quando 1 < i < 5, um "escorregão" quando 6 < i < 7 ou um "movimento lento" quando 8 <= i <= 10. Use uma técnica similar para mover a lebre. Comece a corrida imprimindo 
BANG !!!!! 
E ELES PARTIRAM ! ! ! ! ! 
Depois, para cada tique do relógio (i.e., cada repetição do loop), imprima uma linha com 70 posições mostrando a letra T na posição da tartaruga e a letra L na posição da lebre. Ocasionalmente, os competidores estarão no mesmo quadrado. Nesse caso, a tartaruga morde a lebre e seu programa deve imprimir OUCH! I ! iniciando naquela posição. Todas as posições impressas diferentes das que levam o T, o L e a palavra OUCH! ! ! (no caso de os animais ocuparem o mesmo quadrado) devem estar em branco. 
Depois de cada linha ser impressa, teste se algum dos animais alcançou ou passou do quadrado 70. Em caso positivo, imprima o vencedor e termine a simulação. Se a tartaruga vencer, imprima TARTARUGA VENCEU!!! YAY!!! Se a lebre vencer, imprima Lebre venceu. Yuch. Se ambos os animais vencerem no mesmo tique do relógio, você pode querer favorecer a tartaruga ("a parte mais fraca") ou pode desejar imprimir Houve um empate. Se nenhum animal vencer, realize o loop novamente para simular o próximo tique do relógio. Quando estiver pronto para executar seu programa, reúna um grupo de amigos para assistir à corrida. Você ficará surpreso com o entusiasmo da audiência!*/