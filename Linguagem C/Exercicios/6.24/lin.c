//Nome do programa: deithel.c
//Nome do Autor: Eduardo Felizardo Cândido
//Data de Criação: 29/06/2019
//Descrição ou Finalidade: 
/*6.24 	Passeio do cavalo. 
	Um dos desafios mais interessantes que os jogadores de xadrez enfrentam é o problema do Passeio do Cavalo, proposto originalmente pelo matemático Euler. O problema é o seguinte: a peça do xadrez chamada cavalo pode se movimentar por um tabuleiro vazio e tocar cada um dos 64 quadrados uma e somente uma vez? Estudaremos esse problema interessante em detalhes.
	O cavalo se movimenta em forma de L (por duas casas em uma direção e depois por uma casa em uma direção perpendicular). Assim, por um quadrado no meio de um tabuleiro vazio, o cavalo pode fazer oito movimentos diferentes (numerados de 0 a 7), como mostra a Figura 6.25.
		a) Desenhe um tabuleiro de 8 por 8 em uma folha de papel e experimente o Passeio do Cavalo manualmente. Coloque 1 no primeiro quadrado para onde você moveu o cavalo, 2 no segundo quadrado, 3 no terceiro e assim por diante. Antes de iniciar o passeio, estime a que distância você acha que chegará, lembrando-se de que um passeio completo consiste em 64 movimentos. A que distância você chegará? Você chegou perto do resultado estimado?
		b) Agora, vamos desenvolver um programa que movimentará o cavalo em um tabuleiro. O tabuleiro em si é representado por um array com subscrito duplo de 8 por 8 board. Cada um dos quadrados é inicializado em zero. Descreveremos cada um dos oito movimentos possíveis em termos de seus componentes horizontal e vertical. Por exemplo, um movimento do tipo 0, como mostra a Figura 6.25, consiste em mover dois quadrados horizontalmente para a direita e um quadrado verticalmente para cima. O movimento 2 consiste em mover um quadrado horizontalmente para a esquerda e dois quadrados verticalmente para cima. Movimentos horizontais à esquerda e verticais para cima são indicados por números negativos. Os oito movimentos podem ser descritos por dois arrays de subscrito único, horizontal e vertical, da seguinte forma: 
					horizontal[ 0 ] =  2 
					horizontal[ 1 ] =  1 
					horizontal[ 2 ] = -1 
					horizontal[ 3 ] = -2 
					horizontal[ 4 ] = -2 
					horizontal[ 5 ] = -1 
					horizontal[ 6 ] =  1 
					horizontal[ 7 ] =  2

					vertical[ 0 ] = -1 
					vertical[ 1 ] = -2 
					vertical[ 2 ] = -2 
					vertical[ 3 ] = -1 
					vertical[ 4 ] =  1 
					vertical[ 5 ] =  2 
					vertical[ 6 ] =  2 
					vertical[ 7 ] =  1

		Considere que as variáveis currentRow e currentColumn indiquem a linha e coluna da posição atual do cavalo no tabuleiro. Para fazer um movimento do tipo moveNumber, onde moveNumber está entre 0 e 7, seu programa usa as instruções currentRow += vertical[ moveNumber ]; currentColumn += horizontal[ moveNumber ]; Mantenha um contador que varie de 1 a 64. Registre o maior contador em cada quadrado para onde o cavalo se mover. Lembre-se de testar cada movimento em potencial para ver se o cavalo já visitou esse quadrado. E, naturalmente, teste cada movimento potencial para garantir que o cavalo não saia do tabuleiro. Agora, escreva um programa para mover o cavalo pelo tabuleiro. Execute o programa. Quantos movimentos o cavalo fez?
		c) Depois de tentar escrever e executar um programa do Passeio do Cavalo, você provavelmente terá desenvolvido algumas ideias valiosas. Vamos usá-las para desenvolver uma heurística (ou estratégia) para movimentar o cavalo. A heurística não garante o sucesso, mas uma heurística cuidadosamente desenvolvida melhora bastante as chances de sucesso. Talvez você tenha observado que os quadrados externos, de certa forma, são mais trabalhosos do que os mais próximos do centro do tabuleiro. Na verdade, os quadrados mais problemáticos, ou inacessíveis, são os dos quatro cantos.
		A intuição pode sugerir que você deva tentar mover o cavalo para os quadrados mais problemáticos primeiro e deixar em aberto aqueles que são mais acessíveis, de modo que, quando o tabuleiro ficar congestionado, mais para o final do passeio, haverá uma chance maior de sucesso. Podemos desenvolver uma ‘heurística de acessibilidade’, classificando cada um dos quadrados de acordo com sua facilidade de acesso, e sempre movendo o cavalo para o quadrado (dentro dos movimentos permitidos, é claro) mais inacessível. Rotulamos um array de duplo subscrito accessibility com números indicando a partir de quantos quadrados cada quadrado em particular é acessível. Em um tabuleiro vazio, os quadrados do centro, portanto, são classificados como 8, os quadrados do canto são classificados como 2, e os outros quadrados têm números de acessibilidade 3, 4 ou 6, como mostrado a seguir:
					2 3 4 4 4 4 3 2 
					3 4 6 6 6 6 4 3 
					4 6 8 8 8 8 6 4 
					4 6 8 8 8 8 6 4 
					4 6 8 8 8 8 6 4 
					4 6 8 8 8 8 6 4 
					3 4 6 6 6 6 4 3 
					2 3 4 4 4 4 3 2
		Agora escreva uma versão do programa Passeio do Cavalo usando a heurística de acessibilidade. A qualquer momento, o cavalo deverá se mover para o quadrado com o menor número de acessibilidade. No caso de um empate, o cavalo pode se mover para qualquer um dos quadrados com a mesma classificação. Portanto, o passeio pode começar em qualquer um dos quatro cantos. [Nota: à medida que o cavalo se move pelo tabuleiro, seu programa deverá reduzir os números de acessibilidade quando mais e mais quadrados forem ocupados. Desse modo, em qualquer momento durante o passeio, o número de acessibilidade de cada quadrado disponível continuará sendo igual a exatamente o número de quadrados dos quais esse quadrado pode ser alcançado.] Execute essa versão de seu programa. Você consegue fazer um passeio completo? Agora, modifique o programa para realizar 64 passeios, um a partir de cada quadrado do tabuleiro. Quantos passeios completos você fez?
		d) Escreva uma versão do programa Passeio do Cavalo que, ao encontrar um empate entre dois ou mais quadrados, decida qual quadrado escolher ao considerar o que poderia acontecer adiante, verificando os quadrados alcançáveis pelos quadrados ‘empatados’. Seu programa deverá se mover para o quadrado pelo qual o próximo movimento alcançará um quadrado com o menor número de acessibilidade.*/

#include <stdio.h>

int main(void)		//inicio da função main.
{
	/* declaração das varáveis */
	/* entrada de dados */
	/* processamento */
	/* saída de dados */
}			//fim da função main.