/*(Proteção de Cheques) Os computadores são empregados freqüentemente em sistemas de gravação de cheques como aplicativos de folhas de pagamento e contabilidade. Muitas histórias estranhas são contadas a respeito de cheques de pagamentos semanais serem impressos (por engano) com quantias superiores a 1 milhão de dólares. Quantias duvidosas são impressas por sistemas computadorizados de gravação de cheques devido a falhas humanas e/ou de máquina. Os projetistas de sistemas, obviamente, fazem todos os esforços para construir controles em seus sistemas e evitar a emissão de cheques errados.
Outro problema sério é a alteração intencional da quantia do cheque por alguém que pretenda descontá-lo fraudulentamente. Para evitar que a quantia seja alterada, a maioria dos sistemas computadorizados de gravação de cheques emprega uma técnica chamada proteção de cheques.
Os cheques destinados à impressão por computador contêm um número fixo de espaços nos quais o computador pode imprimir uma quantia. Suponha que um cheque para pagamento contenha oito espaços em branco nos quais o computador deve imprimir a quantia de um pagamento semanal. Se a quantia for grande, todos os oitos espaços serão preenchidos, por exemplo:

1,230.60 (quantia do cheque)
12345678 (números das posições)

Por outro lado, se a quantia for menor do que $1000, vários espaços serão deixados originalmente em branco. Por exemplo, 
99.87 12345678 
contém três espaços em branco. Se for impresso um cheque com espaços em branco, fica mais fácil alguém alterar a quantia impressa. Para evitar que um cheque seja alterado, muitos sistemas de gravação de cheques inserem asteriscos iniciais para proteger a quantia, como se segue:
***99.87 12345678
Escreva um programa que receba um valor de uma quantia a ser impressa em um cheque e depois imprima a quantia no formato de proteção de cheques, com os asteriscos iniciais, se necessário. Admita que há nove espaços disponíveis para a impressão da quantia.*/