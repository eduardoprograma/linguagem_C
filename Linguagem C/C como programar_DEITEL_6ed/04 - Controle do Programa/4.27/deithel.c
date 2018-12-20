/*(Números de Pitágoras) Um triângulo retângulo pode ter lados que sejam todos inteiros. O conjunto de três valores inteiros para os lados de um triângulo retângulo é chamado números de Pitágoras. Esses três lados j devem satisfazer o relacionamento de que a soma dos quadrados dos dois lados (catetos) deve ser igual ao quadrado da hipotenusa. Encontre todos os números de Pitágoras para cateto1, cateto2 e hipotenusa menores que 500. Use três loops for aninhados que simplesmente experimentem todas as possibilidades. Este é um exemplo de cálculo por "força bruta". Ela não é esteticamente agradável para muitas pessoas. Mas há muitas razões para estas técnicas serem importantes. Em primeiro lugar, com o poder da computação crescendo a um ritmo tão acelerado, as soluções que levariam anos ou mesmo séculos de tempo de cálculo para serem produzidas com a tecnologia de apenas alguns anos atrás podem ser produzidas atualmente em horas, minutos ou mesmo segundos. Os chips recentes de microprocessadores podem processar mais de 100 milhões de instruções por segundo! E é provável que chips capazes de processar bilhões de instruções por segundo apareçam ainda nos anos 90. Em segundo lugar, como você aprenderá em cursos mais avançados de ciência da computação, há um número grande de problemas interessantes para os quais não há método conhecido para um algoritmo diferente daquele utilizado pela força bruta. Investigamos muitos tipos de metodologias para resolução de problemas neste livro. Levaremos em consideração muitos métodos de força bruta em vários problemas interessantes.*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int a = 1, b = 2, c = 3;

    for(c = 0; c <= 500;)
    {
        a++;
        b++;
        c = sqrt(pow(a, 2) + pow(b, 2));
        printf("O valor da hipotenusa %d\n", c);
    }
    printf("\n");
    b = 2, c = 3;
    for(a = 0; a <= 500;)
    {
        b++;
        c++;
        a = abs(sqrt(pow(b, 2) + pow(c, 2)));
        printf("O valor do cateto oposto %d\n", a);
    }
    printf("\n");
    a = 1, c = 3;
    for(b = 0; b <= 500;)
    {
        a++;
        c++;
        b = abs(sqrt(pow(a, 2) + pow(c, 2)));
        printf("O valor do cateto adjacente %d\n", b);
    }
    return 0;
}