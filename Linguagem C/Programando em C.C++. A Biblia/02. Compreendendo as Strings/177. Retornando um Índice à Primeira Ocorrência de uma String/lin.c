// Programa: lin.c 
// Escrito por: Eduardo Felizardo Cândido
// Data de criação:  18/06/2019
// Propósito: Obter um índice para o caractere desejado subtraindo o endereço inicial da string do ponteiro

/*Na Dica 176 você aprendeu como usar a função strchr para obter um ponteiro para a primeira ocorrência de um caractere dentro de uma string. No entanto, se você tratar as strings como matrizes, e não como ponteiros, provavelmente irá preferir trabalhar com um índice para o caractere, em vez de com um ponteiro. Você pode usar a função strchr para obter um índice para o caractere desejado subtraindo o endereço inicial da string do ponteiro que strchr retorna, como mostrado aqui:

char_ptr = strchr(string, caractere); 
indice = char_ptr - string; 

Se strchr não encontrar o caractere na string, então o valor que strchr atribuir ao índice será igual ao tamanho da string. Além de usar strchr como detalhado nesta dica, você também pode usar a função str_indice, como mostrado aqui: 

Se strchr não encontrar o caractere na string, então o valor que strchr atribuir ao índice será igual ao tamanho da string. Além de usar strchr como detalhado nesta dica, você também pode usar a função str_indice, como mostrado aqui:

int str_indice(const char *string, int letra) 
{
    char *original = string; 
    
    while ((‘string 1= letra) && (*string)) 
    {
        string++;
    }
    return(string - original);
}*/