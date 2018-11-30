/*O que o seguinte programa faz?
 #include <stdio.h> 
 int mistério(unsigned); 
 main() { 
     unsigned x; printf("Digite um inteiro: "); 
     scanf("%u", &x); 
     printf("O resultado e %ã\n", mistério(x^); return 0; }
int mistério(unsigned bits) {
     unsigned i, mascara = 1 << 15, total = 0; 
     for (i = 1; i <= 16; i++, bits <<= 1) 
        if ((bits & mascara) == mascara) ++total; 
    return total % 2 == 0 ? 1 : 0
}*/