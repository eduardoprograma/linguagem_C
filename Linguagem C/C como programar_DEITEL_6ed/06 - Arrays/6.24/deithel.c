/*(Passeio do Cavalo) Um dos problemas mais interessantes para os fãs do jogo de xadrez é o problema do Passeio do Cavalo, proposto originalmente pelo matemático Euler. A questão é esta: a peça do jogo de drez chamada cavalo pode se mover ao longo de um tabuleiro vazio e passar uma única vez em cada uma 64 casas? Estudamos aqui esse interessante problema em profundidade. O cavalo faz movimentos em formato de L (percorre duas casas em uma direção e uma no sentido perpendicular às duas primeiras). Dessa forma, de uma casa no meio do tabuleiro, o cavalo pode fazer movimentos diferentes (numerados de 0 a 7), como mostra a Fig. 6.24. 
a) Desenhe um tabuleiro de xadrez 8-por-8 em uma folha de papel e tente fazer o Passeio do Cavalo a mão, Coloque um 1 no primeira casa para a qual se mover, um 2 na segunda casa, um 3 na terceira etc. Antes de começar os movimentos, imagine até onde você chegará, lembrando-se que um passeio completo consiste em 64 movimentos. Até onde você chegou? Você chegou perto do quanto havia imaginado?
Fig. pagina 293.
b) Agora vamos desenvolver um programa que moverá o cavalo pelo tabuleiro de xadrez. O tabuleiro em si é representado pelo array bidimensional 8-por-8 tabuleiro. Cada um dos quadrados (casas) é inicializado com o valor zero. Descrevemos cada um dos oito movimentos possíveis em termos de seus componentes horizontais e verticais. Por exemplo, um movimento do tipo 0. como mostra a Fig. 6.24, consiste em mover dois quadrados horizontalmente para a direita e um quadrado verticalmente para cima. O movimento 2 consiste em mover um quadrado horizontalmente para a esquerda e dois quadrados verticalmente para cima. Os movimentos horizontais para a esquerda e verticais para cima são indicados por números negativos. Os oito movimentos podem ser descritos por arrays bidimensionais, horizontal e vertical, como se segue:
horizontal[0] = 2 
horizontal[1] = 1 
horizontal[2] = -1 
horizontal[3] = -2 
horizontal[4] = -2 
horizontal[5] = -1 
horizontal [6] = 1 
horizontal[7] = 2

vertical[0] = -1 
vertical[1] = -2 
vertical[2] = -2 
vertical[3] = -1 
vertical[4] = 1 
vertical[5] = 2 
vertical[6] = 2 
vertical[7] = 1

As variáveis linhaAtual e colunaAtual indicam a linha e a coluna da posição atual do cavalo. Para fazer um movimento do tipo numMov, em que numMov está entre 0 e 7, seu programa usa as instruções

linhaAtual += vertical[numMov]; colunaAtual += horizontal[numMov];
Utilize um contador que varie de 1 a 64. Grave a última contagem em cada casa para a qual o cavalo se mover. Lembre-se de testar cada movimento potencial para verificar se cavalo já esteve naquele quadrado. E, obviamente, teste cada movimento potencial para se certificar de que o cavalo não está saindo do tabuleiro. Agora escreva um programa para mover o cavalo pelo tabuleiro de xadrez. Rode o programa. Quantos movimentos o cavalo fez? 
c) Depois de tentar escrever e rodar o programa do Passeio do Cavalo, provavelmente você adquiriu alguns conceitos valiosos. Usaremos esses conceitos para desenvolver uma heurística (ou estratégia) para mover o cavalo. A heurística não garante o sucesso, mas uma heurística desenvolvida cuidadosamente aumenta as probabilidades de ele ser atingido. Você pode ter observado que os quadrados externos são, de alguma forma, mais problemáticos do que os quadrados próximos ao centro do tabuleiro. Na realidade, os quadrados mais problemáticos, ou inacessíveis, são os quatro cantos. A intuição pode sugerir que você deve tentar mover o cavalo para os quadrados mais problemáticos e deixar livres os quadrados mais fáceis de atingir para que, quando o tabuleiro ficar congestionado próximo ao final do passeio, haja maior probabilidade de sucesso. Podemos desenvolver uma "heurística de acessibilidade" classificando cada um dos quadrados de acordo com sua acessibilidade e depois sempre mover o cavalo para o quadrado (dentro dos movimentos em forma de L, obviamente) que seja mais inacessível. Colocamos no array bidimensional acessibilidade os números que indicam a partir de quantos quadrados um determinado quadrado pode ser acessado. Portanto, em um tabuleiro vazio, as casas centrais são classificadas com 8s, os quadrados dos cantos são classificados com 2s e os outros quadrados possuem números de acessibilidade 3, 4 e 6, como é mostrado a seguir
2 3 4 4 4 4 3 2 
3 4 6 6 6 6 4 3 
4 6 8 8 8 8 6 4 
4 6 8 8 8 8 6 4 
4 6 8 8 8 8 6 4 
4 6 8 8 8 8 6 4 
3 4 6 6 6 6 4 3 
2 3 4 4 4 4 3 2
Agora escreva uma versão do programa do Passeio do Cavalo usando a heurística de acessibilidade. Em qualquer tempo, o cavalo deve se mover para o quadrado com menor número de acessibilidade. Em caso de empate, o cavalo pode se mover para qualquer dos quadrados que empataram. Portanto, o passeio pode começar em qualquer um dos quatro cantos. (Nota: A medida que o cavalo se mover no tabuleiro, seu programa deve reduzir os números de acessibilidade quando cada vez mais quadrados forem ocupados. Dessa forma, a qualquer instante durante o passeio o número de acessibilidade de cada quadrado disponível permanecerá igual ao número de quadrados dos quais aquele espaço pode ser alcançado.) Rode essa versão de seu programa. Você conseguiu fazer um passeio completo? Agora modifique o programa para executar 64 passeios, um para cada quadrado do tabuleiro. Quantos passeios completos você coseguiria fazer? 
d) Escreva uma versão do programa do Passeio do Cavalo na qual, ao encontrar um empate entre dois ou mais quadrados, você faça sua escolha verificando os quadrados que podem ser alcançados a partir dos quadrados "empatados". Seu programa deve fazer o movimento do cavalo para o quadrado para o qual o próximo movimento levar ao quadrado com menor número de acessibilidade*/