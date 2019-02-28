#include <stdio.h>
#include <string.h>
struct local
{
    char endereco[100];
    int numero;
};
struct cadastro
{
    char nome[100];
    int idade;
    struct local d;
};
int main()
{
    struct cadastro c;
    int i;
    
    
    printf("Digite o Nome: ");
    gets(c.nome);
    printf("Digite a idade: ");
    scanf("%d", &c.idade);
    printf("Digite o Nome: ");
    gets(c.d.endereco);
    printf("Digite a idade: ");
    scanf("%d", &c.d.numero);
        return 0;
}